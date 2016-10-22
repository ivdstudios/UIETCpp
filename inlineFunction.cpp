#include <iostream>

using namespace std;

inline int cube(int x)
{
	if(1 == 1)
	{
		cout << "Hello";
	}
	int a = 0;

	switch(a)
	{
		case 0:
			cout << "fsdf";
			break;
		default:
			cout << "Mkere";
			break;
	}
	return (x* x *x);
}


int main()
{
	cube(6);
	return 0;
}
