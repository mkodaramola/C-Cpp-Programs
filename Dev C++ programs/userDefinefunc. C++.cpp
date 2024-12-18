#include "iostream"
#include <cmath>
#include <cstdlib>
void myfun (int);

int main ()
{
	using namespace std;
	int fty = 37;
	cout.setf(cout.boolalpha);
myfun (sqrt (1369));
	
system ("pause");
return 0;	
}

void myfun (int num)
{ 
    using namespace std;
	
	cout << "The square root of 1369 is "<< num << endl; 
}
