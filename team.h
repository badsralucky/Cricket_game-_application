#include<vector>
#include "player.h"   // getting <string> header file indriectly as we include it to <player.h> headewr file


class Team{
     public:
     Team();
       std::string name;
       int totalRunsScored;
       int wicketsLost;
       int totalBallsBowled;
       std :: vector<Player>players;


};