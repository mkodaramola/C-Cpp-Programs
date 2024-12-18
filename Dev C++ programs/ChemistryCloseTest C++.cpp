#include <iostream>
#include <fstream>
#include <cstdlib>
// c|\c
int main ()
{
	using namespace std;
int passw;
int x;
int count;
char as;
int Cpassw = 1234;
cout << "Password: ";
cin >> passw;
if (passw == as)
{
	exit(EXIT_FAILURE);
}
int i;
while  (passw != Cpassw && i>4)    
  {	
  for (i=1;i<4;i++)
  {
cout << " " << endl;
cout << "INCORRECT Password!!! " << endl;
cout << " " << endl;
cout << "Password: ";
cin >> passw;
(i+0);

}
if (passw == as)
{
	exit(EXIT_FAILURE);
}

}
if (i == 4 && passw != Cpassw )
{
	exit(EXIT_FAILURE);	
}
char zoa;	
char zob;
char zoc;
char zod;
char zoe;
char zof;
char yoyo;
char oyin;
char printMap (7);
int m1;
int m2;
int m3;
int m4;
int m5;
int m6;
int a;
int b;
int c;
int d;
int e;
int f;
int Examn;
cout << " " << endl;
cout << "Enter your Examination Number: ";
cin >> Examn;
		
cout <<"                          CHEMISTRY QUIZ " << endl;
cout << "   CHOOSE FROM THE OPTIONS THE NUMBER OF YOUR CORRECT ANSWERS AND ENTER."<< endl;
cout << " " << endl;
cout << " " << endl;
cout << " " << endl;
cout <<"1. The name of the most abundant element on earth is____ \n";
cout << "(A) iron (B) oxygen (C) Aluminium (D) silicon " << endl;
cin >> oyin;
cout << " " << endl;	
cout << "2. The only metal that is liquid at room temperature is?" << endl;
cout << "(A) Mercury (B) Bismuth (C) Chlorine (D) Bromine " << endl;
cin >> zod;
cout << " " << endl;
cout << "3. The process by which solid is converted to gas without passing through liquid state is?" <<endl;
cout << "(A) Evaporation (B) Sublimation (C) Crystallisation (D) Disposition " << endl;
cin >> zoa;
cout << " " << endl;
cout << "4. The type of acid found in Oranges is called?" << endl;
cout << "(A) citric acid (B) Ethanoic acid (C) Lactic acid (D) Ascorbic acid " << endl;
cin >> zob;
cout << " " << endl;
cout << "5. What type of ray has the nucleus of an helium?" <<endl;
cout << "(A) X-rays (B) Gamma rays (C) Alpha rays (D) Beta rays " << endl;
cin >> zoe;
cout << " " << endl;
cout << "6. The most electronegative element on the periodic table is?" << endl;
cout << "(A) Potassium (B) Chlorine (C) Bromine (D) Fluorine " << endl;
cin >> zof;
if (oyin == 'b' || oyin == 'B')
{
	a = 1;
		m1 = (0);
}
else
{
	a = 0;
	m1 = 1;
}
if (zod == 'a' || zod == 'A')
{
	b = 1;
		m2 = (0);
}
else
{
	b = 0;
	m2 = 2;
}
if (zoa == 'b' || zoa == 'B')
{
	c = 1;
	m3 = (0);
}
else
{
	c = 0;
	m3 =3;
}
if (zob == 'd' || zob == 'D')
{
	d = 1;
		m4 = (0);
}
else
{
	d = 0;
	m4 = 4;
}
if (zoe == 'c' || zoe == 'C')
{
	e = 1;
		m5 = (0);
}
else
{
	e = 0;
	m5 = 5;
}
if (zof == 'd' || zof == 'D')
{
	f = 1;
		m6 = (0);
}
else
{
	f = 0;
	m6 = 6;
}


int total = (a+b+c+d+e+f);
cout << " " << endl;
ofstream rfile;
rfile.open("ChemResult.txt");
rfile << "Candidates' Examination Number = " << Examn << endl;
rfile <<" \n";
rfile << "Candidate got " << total <<" of 6"  << endl;
rfile <<" \n";
rfile << "Candidate did not get the following numbers " << m1 << ", " << m2 << ", "  << m3 << ", "  << m4 << ", "  << m5 << " and "  << m6 << endl;
rfile <<"\n";



system ("pause");
return 0;	
}	
