#include<iostream>
using namespace std;

int searchFor(int input, int* towns, int rec)
{
	int i;
	for(i=0 ; i<rec ; i++)
	{
		if(towns[i] == input)
		return 1 ;
		
	}
	if(i>=rec)
	return 0;
}
int main()
{
	int i, j,  numOfTestCases, numOfTestCases1, numOfTowns = 0,numOfRoads;
	cin>>numOfTestCases;
	numOfTestCases1 = numOfTestCases ;
	while(numOfTestCases>0)
	{   numOfTowns  = 0;
		
		cin>>numOfRoads;
		int numOfTownsRec = numOfRoads * 2 ;
		int towns[numOfTownsRec] ;
		for(i=0 ; i<numOfTownsRec ; i++)
		{
			cin>>towns[i] ;
		}
		
	
	    for(i=1 ; i<10000 ; i++)
	    {
	    	numOfTowns = numOfTowns + searchFor(i, towns, numOfTownsRec) ;
		}
		
		cout<<numOfTowns<<" "; 
		numOfTestCases --;
	}
}
