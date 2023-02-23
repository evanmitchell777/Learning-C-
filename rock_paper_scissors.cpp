#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <cctype>

using namespace std;

string choices[3]={"rock","paper","scissors"};

int main(){
srand (time(NULL));
int RandIndex = rand() %5;
string cc = choices[RandIndex];


cout<<"Enter rock, paper or scissors: ";
string user_choice;
cin>>user_choice;

cout<<"I choose "<< cc;

if (user_choice == "rock" && cc == "rock")
    cout<<" tie";
    else if  (user_choice == "rock" && cc =="paper")
    cout<<" you lose";
else if  (user_choice == "rock" && cc =="scissors")
    cout<<" you win";
else if (user_choice=="paper" && cc=="paper")
    cout<<" tie";
else if  (user_choice=="paper" && cc=="rock")
    cout<<" tie";
else if (user_choice =="paper" && cc == "scissors")
    cout<<" you lose";
else if( user_choice == "scissors" && cc== "scissors")
    cout<<" tie";
else if (user_choice=="scissors" && cc=="rock")
    cout<<" you lose";
else if  (user_choice== "scissors" && cc=="paper")
    cout<<" you win";

else
    cout<< "enter a valid choice";
return 0;
}
