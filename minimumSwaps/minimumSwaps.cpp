#include<iostream>
using namespace std;
inline int minimumSwaps(int* arr, int numOfElements)
{
	int i, numOfSwaps =0, continues=1;
	while(continues ==1)
	{  	   
	   continues = 0;
	   for(i=1 ; i<=numOfElements; i++)
	   {
	   
		if(arr[i] == i)
		{
			//random thing		
		}
		else
		{
			arr[0] = arr[arr[i]];
			arr[arr[i]] = arr[i];
			arr[i] = arr[0];
		     numOfSwaps++;
			 continues = 1;	
		}
       }
	}
	
	return numOfSwaps;
}
int main()
{
	int result, numOfElements, i;
	cin>>numOfElements;
	int arr[numOfElements +1] ;
	
	for(i=1 ; i<=numOfElements ; i++)
	{
		cin>>arr[i];
	}
	
	result = minimumSwaps(arr, numOfElements);

    cout<<<result;
	
	return 0;	
}
