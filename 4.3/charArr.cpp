#include <iostream> 
#include <cstring>
using namespace std;

int main()
{
	char carr1[] = "abc";
	char carr2[] = "abc";
	if (carr1 == carr2){
		cout << "c1 == c2" << endl;
	}	
	int i = strcmp(carr1, carr2);
	cout << i << endl;
	cout << carr1 << endl;
	cout << carr2 << endl;

	if(true){
		cout << true << endl;
	}
	return 0;
}
