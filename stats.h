#include <vector>

struct Stats {
    float average ;
    float max ;
    float min ;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& statsData );
}

class IAlerter{
};

class EmailAlert:IAlerter{
    bool emailSent;
};
class LEDAlert:IAlerter{
    bool ledGlows;
};
class StatsAlerter:
{
    private:
    float _maxThreshold;
    std::vector<IAlerter*> _alerts;
    
    StatsAlerter( const float maxThreshold , std::vector<IAlerter> &alerts) 
    {
    _maxThreshold = maxThreshold;
    _alerts = &alerts;
    }
    
    void checkAndAlert((const std::vector<float>& statsData ) ; 
};
