#include <iostream>
	using namespace std;

void swap(char *x, char *y){
	char *t = x;
	x=y;
	y=t;
}

int main()
{
char *x = "geekquiz";
char *y = "geeksforgeeks";
char *t;
swap(x,y);
cout << x << " " << y;
t = x;
x= y;
y=t;

cout << " " << x << " " << y;


	
system ("pause");
return 0;	
}
