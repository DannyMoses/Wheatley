#include "CVector.h"
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

	std::string inputString;

	Wheatley::CVector Vector1;
	Wheatley::CVector Vector2;
	Wheatley::CVector Resultant;

	std::cout << "Welcome to Wheatley, the simple vector calculator!" << std::endl;
	std::cout << "What is the x component of the first vector?";
	std::cin >> Vector1.XComponent;
	std::cout << "What is the y component of the first vector?";
	std::cin >> Vector1.YComponent;
	std::cout << "What is the x component of the second vector?";
	std::cin >> Vector2.XComponent;
	std::cout << "What is the y component of the second vector?";
	std::cin >> Vector2.YComponent;

	Resultant = Vector1 - Vector2;
	std::cout << "Resultant Vector: " << "(" << Resultant.XComponent << ", " << Resultant.YComponent << ")";



	return 0;
}

