#include<iostream>
#include<string.h>
using namespace std;
int scanCharInRepeatingString(char* input, int numOfPlacesToScan, char characterToScan)
{  
        int i, stringLength, numOfChars = 0, multiplier, remainingPlaces ;
        stringLength = strlen(input);
        for(i=0 ; i<stringLength ; i++)
        {
        	if(input[i] == characterToScan)                  //scan num of chars in given string
        	{  
        	    numOfChars ++ ;
			}
		}
		
		multiplier = numOfPlacesToScan / stringLength ;      //determine how many full given strings fit in given amount of places and hence determine multiplier
		remainingPlaces = numOfPlacesToScan % stringLength ;  
		numOfChars = numOfChars * multiplier ;
		
		for(i=0 ; i<remainingPlaces ; i++)
        {
        	if(input[i] == characterToScan)                   //determine remaining places to incomplete / last string to scan
        	{  
        	    numOfChars ++ ;                              //scan remaining places
			}                   
		}
		
		return numOfChars ;
        
}

int main()
{   int numOfPlacesToScan, numberOfChar;    //take the required inputs
    char input[100];
    cin>>input;
    cin>>numOfPlacesToScan;
    
    numberOfChar = scanCharInRepeatingString(input, numOfPlacesToScan, 'a');  // call the function
    cout<<numberOfChar;                                                       // display output
    
}
