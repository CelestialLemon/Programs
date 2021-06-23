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

int ConvertRomanToInteger(string romanNumber)
{
    int number = 0;
    RomanCharacters currentCharacter = I, previousCharacter = I;

    for(int i = romanNumber.length() - 1; i>= 0; i--
    )
    {
        if(romanNumber[i] == 'I')
        {
            currentCharacter  = I;
        }

        else if(romanNumber[i] == 'V')
        {
            currentCharacter = V;
        }

        else if(romanNumber[i] == 'X')
        {
            currentCharacter = X;
        }

        else if(romanNumber[i] == 'L')
        {
            currentCharacter = L;
        }

        else if(romanNumber[i] == 'C')
        {
            currentCharacter = C;
        }

        else if(romanNumber[i] == 'D')
        {
            currentCharacter = D;
        }

        else if(romanNumber[i] == 'M')
        {
            currentCharacter = M;
        }

        if(currentCharacter >= previousCharacter)
        {
            number += currentCharacter;
        }

        else
        {
            number -= currentCharacter;
        }

        previousCharacter = currentCharacter;
        
    }

    return number;
}

int main()
{
    string romanNumber;
    cout<<"Enter a valid roman number : ";
    cin>>romanNumber;
    int number = ConvertRomanToInteger(romanNumber);
    cout<<"The number in integer is " << number;
    return 0;
}