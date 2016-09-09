#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int secretNum, guessNum;
  guessNum = -1;//makes sure while loop always runs

  srand (time(NULL));//intializes the rand

  secretNum = rand()%100;//rand 0-100

  cout << "Guess the correct number between 0-100.";

  while (guessNum != secretNum){//loops til number is found

    cin >> input;//gets input
    if(guessNum != secretNum){//incorrect guess

      cout << "Incorrect guess!";
      if(guessNum > secretNum){//guess bigger

	  cout << "The guess was larger than the secret number";
	}else{//guess smaller

	  cout << "The guess was smaller than the secret number";
	}
    }
    if(guessNum
  }
  return 0;
}
