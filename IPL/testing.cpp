#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;

ifstream FileInputStream;


int main()
{
   
   
  system("RNG.exe");
  int num = 0;
  int numOf50andLess = 0, numOf51andMOre = 0;
  
  FileInputStream.open("RandomNumbers.txt", ios::in);
  for(int i=0; i<100; i++)
  {
    FileInputStream >> num;
    cout<<num;

    if(num < 51)
    numOf50andLess++;

    if(num >50)
    numOf51andMOre++;
  }

  float percent1 = (float)numOf50andLess / (float)100;
  float percent0 = (float)numOf51andMOre / (float)100;

  cout<<"\nPercent of below 50 : "<<percent0 <<" Percent of above 50 : "<<percent1;

   
  return 0;
   
}