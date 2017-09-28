#include <iostream>
#include <string>
using namespace std;
int main()
{
	string words;
	cout << "Please enter a word, i will replace all 'c' with 'k':  " << endl;
	getline(cin, words);
	//cout << words<<endl;
	int i = 0;
	while( words[i] != '\0') //this is used to run through the inputed words until the end of the inputed words (i.e \0 end character) & remember to use not equal (!=)
	{
		if (words[i] =='c' ) //this if statement checks  the inputed words has c in it and replaces with k
		{
			words[i] = 'k';
		}
		i++; //used to keep running through the while loop like its used thru the for loop 
	}
	cout << words << endl;
	system("pause");
	return 0;
}
