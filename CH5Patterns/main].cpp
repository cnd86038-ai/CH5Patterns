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

		//Space between left and right side of the pattern
		cout << " ";

		// Right side
		for (int i = 1; i <= totalRows + 1 - row; i++)
			cout << "+";

		cout << endl; // Next row
	}


	

	return 0;

}