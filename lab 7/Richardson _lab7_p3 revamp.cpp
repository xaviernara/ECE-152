#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void Reverse(char*, int); 
int main() 
{
char  words;
int wordsize = strlen(words);
cout << "Enter something to displayed back reversed :  " << endl;
cin >> words;
char *quote[wordsize] = "Larry "; 
Reverse(quote, wordsize); 
for (int i = 0; i < size; i++) 
{
	cout << quote[i]; 
	cout << endl; 
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
