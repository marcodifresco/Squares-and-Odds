//============================================================================
// Name        : Squares_and_Odds.cpp
// Author      : Marco Di Fresco
// Version     : 0.1
// Copyright   : 2022 Marco Di Fresco
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {
	const unsigned long long int limit = 4294967296;
	unsigned long long int base=2, difference=0, square=0, square_previous=1, difference_previous=1;

	for (unsigned long long int i = base; i < limit; i++){
		// Calculate the new square and difference from the previous
		square=base*base;
		difference = square - square_previous;

		// Check if the rule apply
		if ((difference - difference_previous) == 2){
			std::cout << "Rule still apply between " << base-1 << "^2 and " << base << "^2." << std::endl;
		} else {
			std::cout << "Rule do NOT apply between " << base-1 << "^2 and " << base << "^2." << std::endl;
			break;
		}

		// Prepare for next round
		base++;
		square_previous = square;
		difference_previous = difference;
	}

	return 0;
}
