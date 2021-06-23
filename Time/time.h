#include<iostream>
#include"timeperiod.h"
using namespace std;

class Time
{
    //variables
    int hours;
    int minutes;
    int seconds;

    //arrays

    //functions
    
    
    public:
    Time();
    void ExtractFromString(string str);
    bool CheckValid();
    void PrintTime();
    void AddTimePeriod(TimePeriod period);
    void SubtractTimePeriod(TimePeriod period);
    
};



inline Time::Time()
{
    //constructor, initializes seconds to 0 in-case user doesn't explicitly specifies;
    seconds = 0;
}

inline bool Time::CheckValid()
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

inline void Time::ExtractFromString(string str)
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
        printf("can't extract time from string");
    }

    
    
}


inline void Time::PrintTime()
{
    //prints the time as a string, can be called by time object
    printf("%02d:%02d:%02d", hours, minutes, seconds);
}


inline void Time::AddTimePeriod(TimePeriod period)
{
    //add a time period to time variable
    hours += period.Hours();
    minutes += period.Minutes();
    seconds += period.Seconds();


    //now converting to valid time; if 18:45:56 + 03:16:12 = 21:61:68 should be 22:02:08
    while(seconds >= 60)
    {
        seconds -= 60;
        minutes++;
    }

    while(minutes >= 60)
    {
        minutes -= 60;
        hours++;
    }

    while(hours >= 24)
    {
        hours -= 24;
    }
}


inline void Time::SubtractTimePeriod(TimePeriod period)
{   // subtract time period from time variable like 18:00 - 06:00 is 12:00
    hours -= period.Hours();
    minutes -= period.Minutes();
    seconds -= period.Seconds();


    //now converting to valid time , like 12:45:56 - 04:56:32 = 08:-14:32 i.e 07:46:32
    while(seconds < 0)
    {
        seconds = 60 + seconds;
        minutes--;
    }

    while(minutes < 0)
    {
        minutes = 60 + minutes;
        hours--;
    }

    while(hours < 0)
    {
        hours = 24 + hours;
    }


}





