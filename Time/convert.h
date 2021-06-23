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