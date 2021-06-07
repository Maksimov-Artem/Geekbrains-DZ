#include<iostream>
#include<fstream>
#include<string>
#include"Function.h"
using namespace std;
void  concatenation(ifstream &ifc_1, ifstream &ifc_2, ofstream &out_file);
bool word_search( std::string filename,  std::string word);

int main() {
	//Задание 1	
	std::ofstream ofc_1("part_1.txt", std::ofstream::trunc);
	ofc_1 << "Shall I compare thee to a summer’s day?\n" << 
		"Thou art more lovely and more temperate:\n" <<
		"Rough winds do shake the darling buds of May,\n" <<
		"And summer’s lease hath all too short a date:\n";//177
	ofc_1.close();
	std::ofstream ofc_2("part_2.txt", std::ofstream::trunc);
	ofc_2 << "Sometime too hot the eye of heaven shines,\n" <<
		"And often is his gold complexion dimm’d,\n" <<
		"And every fair from fair sometime declines,\n" <<
		"By chance or natures changing course untrimm’d:\n";//180
	ofc_2.close();
	//Задание 2	

	std::ifstream ifc_1("part_1.txt");
	std::ifstream ifc_2("part_2.txt");
	std::ofstream out_file("file.txt");
	concatenation(ifc_1, ifc_2, out_file);
	//Задание 3
	std::cout << "Enter file name 'file.txt': ";
	std::string filename;
	cin >> filename;
	std::string word;
	std::cout << "Enter word:";
	std::cin >> word;
	word_search(filename, word);
	if (word_search(filename, word))
		std::cout << "Word found ";
	else
		std::cout << "Word not found";

	return 0;
}
