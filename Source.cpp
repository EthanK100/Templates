// Ethan Klenda
// CIS 1202 501
// December 1, 2023

#include<cmath>
#include<iostream>

using namespace std;

template <typename T> // template for floats and doubles
T half(T number)
{
	return (number / 2);
}

template <int> // template for integers
int half(int number)
{
	return round(static_cast<float>(number / 2));
}


int main()
{
	// initializes variables to hold test values
	double testDouble = 45.93;
	float testFloat = 32.71;
	int testInt = 9;

	// desplays the results of the half template functions with the test values
	cout << half(testDouble) << endl;
	cout << half(testFloat) << endl;
	cout << half(testInt) << endl << endl;

	return 0;
}