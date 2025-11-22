#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ifstream dictionaryfile("dictionary.txt");//opens dictionary file
	if (dictionaryfile.fail())
	{
		cout << "Error: can't open dictionary file." << endl;
		return 1;
	}
	vector<string> dictionary;
	string word;
	while (dictionaryfile >> word)
	{
		dictionary.push_back(word);// puts words vector
	}
	dictionaryfile.close();

	ifstream inputfile("input.txt");//opens file with input words
		if (inputfile.fail())
		{
			cout << "Error: can't open input file" << endl;
			return 2;
		}
	cout << "misspelled words:" << endl;
	while (inputfile >> word)
	{
		bool found = false;
		for (int i = 0; i < dictionary.size(); i++)// loops thru words
		{
			if (word == dictionary[i])// checking if same
			{
				found = true;//if true means its correct
			}
		}
		if (found == false)// if false means its misspelled
		{
			cout << word << endl; // this prints misspelled word
		}
	} 




	return 0;
}