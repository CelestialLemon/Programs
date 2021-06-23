#include<iostream>
using namespace std;
void bubbleSort(int* a, int s)
{  int i, j, k ;
	for (i=1 ; i<=s ; i++)
     {
         j=2;
         k=1;
         while (j<=s)
         {
             if (a[k] > a[j])
             {
                 a[0] = a[k];
                 a[k] = a[j];
                 a[j] = a[0];
             }
             j++;
             k++;
        
         }
     }
     
    
}
int main()
{
	int i, numOfTestCases, numOfTestCases1, numOfHouses, budget, sum ;
	cin>>numOfTestCases;
	numOfTestCases1 = numOfTestCases;
	int canBuy[numOfTestCases]; 
	while(numOfTestCases > 0)
	{   sum =0 ;
		canBuy[numOfTestCases] = 0;
		cin>>numOfHouses;
		cin>>budget;
		int costOfHouses[numOfHouses +1] ;
		
		for(i=1 ; i<numOfHouses+1 ; i++)
		{
			cin>>costOfHouses[i];
		}
		
		bubbleSort(costOfHouses, numOfHouses);
		
	   for(i=1 ; i<numOfHouses+1 ; i++)
	   {   
	   	  sum = sum + costOfHouses[i];
	   	  if(sum > budget)
	   	   break;
	   	  
	   	  
	   }
	  
	  canBuy[numOfTestCases] = i-1;		
		numOfTestCases--;
	}
	
	while(numOfTestCases1>0)
	{
		cout<<canBuy[numOfTestCases1]<<" ";
		numOfTestCases1--;
	}
}
