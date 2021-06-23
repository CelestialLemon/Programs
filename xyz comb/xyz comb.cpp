#include<iostream>
using namespace std;

bool checkIfEqual(int a, int b, int c, int x, int y, int z, int target)
{
   int sum = ( (a*x) + (b*y) + (c*z) );
   if (sum == target)
   return true;
   else 
   return false;
}

bool checkIfPossible(int x, int y, int z, int target)
{   
	int xmax = target / x;
	int ymax = target / y;
	int zmax = target / z;
	bool matchFound = false;
	
	for(int a=0 ; a<xmax ; a++)
	{
		for(int b=0 ; b<ymax ; b++)
		{
			for(int c=0 ; c<zmax ; c++)
			{
				matchFound = checkIfEqual(a, b, c, x, y, z, target);
				if(matchFound == true)
				return true;
			}
		}
	}
	
	return false;
	
}

int main()
{
	cout<<"Enter values of x y and z: ";
	int x, y, z;
	cin>>x>>y>>z;
	cout<<"\nEnter target: ";
    int target;
    cin>>target;
    
    bool result = checkIfPossible(x, y, z, target);
    if(result == true)
    cout<<"\nPossible";
    else
    cout<<"\nNot Possible";
    
	return 0;
}
