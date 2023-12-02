// Ethan Klenda
// CIS 1202 501
// December 1, 2023

#include<cmath>

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



	return 0;
}