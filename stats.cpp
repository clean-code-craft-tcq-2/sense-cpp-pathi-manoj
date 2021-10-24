#include "stats.h"
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
  

Stats Statistics::ComputeStatistics(const std::vector<float>& statsData ) {
    //Implement statistics here
    
    if ( statsData.empty() )
    {
        statsData.min = NAN;
        statsData.max = NAN;
        statsData.average = NAN;
    }
    else {
        statsData.min = *min_element( statsData.begin(), statsData.end());
        statsData.max = *max_element( statsData.begin(), statsData.end());
        statsData.average = reduce( statsData.begin(), statsData.end()) / statsData.size());  
    }
}
