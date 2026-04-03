#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
#include "team.h"   //<vector> <string> "plyaers.h"

class Game{
     public:
       Game();
         int playersPerTeam;
         int maxBalls;
         int totalPlayers;
         std :: string players[11];

         bool isFirstInnings;
         Team teamA ,teamB;                  //objects
         Team *battingTeam, *bowlingTeam;   //objects
         Player *batsman , *bowler;        //objects

        void welcome();
        void showALLPlayers();
        int takeIntegerInput();
        void selectPlayers();
        bool validateSelectedPlayer(int);
        void showTeamPlayers();
        void Toss();
        void tossChoice(Team);
        void startFirstInnings();
        void initializePlayers();
        void playInnings();
        void  bat();
        bool validatingInningsScore();
        void showGameScorecard();

};