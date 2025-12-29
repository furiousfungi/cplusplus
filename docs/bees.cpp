#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Bee {
	char name;
	int level;
	bool gifted;
	bool mutation;
};

int main() {
	map<int, string> dict;

	dict[0] = "False";
	dict[1] = "True";

	Bee bubble;
	bubble.level = 15;
	bubble.gifted = 1;
	bubble.mutation = 0;

	cout << "Bubble is level: " << bubble.level <<
		"\nGifted status: " << dict[bubble.gifted] <<
		"\nMutation status:" << dict[bubble.mutation] <<
		endl;
}
