/* Written by Brendan
	A lame guessing game 
	If you guess the incorrect number it tells you if its too high or low and repeat until the game is won.
2016
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  srand (time(NULL));//intializes the rand
  bool runLoop = true;
  int secretNum, guessNum, guesses;
  while(runLoop){
	  cout << "Guess the correct number between 0-100. ";
	  guessNum = -1;//makes sure while loop always runs
	  guesses = 0;
	  secretNum = rand()%100;//rand 0-100
	  while (guessNum != secretNum){//loops til number is found
		guesses++;
		cin >> guessNum;//gets input
		if(guessNum != secretNum){//incorrect guess
		  cout << "Incorrect guess! ";
		  if(guessNum > secretNum){//guess bigger
			cout << "Your guess was larger than the secret number ";
		  }else{//guess smaller
			cout << "Your guess was smaller than the secret number ";
			}
		}else{
			cout << "Congrats you win! The number was " << secretNum << ". ";
			cout << "The total guesses was " << guesses << ".";
			cout << "Would you like to play again? (Y/N) ";
			string reply;
			bool noCommand = true;
			while(noCommand){
				cin >> reply;
				if(reply == "Y"){
					noCommand=false;
				}else if(reply == "N"){
					noCommand=false;
					runLoop = false;
				}else{
					cout << "UNRECOGNIZED COMMAND ";
				}
			}
		}
		}
  }
  return 0;
}
