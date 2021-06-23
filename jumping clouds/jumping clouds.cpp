#include<iostream>
using namespace std;

int cloudJump(int numOfClouds, int* path)
{   
	 int currentPosition = 0, numOfJumps = 0 ;         //initialize all variables to 0
	 
	 while(currentPosition < (numOfClouds-1) )       //repeat loop till reach second-last cloud as there is no cloud to go beyond last cloud
	 {
	 	if(path[currentPosition + 2] == 0)
	 	{
	 	     currentPosition = currentPosition + 2 ;  //if cloud 2 steps ahead is safe jump directly to it
			 numOfJumps++;	
		}
		
		else
		{
			currentPosition = currentPosition + 1;  //if cloud 2 steps ahead is not safe jump to cloud 1 step ahead
			numOfJumps++;
		}
	 }
	 
	 return numOfJumps;
}
int main()
{ 
   int i, numOfClouds, numOfJumps ;
   cin>>numOfClouds ;
   int path[numOfClouds];
   for(i=0 ; i<numOfClouds ; i++)                         //take input of number of clouds and path of clouds
   {
   	  cin>>path[i] ;                                    //clouds marked with 0 are safe and those marked with 1 are thunderheads
   }
   
   numOfJumps = cloudJump(numOfClouds, path);             //call function and pass required arguements
   cout<<numOfJumps ;                                //output result
   
}




