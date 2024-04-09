#include <iostream>
#include <istream>
using namespace std;

int main()
{
	int i;
	while (cin>>i, !cin.eof())
	{
		if(cin.bad())
			cout << "bad" <<endl;
		if(cin.fail())
		{
			
			cout << "fail" << endl;
			cin.clear();
			cin.ignore(1024,'\n');
			continue;
		}
		cout << i << endl;
	}
}

/*
必须加ignore操作,忽略1024个字节。

*/
