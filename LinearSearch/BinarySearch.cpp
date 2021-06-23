#include<iostream>
using namespace std;

inline int binarySearch(int* elements, int numOfElements, int target)
{
	int max = numOfElements;
	int min = 0;
	int position;
	bool elementFound = false;
	
	while(!elementFound)
	{
		position = ( (min + max) / 2 );
		
		if(elements[position] == target)
		elementFound = true;
		
		if(elements[position] < target)
		min = position;
		
		if(elements[position] > target)
		max = position;
	}
	
	return (position + 1);
}

int main()
{
	int numOfElements;
	cin>>numOfElements;
	int elements[numOfElements];
	for(int i=0 ; i<numOfElements ; i++)
	{
		cin>>elements[i];
	}
	
	int numOfTargets;
	cin>>numOfTargets;
	int targets[numOfTargets];
	
	for(int i=0 ; i<numOfTargets ; i++)
	{
		cin>>targets[i];
	}
	
	int position;
	
	for(int i=0 ; i<numOfTargets ; i++)
	{
		position = binarySearch(elements, numOfElements, targets[i]);
    
        cout<<"the position of element is "<<position<<"\n";
	}
	
	return 0;
}
