#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(getline(cin, s))
	{
		cout << s << endl;
	}
	return 0;
}

/* out::
abc
abc
abc def 
abc def
*/
