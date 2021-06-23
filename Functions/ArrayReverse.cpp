#include<iostream>
#include<string.h>
using namespace std;

void ArrayReverse(int* numbers, int lengthOfArray)
{   int i, temp;

	int swapLength = lengthOfArray / 2 ;

	for(i=0 ; i<swapLength ; i++)
	{
		temp = numbers[i];
		numbers[i] = numbers[(lengthOfArray-1) - i];
		numbers[(lengthOfArray-1) - i] = temp ;
		
	}
	
	
}

void ArrayReverse(char* statement, int lengthOfArray)
{
	int i, swapLength = lengthOfArray / 2;
	char temp;
	
	for(i=0 ; i<swapLength ; i++)
	{
		temp = statement[i];
		statement[i] = statement[(lengthOfArray-1) - i];
		statement[(lengthOfArray-1) - i] = temp ;
		
	}
}
int main()
{   int lengthOfArray;
    cout<<"enter length of array\n";
	cin>>lengthOfArray ;
	int i, numbers[lengthOfArray];
	
	cout<<"Enter "<<lengthOfArray<<"elements.\n";
	for(i=0 ; i<lengthOfArray ; i++)
	{
		cin>>numbers[i];
	}
	
	ArrayReverse(numbers, lengthOfArray);
	cout<<"after reverse\n";
	for(i=0 ; i<lengthOfArray ; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	char statement[30];
	fflush(stdin);
	gets(statement);
	ArrayReverse(statement, strlen(statement));
	cout<<"After reverse\n";
	puts(statement);
	
	return 0;
	
}
