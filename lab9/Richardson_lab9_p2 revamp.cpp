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
string findwords(string sentence, string keywords, string newkey)
{
	int tmp = 0;
	int position = 0;
	//string found = sentence.find(newkey);
	//int keyw_len = keywords.length();
	//int newkey_len = newkey.length();
	//The position of the first character of the first match.If no matches were found, the function returns string::npos. 
	//size_t is an unsigned integral type(the same as member type string::size_type).

	while (sentence.find(keywords) != string::npos)

		//Searches the string for the first occurrence of the sequence specified by its arguments
	{

		if (sentence.find(keywords))
		{
			sentence.replace(sentence.find(keywords), newkey.length(), newkey);
		}

		//position = keyw_len + sentence.find(keywords, position);

	}
	cout << "This is your key word: " << keywords << " and this is your new keyword: " << newkey << endl;
	cout << "This is is your new sentence: " << sentence << endl;
	return sentence;
}



int main()
{
	string sentence;
	string kwords;
	string newkwords;
	cout << "\nEnter a Sentence: ";
	getline(cin, sentence);//takes input till 300 char
	cout << "\nEnter a key word: ";
	getline(cin, kwords);//takes input till 100 char
	cout << "\nEnter a  new key word: ";
	getline(cin, newkwords);
	findwords(sentence, kwords,newkwords);

	//cout << "Please enter a specfic word you want counted: " << endl;
	//getline(cin, kwords);
	//cout << "Please enter a sentence: " << endl;
	//getline(cin, sentence);
	system("pause");
	return 0;
}