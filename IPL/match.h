#include<iostream>
#include"teams.h"

using namespace std;

class Match
{
   int match_No;
   Team team1;
   Team team2;
   Team winner;
   int team1WinProbability;
   int team2WinProbability;
   

   public:
   Match();
};


inline Match::Match()
{
    team1WinProbability = 50;
    team2WinProbability = 50;
}