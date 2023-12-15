#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getInput(){
    cout<<"Enter any input:";
      int input;
      cin>>input;
      if(input==1)
      {
          cout<<"Your Input: ROCK"<<endl;
      }
      else if(input==2)
      {
          cout<<"Your Input: PAPER"<<endl;
      }
      else if(input==3)
      {
          cout<<"Your Input: SCISSORS"<<endl;
      }
      return input;
}

int computersInput(){
    int computer_play = (rand() % 3)+1;
  if(computer_play==1)
      {
          cout<<"Computers Play: ROCK"<<endl;
      }
      else if(computer_play==2)
      {
          cout<<"Computers Play: PAPER"<<endl;
      }
      else if(computer_play==3)
      {
          cout<<"Computers Play: SCISSORS"<<endl;
      }
  return computer_play;
}

int winCheck(int input,int computer_play){
    if(input==1)
  {
      if(computer_play==1)
      {
          cout<<"Its a Draw!";
          return 0;
      }
      else if(computer_play==2)
      {
          cout<<"Computer Wins this round :(";
          return -1;
      }
      else
      {
          cout<<"Player Wins this round :)";
          return 1;
      }
  }
  else if(input==2)
  {
      if(computer_play==1)
      {
          cout<<"Player Wins this round :)";
          return 1;
      }
      else if(computer_play==2)
      {
          cout<<"Its a Draw!";
          return 0;
      }
      else
      {
          cout<<"Computer Wins this round :)";
          return -1;
      }
  }
  else
  {
      if(computer_play==1)
      {
          cout<<"Computer Wins this round :(";
          return -1;
      }
      else if(computer_play==2)
      {
          cout<<"Player Wins this round :)";
          return 1;
      }
      else
      {
          cout<<"Its a Draw!";
          return 0;
      }
  }
}


int main() {
    
  cout<<"Hello and Welcome! Enjoy playing Rock, Paper and Scissors here"<<endl<<endl<<endl;
  
  cout<<"You have three options to choose from"<<endl<<endl;
  
  cout<<"Type 1 and press Enter for ROCK"<<endl;
  cout<<"Type 2 and press Enter for PAPER"<<endl;
  cout<<"Type 3 and press Enter for SCISSORS"<<endl<<endl;
  
  int computerWins = 0;
  int playerWins = 0;
  
  for(int u=0;u<100;u++)
  {
  
  int input = getInput();
  
  if(input>3 || input<1){
      cout<<"Invalid Input"<<endl<<endl;
      continue;
  }
  
  int computer_play = computersInput();
  
  int result = winCheck(input,computer_play);
  
  if(result==-1){
      computerWins++;
      cout<<endl<<endl;
  }
  else if(result==1){
      playerWins++;
      cout<<endl<<endl;
  }
  else{
      cout<<endl<<endl;
  }
  
  cout<<"Score: "<<playerWins<<"-"<<computerWins<<endl<<endl;
  
  if(computerWins==3){
      cout<<"Sorry Player you just lost... Better luck next time";
    return 0;
  }
  else if(playerWins==3){
      cout<<"HOORAY! You just won... Well played!";
      return 0;
  }
  
  }
  
  

  return 0;
}
