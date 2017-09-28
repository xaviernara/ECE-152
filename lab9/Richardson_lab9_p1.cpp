#include <iostream>
#include <string>
using namespace std;
/*void getUserInput()
{
	sentinput[0] = '\0';//checks for null
	keyinput[0] = '\0';
	cout << "\nEnter a Sentence: ";
	cin.getline(sentinput, 300);//takes input till 100 char
	cout << "\nEnter a key word: ";
	cin.getline(keyinput, 100);//takes input till 100 char
}
*/
int checkwords(string sentence, string keywords)
{
	int tmp = 0, position= 0;
	int keyw_len = keywords.length();
	 //The position of the first character of the first match.If no matches were found, the function returns string::npos. 
	//size_t is an unsigned integral type(the same as member type string::size_type).
	while (sentence.find(keywords, position) != string::npos) //Searches the string for the first occurrence of the sequence specified by its arguments
	{
		
		position = keyw_len  + sentence.find(keywords, position);
		tmp = tmp + 1;
	}

	cout << "This is how many time your keword appears in your sentence: " << tmp << endl;
	return tmp;
}

int main()
{ 
	string sentence;
	string kwords;

	cout << "\nEnter a Sentence: ";
	getline(cin, sentence);//takes input till 300 char
	cout << "\nEnter a key word: ";
	getline(cin, kwords);//takes input till 100 char
	checkwords(sentence, kwords);

	//cout << "Please enter a specfic word you want counted: " << endl;
	//getline(cin, kwords);
	//cout << "Please enter a sentence: " << endl;
	//getline(cin, sentence);

	system("pause");
	return 0;
}