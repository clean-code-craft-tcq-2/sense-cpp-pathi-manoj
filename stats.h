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
    EmailAlert* _emailAlert;
    LEDAlert* _ledAlert;
    
    public:
    StatsAlerter( const float maxThreshold , std::vector<IAlerter*> &alerts) 
    {
    _maxThreshold = maxThreshold;
    _emailAlert = alerts.begin();
    _ledAlert = alerts.end();
    }
    
    void checkAndAlert(const std::vector<float>& statsData ) ; 
};
