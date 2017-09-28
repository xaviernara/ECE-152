#include<iostream>
#include<string>
using namespace std;
/*******************************
Input:
	sentence: original sentence.
	keyword: the keyword which should be replacced.
	targetWord: the new word that will replace the original keyword.
	keywordAmount: How many keywords you have in the original sentence.
	loactionArray[]: 
		An array which contains the index location of each keyword, which is defined as the index of each the first letter.
		For Example:
			Sentence: A cat catches a catfish with another cat.
			keyword: cat
			Then loactionArray[0]=2; loactionArray[1]=37;
	NOTIFICATIONS: For some compilers, you need to define the loactionArray[] with a certain size, otherwise a system break may
	occurs. You can define the loactionArray[] in the main function with "int loactionArray[999];" here.
Output:
	newSentence: return the new sentence back to the main function.
********************************/
string replace(string sentence, string keyword, string targetWord, int loactionArray[],int keywordAmount)
{
	string newSentence="",temp="";// Define a new string as the output sentence. 
	int indexCounting = 0,i=0; // IndexCounting is an index related to the keyword amount.
	int lastWordFlag = 0; // A flag to check if it is the last keyword.
	while (i < sentence.length())
	{
		if (  (i != loactionArray[indexCounting]) )//If the current letter doesn't belongs to a keyword
		{
			temp = sentence[i];				 
			newSentence.append(temp);  		      // Then just simply copy the current letter to the new sentence.
			i++;				// Add the iteration index by 1
		}
		else                                // If the current letter belongs to a keyword
		{
			newSentence.append(targetWord);   // Append the target word to replace the keyword.
			if (indexCounting != keywordAmount){ indexCounting++; } // Keep indexCounting counting until it reaches the keywordAmount
			i = i + keyword.length(); //			ATTENTION: If the current letter belongs to a keyword, 
									  //  you should add the iteration index by the length of the ORIGINAL keyword!!!
		}
	}
	return newSentence;
}




int main()
{
	string sentence,keyword,targetWord;
	string newSentence;
	cout << "Input sentence: ";
	getline(cin, sentence);
	cout << "Input the keyword: ";
	getline(cin, keyword);
	cout << "Input the target word: ";
	getline(cin, targetWord);


	int i = 0;
	int ASCII_convert = keyword[0]; 	// Convert to the capital letter
	char capitalConvert = ASCII_convert-32;

	int tempIndex = 1,flag=0;//flag is 0 if current word is not equal to keyword.
	int keywordAmount = 0;// Count how many keywords you have
	int loactionArray[999]; // Array to save the locations of keywords

	// Save the locations of keywords
	while (sentence[i]!='\0')
	{
		if (sentence[i] == keyword[0] || sentence[i] == capitalConvert) //Check if the word begin with "c"
		{
			//Check if the current word is the first word of the sentence. Check if the size of this word is the same as the keyword.
			while (( i == 0 || (i != 0 && ( sentence[i - 1] == ' ') ) )\
				&& ((sentence[i + keyword.length()] == ' ') || (sentence[i + keyword.length()] == '.')\
				|| (sentence[i + keyword.length()] == ',') || (sentence[i + keyword.length()] == '\0')	)		)
			{
				if (keyword[tempIndex] != sentence[tempIndex + i]){ flag = 0; break; } // Check the letters of current word one by one.
				else { flag = 1;  }
				if (tempIndex == keyword.length()-1){ break; } //Check the letters until the index reaches hthe last letter.   
				tempIndex++; 
			}
			tempIndex = 1; // Reset the temporary index, so you can check the the next word.
			if (flag == 1){ loactionArray[keywordAmount] = i; keywordAmount++; flag = 0; }// If all letters match, amount +1;
		}
		i++; 
	}
	newSentence = replace(sentence, keyword, targetWord, loactionArray, keywordAmount); // Call the function of replace.
	cout << newSentence<<endl;
	system("pause");
	return 0;
}
