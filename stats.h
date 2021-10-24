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

class EmailAlert:public IAlerter{
    public:
    bool emailSent;
};
class LEDAlert:public IAlerter{
    public:
    bool ledGlows;
};
class StatsAlerter
{
    private:
    float _maxThreshold;
    std::vector<IAlerter*> _alerts;
    
    public:
    StatsAlerter( const float maxThreshold , std::vector<IAlerter*> &alerts) 
    {
    _maxThreshold = maxThreshold;
    _alerts = alerts;
    }
    
    void checkAndAlert(const std::vector<float>& statsData ) ; 
};
