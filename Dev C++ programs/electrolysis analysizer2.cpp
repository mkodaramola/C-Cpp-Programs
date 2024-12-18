#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

	using namespace std;
int main (){
cout << "Electrochemical series for CATIONS: \n";	
cout << "(A) K (B) Na (C) Ca (D) Mg (E) Al (F) Zn (G) Fe (H) Sn (I) Pb (J) H (K) Cu (L)Hg(M) Ag (O) Au \n";
cout << "-------------------------------------------------------------------------------- \n";

cout << "Electrochemical series for ANIONS: \n";
cout << "(a) F (b) SO4 (c) NO3 (d) Cl (e) Br (f) I (g) OH \n";
cout << "-------------------------------------------------------------------------------- \n";
cout << "-------------------------------------------------------------------------------- \n";

cout << " \n";
string bul;
char cat;
cout << "What is the Cation of the Electrolyte: ";
cin >> cat;
if (cat == 'A'){
	bul = "K";
	cout << "Your cation is " << bul << endl;
}
if (cat == 'B'){
		bul = "Na";
		cout << "Your cation is " << bul << endl;
}
if (cat == 'C'){
	bul = "Ca";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'D'){
	bul = "Mg";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'E'){
	bul = "Al";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'F'){
	bul = "Zn";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'G'){
	bul = "Fe";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'H'){
	bul = "Sn";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'I'){
	bul = "Pb";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'J'){
	bul = "H";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'K'){
	bul = "Hg";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'L'){
	bul = "Ag";
	
	cout << "Your cation is " << bul << endl;
}
if (cat == 'M'){
	bul = "Au";
	
	cout << "Your cation is " << bul << endl;
}



cout << " \n";
string cul;
char ann;
cout << "What is the Anion of the Electrolyte: ";
cin >> ann; 
if (ann == 'a'){
	cul = "F";
	cout << "Your anion is " << cul << endl;
}
if (ann == 'b'){
	cul = "SO4";
	cout << "Your anion is " << cul << endl;
}
if (ann == 'c'){
	cul = "NO3";
	cout << "Your anion is " << cul << endl;
}
if (ann == 'd'){
	cul = "Cl";
	cout << "Your anion is " << cul << endl;
}
if (ann == 'e'){
	cul = "Br";
	cout << "Your anion is " << cul << endl;
}
if (ann == 'f'){
	cul = "I";
	cout << "Your anion is " << cul << endl;
}
if (ann == 'g'){
	cul = "OH";
	cout << "Your anion is " << cul << endl;
}
cout << " \n";

char cd;
string cdn;
cout << "(A) Conc (B) Dil \n";
cin >> cd;
switch (cd)
{
	case 'A':
		cdn = "Conc";
	break;
	case 'B':
	cdn = "Dil";
	break;
	default:
	exit(EXIT_FAILURE);	
}
cout << " \n";
char ans;
cout << "The Electrolyte is " << cdn << " " << bul << cul << ". \n";
cout << " \n";

cout << "Can we proceed? (Yes / No): ";
cin >> ans;
switch (ans)
{
	
	
	
	
	
	case 'y': 
	{
		cout << " \n";
		cout << "-------------------------------------------------------------------------------- \n";
		cout << "Electrode: (A) Inert Electrode[Carbon/Platinum] (B) Copper \n";
		cout << "-------------------------------------------------------------------------------- \n";
				cout << " \n";
				char ode;
				string dul;
		cout << "Anode: ";
		cin >> ode;
		if (ode == 'A'){
			dul = "Inert(Platinum/Carbon)";
			cout << " Anode is " << dul << endl;
		}
						cout << " \n";

		char code;
		string gul;
		cout << "Cathode: ";
			cin >> code;
		if (code == 'B'){
			gul = "Copper";
			cout << "Cathode is " << gul << endl;
		}
		
		
		
		
		
		
		
		
	}
	break;
	
	
	
	
	
	
	
	
	default:
		exit(EXIT_FAILURE);
	
}





















system ("pause");
return 0;	
}


