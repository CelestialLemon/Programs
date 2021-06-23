#include<iostream>
using namespace std;


class Convert
{
    //functions
    public:
    int CharToInt(char c);


};

inline int Convert::CharToInt(char c)
{
    if(c == 48)
        return 0;

        else if(c == 49)
        return 1;
        
        else if(c == 50)
        return 2;
        
        else if(c == 51)
        return 3;
        
        else if(c == 52)
        return 4;
        
        else if(c == 53)
        return 5;
        
        else if(c == 54)
        return 6;
        
        else if(c == 55)
        return 7;
        
        else if(c == 56)
        return 8;
        
        else if(c == 57)
        return 9;

        else
        {
            return -1;
        }
        
        
        
}


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
    bool checkValid();
    void PrintTime();
    
};



inline Time::Time()
{
    //constructor, initializes seconds to 0 incase user doesn't explicitly specifies;
    seconds = 0;
}

inline bool Time::checkValid()
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

void testingMethod(string names[])
{
    names[0] = "lol";
    names[1] = "rip";
}

void GetMeetingTimmings(string meetings[], int numOfMeetings)
{
    //Accepts num of strings as inputs that can later be converted into time
    for(int i=0; i<numOfMeetings; i++)
    {
        cin>>meetings[i];
    }
}

void PrintMeetingTimmings(string meetings[], int numOfMeetings)
{
    //prints strings of time
    for(int i=0; i<numOfMeetings; i++)
    {
        cout<<meetings[i];
        cout<<"\n";
    }
}

void SetStartTimes(string meetStart[], string meetings[], int numOfMeetings)
{
    //substring the meet start time from whole string i.e seperates 18:00 fro 18:00-17:00   
    for(int i=0; i<numOfMeetings; i++)
    {
        if(meetings[i].length() == 11) 
        {
              meetStart[i] = meetings[i].substr(0, 5);
        }

        else if(meetings[i].length() == 17)
        {
            meetStart[i] = meetings[i].substr(0, 8);
        }
    }
}

void SetEndTimes(string meetEnd[], string meetings[], int numOfMeetings)
{
   //substring the meet start time from whole string i.e seperates 17:00 fro 18:00-17:00
    for(int i=0; i<numOfMeetings; i++)
    {
        if(meetings[i].length() == 11) 
        {
              meetEnd[i] = meetings[i].substr(6, 5);
        }

        else if(meetings[i].length() == 17)
        {
            meetEnd[i] = meetings[i].substr(9, 8);
        }
    }

}

void SetTimes(Time times[], string timeStrings[], int numOfTimes)
{
    //converts array to strings into array to time 
    for(int i=0; i<numOfTimes; i++)
    {
        times[i].ExtractFromString(timeStrings[i]);
    }
}

int main()
{
    int numOfmeetings1, numOfmeetings2;
    string dayStart1, dayEnd1, dayStart2, dayEnd2;
    
    cout<<"Enter start of the day for person 1:";
    cin>>dayStart1;
    cout<<"Enter end of day for person 1:";
    cin>>dayEnd1;
    cout<<"Enter num of meetings for person 1: ";
    cin>>numOfmeetings1;
    
    string meetings1String[numOfmeetings1];
    string meetStart1String[numOfmeetings1];
    string meetEnd1String[numOfmeetings1];

    cout<<"Enter the meeting timmings for person 1:\n";
    GetMeetingTimmings(meetings1String, numOfmeetings1);
    SetStartTimes(meetStart1String, meetings1String, numOfmeetings1);
    SetEndTimes(meetEnd1String, meetings1String, numOfmeetings1);
    


    cout<<"Enter start of the day for person 2:";
    cin>>dayStart1;
    cout<<"Enter end of day for person 2:";
    cin>>dayEnd1;
    
    cout<<"Enter num of meetings for person 2: ";
    cin>>numOfmeetings2;
    
    string meetings2String[numOfmeetings2];
    string meetStart2String[numOfmeetings2];
    string meetEnd2String[numOfmeetings2];

    cout<<"Enter the meeting timmings for person 2:\n";
    GetMeetingTimmings(meetings2String, numOfmeetings2);
    SetStartTimes(meetStart2String, meetings2String, numOfmeetings2);
    SetEndTimes(meetEnd2String, meetings2String, numOfmeetings2);
    
    Time StartTimes1[numOfmeetings1], StartTimes2[numOfmeetings2], EndTimes1[numOfmeetings1], EndTimes2[numOfmeetings2];
    SetTimes(StartTimes1, meetStart1String, numOfmeetings1);
    SetTimes(StartTimes2, meetStart2String, numOfmeetings2);
    SetTimes(EndTimes1, meetEnd1String, numOfmeetings1);
    SetTimes(EndTimes2, meetEnd2String, numOfmeetings2);

    Time TimelineStart, TimelineEnd;
    

    


    
    
   
    return 0;
}