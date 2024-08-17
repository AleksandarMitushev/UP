#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum;

	cout << "Please enter two numbers: ";
	cin >> firstNum >> secondNum;

	// Swap with a third variable
	int temp = firstNum;
	firstNum = secondNum;
	secondNum = temp;

	// Swap with operations (works with multiplication and division too)
	firstNum = firstNum + secondNum;
	secondNum = firstNum - secondNum;
	firstNum = firstNum - secondNum;

	// Swap with XOR
	firstNum = firstNum ^ secondNum;
	secondNum = firstNum ^ secondNum;
	firstNum = firstNum ^ secondNum;

	cout << "The numbers have been swapped: "  << firstNum << " " << secondNum;
}
