#include <iostream>
#include <string>

using namespace std;

//Paste by value
void val(int a) {
	a = 2015;
}

//Paste by reference
void ref(int &a) {
	a = 2015;
}

/*
void ref(int const &a) {
	ERROR: a = 2015;
}
*/

int main() {
	
	int i = 10;
	val(i);	
	cout << "i is still: " << i << endl;

	ref(i);
	cout << "i is changed to: " << i << endl;

	return 0;

}