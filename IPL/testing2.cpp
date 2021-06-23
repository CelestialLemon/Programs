#include<iostream>
#include"league.h"
#include<fstream>
using namespace std;

fstream fps;

int ChooseOperation()
{
    int opt;
    cout<<"1. Add data to file\n2. Read data to file";
    cin>>opt;
    return opt;
}

int main()
{
    
   League league1, league2;
   
   switch(ChooseOperation())
   {
      case 1:
        
        league1.GetLeagueInfo();
        fps.open("E:\\Programs\\IPL\\Data\\leagueData", ios::out);
        fps.write((char*)&league1, sizeof(league1));
        league2.GetLeagueInfo();
        fps.write((char*)&league2, sizeof(league2));
        fps.close();

        break;
    
      case 2:
        fps.open("E:\\Programs\\IPL\\Data\\leagueData", ios::in);
        fps.read((char*)&league1, sizeof(league1));
        fps.read((char*)&league2, sizeof(league2));
        fps.close();

        league1.DisplayLeagueInfo();
        league2.DisplayLeagueInfo();


        break;

      default:
        break;
   }

     

    return 0;
}