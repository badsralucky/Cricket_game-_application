#include"game.h"   //<iostream also included in this header file>

using namespace std;

int main(){
    Game game;
    game.welcome();
    cout << " \n Press enter to continue";
    getchar();

    game.showALLPlayers();

    cout <<"\nPlease enter to continue";
    getchar();

    game.selectPlayers();
    game.showTeamPlayers();
    
    cin.ignore(numeric_limits<streamsize>::max(),'\n');


     cout <<"\nPlease enter to Toss";
    getchar();
    game.Toss();

    // game.tossChoice(Team)

    game.startFirstInnings();
    
  return 0;
}