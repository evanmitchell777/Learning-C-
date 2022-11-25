#include <iostream>


int main() {
int gamesw1, gamesw2;
std::cout <<"How many games has team 1 won?: ";
std::cin >>gamesw1;

std::cout <<"how many games has team 2 won: ";
std::cin >>gamesw2;
  
if(gamesw1>gamesw2)
  std::cout <<"team 1 is projected to win";
else if (gamesw2>gamesw1)
  std::cout<<"team 2 is projected to win";
else
  std::cout<<"its anybodies game!";
  
}
