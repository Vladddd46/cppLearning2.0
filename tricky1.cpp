#include <iostream>

using namespace std;


int main()
{
	int x = 2;
	{
		// [x] == 2. 
		// Because we have not ended the declaration, we still use int x=2.
		int x[x];
	}
	return 0;
}