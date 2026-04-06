#include <iostream>
using namespace std;

int main()
{
	const int totalRows = 10;

	// Pattern A: right angle at bottom-left
	cout << "Pattern A" << endl;
	for (int row = 1; row <= totalRows; row++) {
		for (int i = 1; i <= row; i++) {
			cout << "+";
		}
		cout << endl;
	}

	cout << endl; // Space between patterns


	cout << endl; // Space between patterns

	// Pattern B: right angle at top-right
	cout << "Pattern B" << endl;
	for (int row = totalRows; row >= 1; row--) {
		for (int i = 1; i <= row; i++) {
			cout << "+";
		}
		cout << endl;
	}

	return 0;
}