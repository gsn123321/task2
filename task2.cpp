// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//1
	//int num1;

	//std::cin >> num1;

	//if (num1 / 2 == 0) {
	//	std::cout << "Even";
	//}
	//else {
	//	std::cout << "Odd";
	//}
	//2
	//int num1, num2;

	//std::cin >> num1 >> num2;

	//if (num1 > num2) {
	//	std::cout << num2;

	//}
	//else {
	//	std::cout << num1;
	//}

	//3

	//int num1;

	//std::cin >> num1;

	//if (num1 > 0) {
	//	std::cout << "Positive";
	//}
	//else if (num1 < 0) {
	//	std::cout << "Negative";
	//}
	//else {
	//	std::cout << "Zero";
	//}

	//4

	//int num1, num2;

	//std::cin >> num1 >> num2;

	//if (num1 == num2) {
	//	std::cout << "Ravno";
	//}
	//else if (num1 > num2) {
	//	std::cout << num1 << '\n';
	//	std::cout << num2 << '\n';
	//}
	//else {
	//	std::cout << num2 << '\n';
	//	std::cout << num1 << '\n';
	//}

	//5 

	//int num1, num2, num3, num4, num5;

	//std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

	//if (num1 + num2 + num3 + num4 + num5 / 2 >= 4) {
	//	std::cout << "Passed";
	//}
	//else {
	//	std::cout << "Failed";
	//}

	//6

	//int num1;

	//std::cin >> num1;

	//if (num1 % 2 == 0) {
	//	std::cout << num1 * 3;
	//}
	//else {
	//	std::cout << num1 / 2.0;
	//}

	//7

	//int num1, num2;
	//char action;

	//std::cin >> num1 >> num2 >> action;

	//switch (action) {
	//case '+': std::cout << num1 + num2 << '\n'; break;
	//case '-': std::cout << num1 - num2 << '\n'; break;
	//case '*': std::cout << num1 * num2 << '\n'; break;
	//case '/': std::cout << num1 / num2 << '\n'; break;
	//default:std::cout << "incorrect operation!\n";
	//}

	//8

	int stupen = 0;
	int num1;
	std::cout << "Enter number and stupen: ";
	std::cin >> num1 >> stupen;
	switch (stupen) {
	case 0: std::cout << 1; break;
	case 1: std::cout << num1; break;
	case 2: std::cout << num1 * num1; break;
	case 3: std::cout << num1 * num1 * num1; break;
	case 4: std::cout << num1 * num1 * num1 * num1; break;
	case 5: std::cout << num1 * num1 * num1 * num1 * num1; break;
	case 6: std::cout << num1 * num1 * num1 * num1 * num1 * num1; break;
	case 7: std::cout << num1 * num1 * num1 * num1 * num1 * num1 * num1; break;
	default: std::cout << "Invalid\n";
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
