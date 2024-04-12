#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string s1, s2, s3;
	fstream in("str1.txt");
	in >> s1 >> s2 >> s3;
	cout << s1 << s2 << s3;	
	return 0;
}
/*
sss ttt rrr
ssstttrrr

sss
sss

sss
ttt
rrr
ssstttrrr
*/
