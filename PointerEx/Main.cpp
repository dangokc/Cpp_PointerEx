#include <iostream>
#include <string>

using namespace std;

int main() {
	
	const int SIZE_A = 6;
	int a[SIZE_A];
	cout << "a has: " << sizeof(a)/sizeof(*a) << " elements: " << endl;

	for (int i = 0; i < SIZE_A; i++) {
		a[i] = i;
		cout << "a[" << i << "] = " << i << endl;
	}

	int* b = a;
	int* c = a + 2;

	cout << "\nb = a = " << *b << endl;
	cout << "c = a+2 = " << *c << endl;

	cout << "\nnow change value of b and c (*b = 100; *c = 500) " << endl;
	*b = 100;
	*c = 500;

	for (int i = 0; i < SIZE_A; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}



	








	//Pause the commandline
	system("pause>nul");
}