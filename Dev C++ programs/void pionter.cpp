// increaser
#include <iostream>
using namespace std;
void increase (void* data, int psize)
{
if ( psize == sizeof(char) )
{ char* pchar; pchar=(char*)data; (*pchar)-=20; }
else if (psize == sizeof(int) )
{ int* pint; pint=(int*)data; ++(*pint); }
}
int main ()
{
char a = 'z';
int b = 1602;
increase (&a,sizeof(a));
increase (&b,sizeof(b));
cout << a << ", " << b << endl;
system("pause");
return 0;
}
