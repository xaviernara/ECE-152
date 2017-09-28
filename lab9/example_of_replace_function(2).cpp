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
string replace(string sentence, string keyword, string targetWord, int loactionArray[], int keywordAmount)
{
	string newSentence = "", temp = "";// Define a new string as the output sentence. 
	int indexCounting = 0, i = 0; // IndexCounting is an index related to the keyword amount.
	int lastWordFlag = 0; // A flag to check if it is the last keyword.
	while (i < sentence.length())
	{
		if ((i != loactionArray[indexCounting]))//If the current letter doesn't belongs to a keyword
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
