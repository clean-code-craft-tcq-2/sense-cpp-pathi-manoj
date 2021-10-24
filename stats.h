#include <vector>

struct Stats {
    float average ;
    float max ;
    float min ;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& statsData );
}

class StatsAlerter
{
    private:
    StatsAlerter( const float maxThreshold , std::vector<IAlerter> &alerts) {};
    checkAndAlert((const std::vector<float>& statsData ) ; 
};
