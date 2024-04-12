#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string s;
	ifstream in("str1.txt");
	in >> s;
	cout << s << endl;
	return 0;
}
/*
sss
sss

sss  ttt
sss
*/
