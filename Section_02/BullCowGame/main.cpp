
#include <iostream> 
#include <string>
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();




// The entry point for the application
int main()
{
	PrintIntro();

	GetGuessAndPrintBack();
	GetGuessAndPrintBack();

	cout << endl;
	return 0;
}




// introducing the game
void PrintIntro()
{
	
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you correctly guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?" << endl;
	cout << endl;

	return;
}




// get a guess from the player
string GetGuessAndPrintBack()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// prints the guess back
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}