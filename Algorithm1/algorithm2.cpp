#include<iostream>
using namespace std;

int main()
{
	int n = 6, doubleAmmo;
	
	for(int i=0 ; i<=n ; i++)
	{
		doubleAmmo = i;
		for(int j=0 ; j<2*i ; j++)
		{
			if(doubleAmmo > 0)
			cout<<2 * j;
			else
			cout<<j;
			
			cout<<" ";
			doubleAmmo--;
		}
		cout<<"\n";
	}
	return 0;
}
