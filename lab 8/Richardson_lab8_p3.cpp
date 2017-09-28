#include <iostream>
#include <string>
using namespace std;
int main()
{
	string words;
	int temp = 0;
	cout << "Please enter a sentence, and I will count the spaces:  " << endl;
	getline(cin, words);
	int i = 0;
	while (words[i]!= '\0')
	{
		if (words[i] == ' ')
		{
			temp = temp + 1;
		}
		i++;
	}
    cout << "The number of words in your input is:  " << temp << endl;	
	system("pause");
	return 0;
}