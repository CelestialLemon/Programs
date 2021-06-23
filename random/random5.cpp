//print numbers with a speed

#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	int i=0;
	
	cout<<"Enter speed in milliseconds : ";
	int speed;
	cin>>speed;
	
	system("cls");
	while(true)
	{
		cout<<i<<"\n";
		i++;
		Sleep(speed);
	}
	
	return 0;
}
