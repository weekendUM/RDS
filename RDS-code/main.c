#include "core.h"

int main()
{
	setup(); //this function needs to be the first line to be executed
	people[0]->print(people[0]);
	prepare_quit(); //this function needs to be last to be executed

	//system("pause");

	return 0;
}