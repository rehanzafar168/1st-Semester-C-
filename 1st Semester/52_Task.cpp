#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>

using namespace std;

string getcomputerchoice(){
int choice = rand() % 3 + 1;
switch (choice){
    case 1:
    return "rock";
    case 2:
    return "paper";
    case 3:
    return "scissor";
}
}
string fwinner(string player,string computer){
if(player == computer){
return "it's tie";
}
else if((player == "rock" && computer == "scissor" )|| (player == "scissor" && computer =="paper" )|| (player == "paper" && computer == "rock" )){
return "player";
}
else{
return "computer";
}
}
int main(){
    srand(time(0));
    // ofsteram game("Game.txt",ios::app);
cout<<"wellcome to Rock, Paper and scissor"<<endl;
cout<<"Choose Between Rock, Paper and Scissor:"<<endl;
string playerchoice;
cin>>playerchoice;
while(playerchoice != "rock" && playerchoice != "paper" && playerchoice != "scissor"){
cout<<"Invalid p
lease enter between rock,paper,and scissor!"<<endl;
cin>>playerchoice;
}
string computerchoice = getcomputerchoice();
cout<<"Computer Choice "<<computerchoice<<endl;
string winner = fwinner(playerchoice,computerchoice);
if(winner == "tie"){
cout<<"Game is tie";
}
else {
cout<<"The "<<winner<<" is Winner";
}
}