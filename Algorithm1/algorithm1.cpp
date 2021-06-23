#include<iostream>
using namespace std;

int main()
{
	int n, result;
	printf("Enter a number");
	cin>>n;
	
	for(int i = 0 ; i<= n ; i++)
	{
		result = i * 3;
		cout<<result;
		for(int j = 0 ; j< (2 * (i+1)) - 1; j++)
		{
			result = result + 2;
			cout<<" ";
			cout<<result;
		}
		
		cout<<"\n";
	}
}
