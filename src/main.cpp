#include "Wheatley.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>

#define ADD 0
#define SUBTRACT 1
#define MULTIPLY 2
#define DIVIDE 3

int main(int argc, char **argv) {

	Wheatley::CVector *vector;
	vector = new Wheatley::CVector;

	std::cout << vector->Magnitude << std::endl << vector->Theta << std::endl << vector->YComponent << std::endl
			<< vector->XComponent;

	return 0;
}

