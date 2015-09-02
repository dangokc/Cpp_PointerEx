#include <iostream>
#include <string>

using namespace std;

void findAndReplace(string s1, string s2, string s3) {
	//get length of string
	size_t sizeOfs2 = s2.length();

	//find out the index of a string
	size_t index = s1.find(s2);

	//Replace at 'index', 'a lenght of string need to replace' with 'a new string'
	s1.replace(index, sizeOfs2, s3);

	/*
	Since this method is pasted by value, so we can't change the value
	of the original string because we need to keep the original
	string for another work.
	*/
	cout << "\nReplaced \"" << s2 << "\" with \"" << s3 << "\""<< endl;
	cout << "New string: " << s1 << endl;	
}

void findAndRemove(string &s1, string s2) {
	size_t index = s1.find(s2);
	s1.erase(index, s2.length() + 1);
	cout << "\nErased \"" << s2 << "\"" << endl;
}


int main() {
	
	string s1 = "Now is not the time";
	cout << "Original string: " << s1 << endl;

	//Paste by value
	findAndReplace(s1, "is", "are");

	//Paste by reference
	findAndRemove(s1, "not");

	cout << s1 << endl;
	return 0;

}