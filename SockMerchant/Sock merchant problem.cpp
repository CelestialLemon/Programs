#include<iostream>
using namespace std;

int sockMerchant(int numOfSocks, int* sockArray)
{  int i,j, matchFound, numOfPairs = 0;
   
  while (numOfSocks > 1) 
{   matchFound = 0;                          //reinitialize matchFound as 0 at start to new search round
    for (i=1 ; i<numOfSocks ; i++)
   {   if(sockArray[0] == sockArray[i])     //search for sock with similar colour
       {   matchFound = 1;
           break;
	   }
   }
   
   for(j=0 ; j<(numOfSocks-1) ; j++)   //delete sock in first place regardless of match found or not 
   {
   	   sockArray[j] = sockArray[j+1] ;
   }
      
      numOfSocks--;
      i--;
   if(matchFound == 1)                      //if match found delete second in the pair and add 1 to numOfPairs
   {  
         numOfPairs++ ;
        for(j=i ; j<(numOfSocks-1) ; j++)    
        {
   	           sockArray[j] = sockArray[j+1] ;
        } 
        numOfSocks--;
    }
      
}
    return numOfPairs ;
}
int main()
{    int i, numOfSocks, numOfPairs;
     cin>>numOfSocks;                              //input number of socks to test
     int sockArray[numOfSocks];
     
     for(i=0 ; i<numOfSocks ; i++)
     { 
        cin>>sockArray[i];                        //input sock type for given number of socks
	 }
     numOfPairs = sockMerchant (numOfSocks, sockArray); 
     cout<<numOfPairs;
}
