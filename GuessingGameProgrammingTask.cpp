#include <iostream>
#include <cstdlib>
int main() {
	int numbers[4]{};
	int remainingGuesses = 7;
	for (int i = 0; i < 4; i++) {
		numbers[i] = rand() % 10;
	}
	std::string output = "****";
	while (true) {
		if (output.find('*') == std::string::npos) {
			std::cout << "You guessed the number!" << std::endl;
			break;
		}
		if (remainingGuesses == 0) {
			std::cout << "You lose!";
			break;
		}
		std::string input;
		std::cout << "Guesses Remaining: " << remainingGuesses << std::endl;
		int guess[4]{};
		std::cout << "Enter a four digit number:" << std::endl;
		std::cin >> input;
		if (input.length() != 4) 
		{
			std::cout << "Please enter a four digit number." << std::endl;
			continue;
		}
		char* p;
		strtol(input.c_str(), &p, 10);
		if (*p) 
		{
			std::cout << "Please enter a four digit number." << std::endl;
			continue;
		}
		for (int i = 0; i < 4; i++) 
		{
			guess[i] = input[i] - '0';
			
		}
		for (int i = 0; i < 4; i++) {
			if (guess[i] == numbers[i]) {
				output[i] = input[i];
			}
		}
		std::cout << output << std::endl;
		remainingGuesses--;
	}
}