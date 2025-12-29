#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Bee {
	string name;
	int level;
	bool gifted;
	bool mutation;
};

int main() {

	Bee bubble{"Bubble Bee", 20, true, false };
	cout << bubble.name <<
		" is level: " << bubble.level <<
		"\nGifted status: " << bubble.gifted <<
		"\nMutation status:" << bubble.mutation <<
		endl;
}
