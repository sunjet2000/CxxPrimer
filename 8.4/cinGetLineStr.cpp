#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string s1;
	fstream in("getlineStr.txt");
	getline(in, s1);
	cout << s1 << endl;
	getline(in, s1);
	cout << s1 << endl;
	return 0;
}
/*
 abc def 
 hjk

 abc def
 hjk
 */
