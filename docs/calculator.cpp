#include <iostream>
using namespace std;

enum class calculation {
	add,
	multiply,
	subtract,
	divide
};

int main() {
	float a, b;
	cin >> a, b;
	
	calculation operation = calculation::subtract;

	switch (operation) {

	case calculation::add: {
		cout << a + b;
	} break;
	case calculation::divide: {
		cout << a / b;
	}break;
	case calculation::multiply: {
		cout << a * b;
	}break;
	case calculation::subtract: {
		if (a > b) { cout << a - b; }
		else { cout << b - a; }
	}break;

	}


}
