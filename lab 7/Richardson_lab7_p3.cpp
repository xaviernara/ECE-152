#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void Reverse(char*, int ); // The prototype for the reverse function this is necessary for any function


int main() // These programs need to have a main for a place for the compiler to start
char  words;
int wordsize = strlen(words);
cout << "Enter something to displayed back reversed :  " << endl;
cin >> words;
char *quote[wordsize] = "Larry "; // This initializes the char array with 6 cells Larry plus an end of string mark
	Reverse(quote, wordsize); // Call the function and pass it the array. S would be the parameter.
	for (int i = 0; i < size; i++) // This is a loop to display the characters in the char array i goes from 0-4
	{
		cout << quote[i]; // Don't forget that array indexs start at 0 and goes to( number of cells - 1) in this case 5
		cout << endl; // Just dropping the line down one
	}
	return 0;
	system("pause");


}

void Reverse(char* S[], int size)
{
	char temp; // We need a temporary char to hold one character in the array.
	for (int i = 0; i < size; i++) // See below for an alternate way to do this without a loop. i goes from 0-1
	{
		temp = S[i]; // Think about it like holding two objects and trying to switch hands you need to set  one down. This is what temp does.
		S[i] = S[size - i]; // when i is 0 the places index 4 in index 0. when i is 1 index 3 into index 1
		S[size - i] = temp; // Pickup the original object we set down and put it into index 4 or 3
	}                        // Index 2 does not change because it is in the middle
}
