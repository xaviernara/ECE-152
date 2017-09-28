#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//char sentinput[300];
//char keyinput[100];
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


	
int locatewords(string sentence, string keywords)
{

	int keyw_len = keywords.length();
	int position = sentence.find_first_of (keywords);
	int position2= sentence.find_last_of(keywords);
	//while (sentence.find(keywords) != string::npos)
			//Searches the string for the first occurrence of the sequence specified by its arguments
		//{
		position = sentence.find(keywords, position - 4);
		if(sentence.find(keywords) != string::npos)
		//if (sentence.find(keywords))
		{
			//position = keyw_len + sentence.find(keywords, position);
			cout << "This is your keyword position in your sentence: " << position<< endl;
		}
		position2 = sentence.find(keywords, position2 - 4);
		if (sentence.find(keywords) != string::npos)
			//if (sentence.find(keywords))
		{
			//position = keyw_len + sentence.find(keywords, position);
			cout << "This is the other position of your keyword in your sentence: " << position2 << endl;
		}
			//position++;

		//}
	//cout << "This is your keyword position in your sentence: " << position << endl;
	return position;
}

int main()
{
	string sentence;
	string kwords;
	//sentinput[0] = '\0';//checks for null
	//keyinput[0] = '\0';
	cout << "\nEnter a Sentence: ";
	getline(cin,sentence);//takes input till 100 char
	cout << "\nEnter a key word: ";
	getline(cin, kwords);//takes input till 100 char
	locatewords(sentence, kwords);

	//cout << "Please enter a specfic word you want counted: " << endl;
	//getline(cin, kwords);
	//cout << "Please enter a sentence: " << endl;
	//getline(cin, sentence);

	system("pause");
	return 0;
}