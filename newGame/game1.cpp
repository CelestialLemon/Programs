#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int i;
	int num, numOfDraw = 101;
	float numOfDraws[10];
	float percentDraws[10];
	
	for(int i=0 ; i<10 ; i++)
	{
		numOfDraws[i] = 0;
	}
	
	for(int i=0 ; i<numOfDraw ; i++)
	{
		num = rand()%10;
		numOfDraws[num]++;
	}
	
	for(int i=0 ; i<10 ; i++)
	{
		percentDraws[i] = float(numOfDraws[i] / numOfDraw);
		percentDraws[i] *= 100;
	}
	
	
	for(int i=0 ; i<10 ; i++)
	{
		cout<<"num of times "<<i<<" was drawn was "<<percentDraws[i]<<"\n";
	}
	return 0;
}
