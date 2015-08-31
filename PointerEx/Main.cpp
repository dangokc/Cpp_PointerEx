#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	
	struct student {
		string name;
		int age;
		string toString() {
			return name + "-" + to_string(age);
		}
	};

	/*
	argc: arguments count
	if there is no argument, argc will return 1 because the first argument is reserved for command prompt.
	*/
	for (int i = 0; i < argc; i++) {
		cout << "i[" << i << "]: "<< argv[i] << endl;
	}

	//Pause the commandline
	system("pause>nul");
}