#include <iostream>


enum class calculation {
	add,
	multiply,
	subtract,
	divide
};

float calculator(double a, double b, calculation operation) {

	switch (operation) {
	case calculation::add:
		return a + b;
		break;
	case calculation::divide:
		return (b != 0) ? (a / b) : 0.0f;
		break;
	case calculation::multiply:
		return a * b;
		break;
	case calculation::subtract:
		return (a > b) ? (a - b) : b - a;
		break;
	}
}					 

int main() {
	std::cout << calculator(50, 10, calculation::subtract);
}
