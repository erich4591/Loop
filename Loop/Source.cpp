#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int number;
	int total = 0;

	cout << "Enter 5 numbers" << endl;

	while (x <= 5) {
		cin >> number;
		total += number;
		x++;
	}

	cout << "Your total is: " << total << endl;

	system("pause");
	return 0;
}