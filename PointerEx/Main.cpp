#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int a1 = 0;
	int a2 = 1;

	/*
	Init b as a regular pointer that point to an address.
	so b can point to another address.
	*/
	int* b = &a1; // pointer only point to an address (illegal: int* b = a1)	
	b = &a2; // b point to another address.

	/*
	Init c as a const pointer that point to an address.
	so c cannot point to another address.
	*/
	int* const c = &a1;	
	//Error: c = &a2;
	*c = 23;

	/*
	Init d as a pointer that point to a const address.
	so d cannot change the value of any address.
	*/
	const int* d = &a1;
	d = &a2;
	//Error: *d = 23;













	//Pause the commandline
	system("pause>nul");
}