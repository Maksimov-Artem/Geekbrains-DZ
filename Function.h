#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool word_search( std::string filename, std::string word) {
	
	std::ifstream ifc_1(filename);
	std::string tmp;
	while (ifc_1 >> tmp)
	{
		if (word == tmp)
			return true;
	}
	return false;



}

void concatenation(ifstream &ifc_1, ifstream &ifc_2, ofstream &out_file)
{
	
	char *buffer_1  = new char [177];
	char *buffer_2 = new char[180];

	
	while (!ifc_1.eof()) {
		ifc_1.getline(buffer_1, 177);
		out_file << buffer_1 << std::endl;
	}
	delete[] buffer_1;
	while (!ifc_2.eof()) {
		ifc_2.getline(buffer_2, 180);
		out_file << buffer_2 << std::endl;
	}
	
	delete[] buffer_2;
	ifc_1.close();
	ifc_2.close();
	out_file.close();
	
}