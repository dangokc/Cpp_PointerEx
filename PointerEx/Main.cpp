#include <iostream>
#include <string>

using namespace std;

int main() {
	
	struct student {
		string name;
		int age;
	};

	student s1 = { "huy", 32 };

	cout << "Name: " << s1.name << endl;
	cout << "Age " << s1.age << endl;

	//Pause the commandline
	system("pause>nul");
}