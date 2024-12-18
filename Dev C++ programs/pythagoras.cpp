#include <iostream>
#include <cmath>
#include <cstdlib>

int main ()
{
	using namespace std;
	double opp;
	double adj;
	double hyp;
	char a;
	for (int i=0;i<3;i++)
	{
 cout << "Solving pythagoras thorem: input the variables given to get the HYP. " << endl;
 cout << " Opposite = \n";
 cin >> opp;
 if (opp != a)
 {
 cout << "Adjacent = \n";
 cin >> adj;
 if (adj == a)
 {exit(EXIT_FAILURE);
	 }	
 hyp = sqrt((pow(opp,2.0) + pow(adj,2.0)));	
 cout << " The hypothenus = " << hyp << endl;
}
else
exit(EXIT_FAILURE);
}
system ("pause");
return 0;
}
