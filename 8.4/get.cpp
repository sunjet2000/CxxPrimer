#include "get.hpp"

istream& get(istream& in)
{
	int ival;
	while(in>>ival, !in.eof())
	{
		if(in.fail())
		{
			in.clear();
			in.ignore(3,' ');
			continue;
		}
		cout << ival << endl;	
	}
	return in;
}
