#include <iostream>

using namespace std;

struct Nub {
	float number;
};

enum option {
	add = 1,
	sub = 2,
	mul = 3,
	divi = 4,
	ex = 5
};

void choice();

int main() {
	int x;
	float ans;
	bool op = true;

	Nub a, b;
	cout << "Write number a: ";
	cin >> a.number;

	cout << "Write number b: ";
	cin >> b.number;

	cout << endl;

	do {
		choice();
		cin >> x;

		if (x == option::add) {
			ans = a.number + b.number;
			cout << "Answer: " << ans << endl << endl;
		}
		else if (x == option::sub) {
			ans = a.number - b.number;
			cout << "Answer: " << ans << endl << endl;
		}
		else if (x == option::mul) {
			ans = a.number * b.number;
			cout << "Answer: " << ans << endl << endl;
		}
		else if (x == option::divi && b.number != 0) {
			ans = a.number / b.number;
			cout << "Answer: " << ans << endl << endl;
		}
		else if (x == option::ex) {
			op = false;
		}
		else {
			cout << "Error!" << endl << endl;
		}
	} while (op == true);

	return 0;
}

void choice() {
	cout << "Choose option:" << endl
	<< "Add - 1" << endl
	<< "Sub - 2" << endl
	<< "Mul - 3" << endl
	<< "Div - 4" << endl
	<< "Exit - 5" << endl
	<< "Your choice: ";
}