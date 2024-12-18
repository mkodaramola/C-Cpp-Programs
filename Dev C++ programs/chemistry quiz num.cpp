#include <iostream>
// c|\c
int main ()
{
	using namespace std;
int zoa;	
int zob;
int zoc;
int zod;
int zoe;
int zof;
int yoyo;
int oyin;
int a;
int b;
int c;
int d;
int e;
int f;
		
cout <<"                          CHEMISTRY QUIZ " << endl;
cout << "   CHOOSE FROM THE OPTIONS THE NUMBER OF YOUR CORRECT ANSWERS AND ENTER."<< endl;
cout << " " << endl;
cout << "(1)sublimation (2) ascorbic acid (3) oxygen (4) fluorine (5) alpha ray (6) mercury (7) iron (8)citric acid (9) sodium (10) beta ray (11) disposition (12)Crystalliztion (13) silicon (14) chlorine (15) Hard X-ray " <<  endl;
cout << " " << endl;
cout << " " << endl;
cout <<"A. The name of the most abundant element on earth is " << endl;
cin >> oyin;	
if (oyin == 'a' || oyin == 'A')
{
	a = 1;
}
else
{
	a = 0;
}
switch (zod)
{
	case 6:
		b = 1;
	break;
	default:
		b = 0;
}
switch (zoa)
{
	case 1:
		c = 1;
	break;
	default:
		c = 0;
}
switch (zob)
{
	case 2:
		d = 1;
	break;
	default:
		d = 0;
}
switch (zoe)
{
	case 5:
		e = 1;
	break;
	default:
		e = 0;
}
switch (zof)
{
	case 4:
		f = 1;
	break;
	default:
		f = 0;
}


int total = (a+b+c+d+e+f);
cout << " You got " << total <<" of 6"  << endl;
system ("pause");
return 0;	
}	 
