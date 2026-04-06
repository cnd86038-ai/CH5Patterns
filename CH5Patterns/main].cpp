#include <iostream>
using namespace std;

int main()
{
	const int totalRows = 10;

	//Print Patter A
	cout << "Pattern A" << endl;
	for (int row = 1; row <= totalRows; row++)
	{
		//Left side of the pattern
		for (int i = 1; i <= row; i++)
		{
			cout << "+";
		}
	}
	//Space between left and right side of the pattern
	cout << " ";

	//Right side of the pattern
	for (int row = 1; row <= totalRows; row++)
	{
		for (int i = 1; i <= totalRows - row + 1; i++)
		{
			cout << "+";
		}
	}



	return 0;
}