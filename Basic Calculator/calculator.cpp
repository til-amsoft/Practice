//===================================================================================
// Name        : Calculator
// Author      : Tilly Softly
// Description : User inputs 2 numbers and chooses operation. Program outputs result
//===================================================================================
#include "functions.hpp"
#include <iostream>
#include <cmath>

int main(){
	double num1;
	double num2;
	double answer;
	int opChoice;
	std::cout << "Input first number:\n";
	std::cin >> num1;
	std::cout << "Input second Number:\n";
	std::cin >> num2;
	std::cout << "Which operation?\n1. Addition \n2. Subtraction\n3. Multiplication\n4.  Division\n";
	std::cin >> opChoice;

	switch (opChoice){
	case 1:
		answer = addition(num1, num2);
		break;
	case 2:
		answer = subtraction(num1, num2);
		break;
	case 3:
		answer = multiplication(num1, num2);
		break;
	case 4:
		answer = division(num1, num2);
		break;
	default:;
		std::cout << "Not a valid operation\n";
		answer = NAN;
	}

	std::cout << "Answer: "<<answer;


}
