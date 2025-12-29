#include <iostream>
using namespace std;

enum class Colour {
	red,
	blue,
	white
};


int main() {

	Colour hive = Colour::red;

	switch (hive) {
	case Colour::white: {
		cout << "Boost for honey; expensive";
	} break;
	case Colour::red: {
		cout << "Damage and high boosting; can be expensive and hard to macro";
	} break;
	case Colour::blue: {
		cout << "Primarily Macro for large amounts of honey";
	} break;
	default: {
		cout << "You are mixed hive";
	} break;

	}
	
}
