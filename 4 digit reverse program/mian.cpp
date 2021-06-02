//This program is created by Sami Ullah Saleem who is a student developer at the PUCIT. 

#include <iostream>
using namespace std;

int main ()
{
	int digit, firstNumber, secondNumber, thirdNumber, forthNumber;
	cout << "Please Enter your Four Digit Number" << endl ;
	cin  >>  digit ;
	firstNumber  = digit % 10;
	digit        = digit / 10;
	secondNumber = digit % 10;
	digit        = digit / 10;
	thirdNumber  = digit % 10;
	digit        = digit / 10;
	forthNumber  = digit % 10;
	digit        = digit / 10;
	cout << "Your Reverse Digit is: " <<firstNumber << secondNumber << thirdNumber << forthNumber << endl;
	return 0;
	

	
}
