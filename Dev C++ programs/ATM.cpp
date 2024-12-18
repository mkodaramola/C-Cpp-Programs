	#include <iostream>
#include <cmath>
#include <cstdlib>
#define nl '\n'

int ra = 100;
int rb = 200;
int rc= 500;
int rd= 1000;
int re = 1500;
char amt;
int racc;
int ramt;
int a=1000;
int b = 2000;
int c = 3000;
int d=5000;
int e=10000;
int f=20000;
int g=30000;
int h=50000;
int uacc= 25000;
int awt;
int cont;
int dep;
int newAmt=(dep+uacc);
	using namespace std;
int main(){



string name = "BALOGUN MUBARAQ TEMITOPE";
int opt;
int pin;
cout << "Enter Pin: ";
cin >> pin;

loop:
if (pin == 1234){
	
	system("cls");

	uacc = newAmt;
	cout << nl;
	cout << nl;
	cout << nl;
	cout << "Welcome " << name << " to GT Bank \n";
	cout << nl;

	cout << "Enter:" << endl;
	cout << "\t 1 \t to \t Check Account \n";
	cout << "\t 2 \t to \t Withdraw \n";
	cout << "\t 3 \t to \t Deposit \n";
	cout << "\t 4 \t to \t Transfer \n";
	cout << "\t 5 \t to \t Recharge Mobile Account \n";
cin >> opt;




switch (opt){
	case 1:
			system("cls");

		cout << nl;
		cout << nl;
		cout << nl;
		cout << "Name: " << name << endl;
		cout << nl;
		cout << "Account Number: 10294637495 \n";
		cout << nl;
		cout << "Account Type: Savings \n";
		cout << nl;
		cout << "Amount: #" << uacc << endl;
		cout << nl;
		cout << nl;
		cout << "\t Enter 1 \t to \t perform other transactions \n";
		cout << "\t Enter 2 \t to \t to end operation \n";
		cin >> cont;
		if (cont == 1){
			goto loop;
		}
		else
		break; // end case 1

	case 2:
			system("cls");


		cout << "Enter option containing the amount you will like to withdraw \n";
	cout << "\t A \t 1,000 \n";
	cout << "\t B \t 2,000 \n";
	cout << "\t C \t 3,000 \n";
	cout << "\t D \t 5,000 \n";
	cout << "\t E \t 10,000 \n";
	cout << "\t F \t 20,000 \n";
	cout << "\t G \t 30,000 \n";
	cout << "\t H \t 50,000 \n";
cin >> amt;
if (amt == 'A' ||amt == 'a'){
		awt = a;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
		cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You dont have up to that amount in your account \n";
}

if (amt == 'B' || amt == 'b'){
		awt = b;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
		cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You don't have up to that amount in your account \n";
}
if (amt == 'C' ||amt == 'c'){
		awt = c;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
		cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You dont have up to that amount in your account \n";
}

if (amt == 'D' ||amt == 'd'){
		awt = d;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
	cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You dont have up to that amount in your account \n";
}
if (amt == 'E' ||amt == 'e'){
		awt = e;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
		cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You dont have up to that amount in your account \n";
}
if (amt == 'F' ||amt == 'f'){
		awt = f;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
		cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You dont have up to that amount in your account \n";
}

if (amt == 'G' ||amt == 'g'){
		awt = g;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
		cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You dont have up to that amount in your account \n";
}
if (amt == 'H' ||amt == 'h'){
		awt = h;
		if (uacc > awt){
	cout << "Amount debited: #" << awt << endl;
		cout << "New Account: #" << (uacc - awt) << endl;
}
else
cout << "Sorry, You dont have up to that amount in your account \n";
}

		cout << "\t Enter 1 \t to \t perform other transactions \n";
		cout << "\t Enter 2 \t to \t to end operation \n";
		cin >> cont;
		if (cont == 1){
			goto loop;
		}
		else

		break;
												// end case 2
case 3:
	system("cls");

cout << "Enter amount to Deposit \n";
cin >> dep;
cout << nl;
cout << "Name: " << name << endl;
cout << "Amount deposited: #" << dep << endl;
cout << "Initial Amount: #" << uacc << endl;
cout << "New Amount: #" << (dep+uacc) << endl;

	cout << "\t Enter 1 \t to \t perform other transactions \n";
		cout << "\t Enter 2 \t to \t to end operation \n";
		cin >> cont;
		if (cont == 1){
			goto loop;
		}
		else

		break;
case 4:
	system("cls");

cout << "Enter Account number of the recipient: ";
cin >> racc;
cout << "Enter amount to transfer: ";
cin >> ramt;

cout << "\t Transaction Completed! \n";
cout << "Your new account balance is #" << (uacc-ramt) << endl;
cout <<nl;
cout << nl;
	cout << "\t Enter 1 \t to \t perform other transactions \n";
		cout << "\t Enter 2 \t to \t to end operation \n";
		cin >> cont;
		if (cont == 1){
			goto loop;
		}
		else

		break;
case 5:
		system("cls");

	long tel;
	char ropt;
	cout << "Enter:" << endl;
	cout << "\t 1 \t for \t MTN \n";
	cout << "\t 2 \t for \t GLO \n";
	cout << "\t 3 \t for \t AIRTEL \n";
	cout << "\t 4 \t for \t 9Mobile \n";

cin >> ropt;
cout << "Tel number of recipient: ";
cin >> tel;
int ar;
	cout << "Enter Amount to Recharge:" << endl;
	cout << "\t 1 \t for \t " << ra << endl;
	cout << "\t 2 \t for \t " << rb << endl;
	cout << "\t 3 \t for \t " << rc << endl;
	cout << "\t 4 \t for \t " << rd << endl;
	cout << "\t 5 \t for \t " << re << endl;
	cin >> ar;
	int hra;
	if (ar == 1){
		hra = ra;

}
	if (ar == 2){
		hra = rb;

}
	if (ar == 3){
		hra = rc;

}
	if (ar == 4){
		hra = rd;

}
	if (ar == 5){
		hra = re;

}

cout << "#" << hra << " recharged! \n";
cout << "New Account Balance: " << (uacc-hra) << endl;


} // for switch statement









} // for first if statement

system ("pause");
return 0;
}


