#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  srand (time(NULL));
  while (ture){
    char playagain;
    cout<<"Select the difficulty"<<endl;
    cout<<"For Easy press 1"<<endl<<"For Medium press 2"<<endl<<"For Hard press3"<<endl;
    int randomNumber;
    int guesses;

  if(difficulty==1){
    guesses = 1;
    randomNumber = rand() % 2 + 1;
    cout<<"Guess the computer's number between 1 and 2: "<<endl;
  }
  else if(difficulty == 2){
    guesses = 2;
    randomNumber = rand() % 10 + 1;
    cout<<"Guess the computer's number between 1 and 10: "<<endl;

   }
  else if(difficulty==3){
    guesses = 3;
    randomNumber = rand() % 100 + 1;
    cout<<"Guess the computer's number between 1 and 100: "<<en
      else{
        cout<<"I'm sorry, you gueesed wrong! Try again"<<endl;

        if(randomNumber<guess){
          cout<<"The random number is lower"<<endl;
        }
        else{
          cout<<"The random number is higher"<<endl;
