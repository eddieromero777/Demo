#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ifstream dictionaryfile("dictionary.txt");
	if (dictionaryfile.fail())
	{
		cout << "Error: can't open dictionary file." << endl;
		return 1;
	}
	vector<string> dictionary;
	string word;
	while (dictionaryfile >> word)
	{
		dictionary.push_back(word);
	}
	dictionaryfile.close();
	return 0;
}