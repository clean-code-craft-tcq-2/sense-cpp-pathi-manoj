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
    public:
    virtual ~IAlerter() {}
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
    EmailAlert* _emailAlert;
    LEDAlert* _ledAlert;
    
    public:
    StatsAlerter( const float maxThreshold , std::vector<IAlerter*> alerts) 
    {
    _maxThreshold = maxThreshold;
    _emailAlert = dynamic_cast<EmailAlert*>(alerts[0]);
    _ledAlert = dynamic_cast<LEDAlert*>(alerts[1]);
    }
    
    void checkAndAlert(const std::vector<float>& statsData ) ; 
};
