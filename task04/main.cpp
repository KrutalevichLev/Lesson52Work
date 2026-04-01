#include "logic.h"

int main() {
	cout << (equals(-12, 1) ? "yes" : "no") << endl;
	cout << (equals(1223476, -123) ? "yes" : "no") << endl;
	cout << (equals(-176, -1) ? "yes" : "no") << endl;
	cout << (equals(1234567, 28) ? "yes" : "no") << endl;
	cout << (equals(1234567, 29) ? "yes" : "no") << endl;
	cout << (equals(123456, 28) ? "yes" : "no") << endl;

	return 0;
}