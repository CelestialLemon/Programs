#include<iostream>
#include"league.h"
#include<fstream>
#include<string.h>
using namespace std;

fstream fp;

int ChooseOperation()
{
  cout<<"1. Add data to file\n2. Read data from file\n";
  int opt;
  cin>>opt;
  return opt;
}

int main()
{ 
   League league;
   string filepath;
   
   switch(ChooseOperation())
   {
     case 1:
       league = NewLeague();
      break;

     case 2:
     
      break;

     default:
      break;
   }

   

    

    return 0;
}





