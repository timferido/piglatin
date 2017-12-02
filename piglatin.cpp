#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

string piglatinize(string word) {
	
	if (word.length() > 1) {
		//declarations
		std::string first = word.substr(0,1);
		std::string body = word.substr(1,word.length()-1);

		return (body + first + 'a');
	}
	else {
		return word;
	}
}

int main(int argc, char* argv[]){
	
	//declare filestreams
	ifstream infile;
	ofstream outfile;

	//open files	
	infile.open(argv[1]);
	outfile.open(argv[2]);

	//declare vector to hold words
	std::vector<std::string> wordList;

	//read from the file
	while (infile) {
		string s;
		getline(infile, s, ' ');
		wordList.push_back(s);	
	}
	
	//print out list
	for (int i = 0; i < wordList.size(); i++) {
		outfile << piglatinize(wordList[i]) << ' ';
	}
}

