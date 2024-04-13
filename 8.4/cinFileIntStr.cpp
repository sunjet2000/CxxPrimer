#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int i1;
	string str1;
	fstream in("intstr1.txt");
	in >> i1 >> str1;
	cout << i1 << str1 << endl;
	return 0;
}
/*
 *123 abc
  123abc

 abc 123
 0 
 * /
