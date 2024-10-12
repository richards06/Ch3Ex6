/*
Program File Name: Ch3Ex6
Programmer: Josh Richards
Date: october 11, 2024
Requirements:

Write a program that asks the user how many cookies he or she wants to make, then displays the number of cops of each ingredient needs 
for the specified number of cookies.

*/

#include <iostream>
using namespace std;

int main()
{
	const double sugarPer48 = 1.5;
	const double butterPer48 = 1.0;
	const double flourPer48 = 2.75;
	const int cookiesPerBatch = 48;

	int desiredCookies;
	cout << "How many cookies do you want to make? ";
	cin >> desiredCookies;
	
	double sugarNeeded = sugarPer48 * desiredCookies / cookiesPerBatch;
	double butterNeeded = butterPer48 * desiredCookies / cookiesPerBatch;
	double flourNeeded = flourPer48 * desiredCookies / cookiesPerBatch;

	cout << "To make " << desiredCookies << " cookies, you will need: " << endl;
	cout << sugarNeeded << " cups of sugar" << endl;
	cout << butterNeeded << " cups of butter" << endl;
	cout << flourNeeded << " cups of flour" << endl;

	return 0;
}

