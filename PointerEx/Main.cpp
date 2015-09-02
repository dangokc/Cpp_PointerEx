#include <iostream>
#include <string>

using namespace std;

//An example of "paste by value"
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

//An example of "Paste by reference"
void findAndRemove(string &s1, string s2) {
	size_t index = s1.find(s2);
	s1.erase(index, s2.length() + 1);
	cout << "\nErased \"" << s2 << "\"" << endl;
}

void findAndSubStr(string s1, string s2) {
	size_t index = s1.find(s2);
	s1 = s1.substr(index, s2.length());
	cout << "\nOriginal string is become: \"" << s1 << "\"" << endl;
}


int main() {
	
	string s1 = "Now is not the time";
	cout << "Note: Original string: " << s1 << endl;
	
	findAndReplace(s1, "is", "are");
	cout << "Note: Original string still: " << s1 << endl;

	findAndRemove(s1, "not");
	cout << "Note: Original string now: " << s1 << endl;

	findAndSubStr(s1, "the time");
	cout << "Note: Original string is: " << s1 << endl;

	return 0;

}