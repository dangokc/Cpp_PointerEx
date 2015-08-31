#include <iostream>
#include <string>

using namespace std;

int main() {
	
	struct student {
		string name;
		int age;
		string toString() {
			return name + "-" + to_string(age);
		}
	};

	student s1 = { "huy", 32 };

	cout << "s1: " << s1.toString() << endl;

	student arrayOfStudents[] = { 
									{"John",20},
									{ "Jim",21 },
									{ "Jake",22 }
	};

	for (int i = 0; i < sizeof(arrayOfStudents) / sizeof(*arrayOfStudents); i++) {
		cout << arrayOfStudents[i].toString() << endl;
	}

	//Pause the commandline
	system("pause>nul");
}