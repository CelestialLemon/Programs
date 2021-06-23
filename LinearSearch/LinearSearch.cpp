#include<iostream>
using namespace std;

inline int findLastAppearance(int* numbers, int numOfElements, int target)
{
	int position = -1;
	for(int i=0 ; i<numOfElements ; i++)
	{
		if(numbers[i] == target)
		position = i;
	}
	return (position+1);
}

int main()
{
	int numOfElements, target;
	cin>>numOfElements;
	cin>>target;
	int numbers[numOfElements];
	
	
	for(int i=0 ; i<numOfElements ; i++)
    {
    	cin>>numbers[i];
    }
    
    int position = findLastAppearance(numbers, numOfElements, target);
    cout<<position;

}
