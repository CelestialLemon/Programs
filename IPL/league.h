#include<iostream>
#include"match.h"


using namespace std;

fstream fpl;
//functions required for class functions, mini functions that do little things
int CalculateNumOfMatches(int numOfTeams)
{
    int numOfMatches = 0;
    for(int i=1; i<numOfTeams; i++)
    {
        numOfMatches += i;
    }

    return numOfMatches;
}


class League
{
    public:
    int numOfTeams;
    int numOfMatches;
    string name;
    Team* teams;
    Match* matches;
    void GetLeagueInfo();
    void DisplayLeagueInfo();
    void GetTeamsInfo();
    void DisplayTeamsInfo();   
};

//class functions

inline void League::GetLeagueInfo()
{
    char input;
    do
    {
        cout<<"Enter a name for the league: ";
        cin>>name;

        cout<<"Enter num of teams in the tournament: ";
        cin>>numOfTeams;

        numOfMatches =  CalculateNumOfMatches(numOfTeams);
        cout<<"How many times do teams play against each another?";
        int numOfHeadToHead;
        cin>>numOfHeadToHead;

        numOfMatches *= numOfHeadToHead;
        cout<<"Total num Of matches in league is "<<numOfMatches;

        cout<<"\nPress Y to confirm...";
        
        cin>>input;



    }while(!(input == 'y') && !(input == 'Y'));

    teams = new Team[numOfTeams];
    matches = new Match[numOfMatches];
}

inline void League::DisplayLeagueInfo()
{
    cout<<"\nName of the league : "<<name;
    cout<<"\nNumber of teams in the league: "<<numOfTeams;
    cout<<"\nNumber of matches in the league: "<<numOfMatches;
    cout<<"\n ONLY THIS MUCH HAS BEEN DONE UNITL NOW";
}


inline void League::GetTeamsInfo()
{
    cout<<"\nEnter Info about the teams participating in the league-";
    cout<<"\nThere are total "<<numOfTeams<<" in the league, enter their names";
    for(int i=0; i<numOfTeams; i++)
    {
        cout<<"\nTeam #"<<i<<" name: ";
        cin>>teams[i].name;
        
        teams[i].teamNumber = i;
        teams[i].points = 0;
    }
}

inline void League::DisplayTeamsInfo()
{
    for(int i=0; i<numOfTeams; i++)
    {
        cout<<"\nTeam #"<<teams[i].teamNumber<<" name : "<<teams[i].name;
        cout<<" points : "<<teams[i].points;
    }
}

//general functions
void WriteLeagueToFile(League league)
{
    string filepath = "E:\\Programs\\IPL\\Data\\" + league.name + "League";
    fpl.open(filepath, ios::out);

    fpl.write((char*)&league, sizeof(league));
    fpl.close();
}


void WriteMatchesToFile(string leagueName, int numOfMatches, Match *matches)
{
    string filepath = "E:\\Programs\\IPL\\Data\\" + leagueName + "matches";
    fpl.open(filepath, ios::out);

    for(int i=0; i<numOfMatches; i++)
    {
        fpl.write((char*)&matches[i], sizeof(matches[i]));
        
    
    }

    fpl.close();
}

void WriteTeamsToFile(string leagueName, int numOfTeams, Team *teams)
{
    string filepath = "E:\\Programs\\IPL\\Data\\" + leagueName + "teams";
    fpl.open(filepath, ios::out);
    
    for(int i=0; i<numOfTeams; i++)
    {
        fpl.write((char*)&teams[i], sizeof(teams[i]));
    }

    fpl.close();
    
}





League NewLeague()
{
    
   League league;
   league.GetLeagueInfo();
   league.GetTeamsInfo();

   WriteLeagueToFile(league);
   WriteMatchesToFile(league.name, league.numOfMatches, league.matches);
   WriteTeamsToFile(league.name, league.numOfTeams, league.teams);

   return league;



}




 

