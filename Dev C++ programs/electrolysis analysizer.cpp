#include <iostream>
#include <cstdlib>
#include <cmath>

void dh();
		using namespace std;
int main (){

char lyte;

cout << "Electrolyte of (A) Conc CuCl2 (B) Dil CuCl2 (C) Conc CuSO4 (D) Conc HCl (E) Conc NaCl(Brine) (F) Molten NaCl (G) Conc NaOH ---> \n";
cin >> lyte;
cout << " \n";

if (lyte == 'A' || 'a'){
 dh();
}

system ("pause");
return 0;	
}

void dh(){
char anod;
char cath;
cout << "Anode Electrode: (A) Platinum (B) Carbon (C)Copper ---> ";
cin >> anod;
cout << " \n";
cout << "Cathode Electrode: (A) Platinum (B) Carbon (C)Copper ---> ";
cin >> cath;
cout << " " << endl;
cout << "Result ---> " << endl;
cout << " " << endl;
if (anod == 'B' || 'b' || 'A' || 'a' && cath == 'C' || 'c'){
	cout << "Product discharged at the cathode is: Copper \n";
	cout << " " << endl;
	cout << "Product discharged at the Anode is: Chlorine gas \n";
	cout << " " << endl;
	cout << "Effect on Electrolye: Removal of Cu(2+) and Cl(-) dilutes electrolyte \n";		
}
else if (anod == 'C' || 'c' && cath == 'C' || 'c'){
	cout << "Product discharged at the cathode is: Copper is deposited \n";
	cout << " " << endl;
	cout << "Product discharged at the Anode is: Copper anode dissolves \n";
	cout << " " << endl;
	cout << "Effect on Electrolye: Concentration of electrolyte remains unchanged \n";		
}


	
}
