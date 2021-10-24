#include "stats.h"
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;
  

Stats Statistics::ComputeStatistics(const std::vector<float>& statsData ) {
    //Implement statistics here
    
    struct Stats s;
    if ( statsData.empty() )
    {
        s.min = NAN;
        s.max = NAN;
        s.average = NAN;
      
      return s;
    }
    else {
        s.min = *min_element( statsData.begin(), statsData.end());
        s.max = *max_element( statsData.begin(), statsData.end());
        s.average = std::accumulate(statsData.begin(), statsData.end(),0.0) / statsData.size();  
      return s;
    }
}

void StatsAlerter::checkAndAlert(const std::vector<float>& statsData )
{
  float maxValue = *max_element( statsData.begin(), statsData.end());
  if(maxValue > _maxThreshold) 
  {
   EmailAlert *eAlert = dynamic_cast<EmailAlert*>(_alerts[0]);
   eAlert->emailSent = true;
    
   LEDAlert * lAlert = dynamic_cast<LEDAlert*>(_alerts[1]);
   lAlert ->ledGlows = true;
  }
  else
  {
   EmailAlert *eAlert = dynamic_cast<EmailAlert*>(_alerts[0]);
   eAlert->emailSent = false;
    
   LEDAlert * lAlert = dynamic_cast<LEDAlert*>(_alerts[1]);
   lAlert ->ledGlows = false;
  }
}
