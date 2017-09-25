#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;


int main ()
{
    srand ( time(NULL) );
    while(true) {
    	char playagain;
		cout<<"Select the difficulty"<<endl;
		cout<<"For Easy press   1"<<endl<<"For Medium press 2"<<endl<<"For Hard press   3"<<endl;
    
		int difficulty;
		cin>>difficulty;

		int randomNumber;
		int guesses;

	
	if(difficulty==1){
		guesses = 1;
		randomNumber = rand()%2+1;
		cout<<"Guess the computer's number between 1 and 2: "<<endl;
	}
	else if(difficulty==2){
		randomNumber = rand()%10+1;
		guesses = 2;
		cout<<"Guess the computer's number between 1 and 10: "<<endl;
	}
	else if(difficulty==3){
		randomNumber = rand()%100+1;
		guesses = 3;
		cout<<"Guess the computer's number between 1 and 100: "<<endl;
	}
	int guess;
	for(int i=0;i<guesses;i++){
		cin>>guess;
		if(randomNumber==guess){
			cout<<"You, guessed correctly! You win!"<<endl;
			break;
		}
		else{
			cout<<"I'm sorry, you guessed wrong! Try again"<<endl;

			if(randomNumber<guess){
				cout<<"The random number is lower"<<endl;
			}
			else{
				cout<<"The random number is higher"<<endl;
			}
		}
	}

	if(guess!=randomNumber){
		cout<<"I'm sorry, that is not correct! You lose!"<<endl;
	}
while(true) { 
			
			cout << "Would you like to play again (Y for Yes) (N for No)? "<<endl;
			cin >> playagain;
			cin.ignore();
			
		
			if(playagain == 'Y' || playagain == 'y' || playagain == 'N' || playagain == 'n') {
				break;
			} else {
				cout << "Please enter ('Y') or ('N')...!"<<endl;
			}
	}
		
		if(playagain == 'N' || playagain == 'n') {

        break;
		} 
		
}
return 0;
}




