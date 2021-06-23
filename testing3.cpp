#include<iostream>
#include<windows.h>
using namespace std;

class Level
{
	int level;
	int upgradeCost;
    float upgradeTime;
	
};

class ArmyComponent
{
	string name;
	int housingSpace;
	string type;
	Level levels[];
	
	public void PirntArraySize();
};

inline public void PrintArraySize()
{
	int size = sizeof(levels) / sizeof(Level);
	cout<<"Sizeof array is "<< size<<"\n";
}

int main()
{
	int opt;
	bool cont = false;
	
	do
	{
		system("CLS");
		cout<<"Choose Operation:\n1.Add new troop\n2.Add new level\n3.Print number of troops\n4.Print number of levels";
		
	}while(cont);
	
	ArmyComponent newComponent = new ArmyComponent();
	newComponent.PrintArraySize();
	
	return 0;
}
