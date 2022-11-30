#include <iostream>

int main(){
int numbah;

std::cout<<"enter dice type: ";
std::cin>>numbah;


srand(time(NULL));
int num = (rand() % numbah)+1;
std::cout <<num;

   return 0; 
}
