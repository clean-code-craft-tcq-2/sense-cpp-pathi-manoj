#include <vector>

struct Stats {
    float average ;
    float max ;
    float min ;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& statsData );
}

class IAlerter 
{
    public: 
    IAlerter();
    
    struct EmailAlert 
    {
    bool emailSent ;
    };

    struct LEDAlert 
    {
    bool ledGlows ;
    };
};
