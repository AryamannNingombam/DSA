#include <iostream>
#include <cmath>

class Solution {
public:
    double returnAdditionalHourAngleFromMinutes(const int &degrees){
        return degrees /12.0;
    };
    double getAngleFromMinutes(const int &minutes){
        return minutes * 6.0;
    };
    double getAngleFromHour(const int &hour){
        if (hour==12)return 0;
        return (hour*30);
    }

    
    double angleClock(int hour, int minutes) {
        double minuteAngle = this->getAngleFromMinutes(minutes);
        double hourAngle = this->getAngleFromHour(hour) + this->returnAdditionalHourAngleFromMinutes(minuteAngle);

        const double result = abs(minuteAngle - hourAngle);
        return result<180  ? result : 360-result;
        
        
    }
};