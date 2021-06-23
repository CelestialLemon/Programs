#include<iostream>
#include<string.h>
using namespace std;


int bubbleSort(char* arr, int numOfElements)
{
	int i,j , temp;
	for(i=0 ; i<numOfElements ; i++)
	{  
		for(j=0 ; j<(numOfElements -1) ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
				
				
			}
		}
	}

}

int main()
{
	
	char letters[] = {'b', 's', 'i', 'c', 't', 'l'};
	bubbleSort(letters, 6);
	cout<<letters;
	return 0;
}
