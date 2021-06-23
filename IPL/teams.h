#include<iostream>
#include<fstream>
using namespace std;



class Team
{
    
    public:
    int teamNumber;
    string name;
    int points;
    void GetTeamName();
    friend void CreateTeams(Team *teams, int numOfTeams);
    friend void SetTeamNumber(Team *teams, int numOfTeams);
    friend void ShowTeams(Team *teams, int numOfTeams);

};

inline void SetTeamNumber(Team *teams, int numOfTeams)
{
   for(int i=0; i< numOfTeams; i++)
   {
       teams[i].teamNumber = i;
   }
}

inline void Team::GetTeamName()
{
   printf("Enter name of team # %d", teamNumber);
   cin>>name;
}

inline void CreateTeams(Team *teams, int numOfTeams)
{
    for(int i=0; i<numOfTeams; i++)
    {
        teams[i].GetTeamName();

    }
}

inline void ShowTeams(Team *teams, int numOfTeams)
{
    for(int i=0; i<numOfTeams; i++)
    {
        cout<<"\nTeam #"<<i<<" : "<<teams[i].name;

    }
}




