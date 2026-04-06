#include <iostream>
using namespace std;

int main()
{
	const int totalRows = 10;

	//Print Patter A
	cout << "Pattern A" << endl;
	for (int row = 1; row <= totalRows; row++)
	{
		//Left side
		for (int i = 1; i <= row; i++)
		{
			cout << "+";
		}

		//Space 
		cout << " ";

		// Right side
		for (int i = 1; i <= totalRows + 1 - row; i++)
			cout << "+";

		cout << endl; // Next row
	}

	// Pattern B
	cout << "Pattern B" << endl;
	for (int row = 1; row <= totalRows; row++)
	{
		// Left side
		for (int i = 1; i <= row; i++)
			cout << "+";

		// Space
		cout << " ";

		// Right side
		for (int i = 1; i <= totalRows + 1 - row; i++)
			cout << "+";

		cout << endl;
	}

	return 0;

}