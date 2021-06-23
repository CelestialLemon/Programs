#include<iostream>
using namespace std;

enum RomanCharacters
{
    I = 1,
    V = 5,
    X = 10,
    L = 50,
    C = 100,
    D = 500,
    M = 1000
};


string IntegerToRoman(int num)
{
    string rn = "";

    while(num >= 1000)
    {
        num = num - 1000;
        rn += "M";
    }

    if(num >= 900)
    {
        num = num - 900;
        rn += "CM";
    }

    if(num >= 500)
    {
        num -= 500;
        rn += "D";
    }

    if(num >= 400)
    {
        num -= 400;
        rn += "CD";
    }

    while(num >= 100)
    {
        num -= 100;
        rn += "C";
    }

    if(num >= 90)
    {
        num -= 90;
        rn += "XC";
    }

    if(num >= 50)
    {
        num -= 50;
        rn += "L";
    }

    if(num >= 40)
    {
        num -= 40;
        rn += "XL";
    }

    while(num >= 10)
    {
        num -= 10;
        rn += "X";
    }

    if(num >= 9)
    {
        num -= 9;
        rn += "IX";
    }

    if(num >= 5)
    {
        num -= 5;
        rn += "V";
    }
    
    if(num >= 4)
    {
        num -= 4;
        rn += "IV";
    }

    while(num >= 1)
    {
        num -= 1;
        rn += "I";
    }

    return rn;


    
    

}

int main()
{
    for(int i=0; i<501; i++)
    {
        string roman = IntegerToRoman(i);
        cout<<i<<" : "<<roman<<"\n";
    }
    return 0;
}