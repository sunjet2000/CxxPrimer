#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <map>
using namespace std;

fstream &openFile(fstream &io,const string &file)
{
	io.close();
	io.clear();
	io.open(file);
	return io;
};
int main(int argc, char **argv)
{
	string dict, in, out;
	for(int i=0; i != argc; ++i){
		//cout << argv[i] << endl;
		if(0==strcmp(argv[i],  "-d")){
			dict = argv[i+1];
		}
		if(0==strcmp(argv[i],  "-in")){
			in = argv[i+1];
		}	
		if(0==strcmp(argv[i],  "-out")){
			out = argv[i+1];
		}
	}

	fstream dictFile;
	openFile(dictFile, dict);
	string key, value;
	map<string, string> dictMap;
	while(dictFile >> key >> value){
		dictMap.insert(make_pair(key, value));
	}
	fstream inFile;
	openFile(inFile, in);
	string word;
	string outStr;
	while(inFile >> word){
		map<string, string>::const_iterator mapIt = dictMap.find(word);
		if(mapIt != dictMap.end()){
			outStr += mapIt->second;
		}else{
			outStr += word;
		}
		outStr += " ";
	}
	cout << outStr << endl;
	fstream outFile;
	openFile(outFile, out);
	
	outFile << outStr << endl;

	dictFile.close();
	inFile.close();
	outFile.close();
	return 0;
}
