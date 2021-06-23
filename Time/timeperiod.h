#include<iostream>
#include"convert.h"
using namespace std;

class TimePeriod
{
    //variables
    int hours;
    int minutes;
    int seconds;
    
    public:
    TimePeriod();
    int Hours();
    int Minutes();
    int Seconds();
    void ExtractFromString(string str);
    bool CheckValid();

};

inline TimePeriod::TimePeriod()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}


inline void TimePeriod::ExtractFromString(string str)
{
    //Take string as input eg 18:00 or 17:07:56 and converts into time. can be called from a time object
    if(str.length() == 5)
    {
        //if string in format hh:mm
        Convert convert;
        hours = convert.CharToInt(str[0]) * 10 + convert.CharToInt(str[1]);
        minutes = convert.CharToInt(str[3]) * 10 + convert.CharToInt(str[4]);

        
    }

    else if (str.length() == 8)
    {
        //if string in format hh:mm:ss
        Convert convert;
        hours = convert.CharToInt(str[0]) * 10 + convert.CharToInt(str[1]);
        minutes = convert.CharToInt(str[3]) * 10 + convert.CharToInt(str[4]);
        seconds = convert.CharToInt(str[6]) * 10 + convert.CharToInt(str[7]);
    }
    

    else
    {
        //if format incompatible
        printf("can't extract time period from string");
    }

    
    
}

inline bool TimePeriod::CheckValid()
{
    //checks if the data in variable of a time object is valid. can be called by time object
    if(hours > 23 || hours < 0)
    return false;

    if(minutes > 59 || minutes < 0)
    return false;

    if(seconds > 59 || seconds < 0)
    return false;

    

    return true;


}


inline int TimePeriod::Hours()
{
    //return hours stored in the object, as hours is private variable it cannot be accessed externally
    return hours;
}

inline int TimePeriod::Minutes()
{
    //returns minutes
    return minutes;
}

inline int TimePeriod::Seconds()
{
    //returns seconds
    return seconds;
}



