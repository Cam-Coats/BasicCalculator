#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int num1, num2, sum;
string opt;
bool isInAddition, isInSubtraction, isInMultiplication, isInDivision;

void start();
void calculatorHUD();
void additionCalc();
void subtractionCalc();
void multiplicationCalc();
void divisionCalc();
void recommenceCalculator();

int main() {
	start();

	isInAddition = isInSubtraction = isInMultiplication = isInDivision = false;

	return 0;
}

void start() {
	cout << "Welcome to the Basic Calculator (by Cam)";
	Sleep(2000);
	calculatorHUD();
}

void calculatorHUD() {
	system("cls");
	cout << "========= Calculator - by Cam =========" << endl;
	cout << "\n";
	cout << "Choose your operation ('+' | '-' | '*' | '/'): ";
	cin >> opt;

	if (opt == "+") {
		additionCalc();
	}
	else if (opt == "-") {
		subtractionCalc();
	}
	else if (opt == "*") {
		multiplicationCalc();
	}
	else if (opt == "/") {
		divisionCalc();
	}
	else { // If an input is invalid...
		cout << "Invalid input...";
		Sleep(2000);
		system("cls");
		calculatorHUD();
	}
}

void additionCalc() {
	system("cls");
	isInAddition = true;
	cout << "You've chosen addition." << endl;
	Sleep(2000);
	cout << "\nEnter your first input: ";
	cin >> num1;
	cout << "\nEnter your second input: ";
	cin >> num2;
	sum = num1 + num2;
	cout << "\nYour results are: " << num1 << " + " << num2 << " = " << sum << endl;
	Sleep(2000);
	recommenceCalculator();
}

void subtractionCalc() { // Subtraction operation
	system("cls");
	isInSubtraction = true;
	cout << "You've chosen subtraction." << endl;
	Sleep(2000);
	cout << "\nEnter your first input: ";
	cin >> num1;
	cout << "\nEnter your second input: ";
	cin >> num2;
	sum = num1 - num2;
	cout << "\nYour results are: " << num1 << " - " << num2 << " = " << sum << endl;
	Sleep(2000);
	recommenceCalculator();
}

void multiplicationCalc() { // Multiplication operation
	system("cls");
	isInMultiplication = true;
	cout << "You've chosen multiplication." << endl;
	Sleep(2000);
	cout << "\nEnter your first input: ";
	cin >> num1;
	cout << "\nEnter your second input: ";
	cin >> num2;
	sum = num1 * num2;
	cout << "\nYour results are: " << num1 << " * " << num2 << " = " << sum << endl;
	Sleep(2000);
	recommenceCalculator();
}

void divisionCalc() { // Division operation
	system("cls");
	isInDivision = true;
	cout << "You've chosen division." << endl;
	Sleep(2000);
	cout << "\nEnter your first input: ";
	cin >> num1;
	cout << "\nEnter your second input: ";
	cin >> num2;
	sum = num1 / num2;
	cout << "\nYour results are: " << num1 << " / " << num2 << " = " << sum << endl;
	Sleep(2000);
	recommenceCalculator();
}

void recommenceCalculator() { // If user wants to continue or move on
	cout << "\nDo you would to continue, or choose another operation?" << endl;
	Sleep(2000);
	while (true) {
		char choice;
		cout << "\nStay (s) | Leave (l): ";
		cin >> choice;
		switch (choice) {
			case 's':
				if (isInAddition == true) {
					additionCalc();
					break;
				}
				else if (isInSubtraction == true) {
					subtractionCalc();
					break;
				}
				else if (isInMultiplication == true) {
					multiplicationCalc();
					break;
				}
				else if (isInDivision == true) {
					divisionCalc();
					break;
				}
				break;
			case 'l':
				isInAddition = isInSubtraction = isInMultiplication = isInDivision = false;
				calculatorHUD();
				break;
			default:
				cout << "\nInvalid input...\n";
				Sleep(2000);
				break;
		}
	}
}
