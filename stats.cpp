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
