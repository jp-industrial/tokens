#include "c:\Users\james\Desktop\migrate\std_lib_facilities.h"

class Token { //simple user-defined type
public:
	char kind;
	double value;
};

int main()
{
	Token t;
	t.kind = '+';

	Token t2;
	t2.kind = '8';
	t2.value = 3.14;

	Token tt = t;
	if (tt.kind != t.kind) error("Impossible!\n");

	t = t2;
	cout << t.value;

	Token t2{ '8', 2.5 }; //initialisation- see automatic attribution!

	Token get_token();

}