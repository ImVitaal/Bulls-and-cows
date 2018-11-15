#include <iostream> 
#include <string>
using namespace std;

int main()
{
	// introducing the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you correctly guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?" << endl;
	cout << endl;

	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	// repeat the guess back
	cout << "Your guess was: " << Guess << endl;

	// get a guess from the player
	cout << "Enter your guess: ";
	getline(cin, Guess);
	// repeat the guess back
	cout << "Your guess was: " << Guess << endl;





	cout << endl;
	return 0;
}
