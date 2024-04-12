#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int i = 0;
	while(cin>>s)
	{
		cout << s << endl;
		++i;
		cout << i << endl;
	}	
}
/* out 
abc
abc
1
abc def
abc
2
def
3
*/


