#include <iostream>
#include <cstdlib>
#include <cstdio>

int main()
{
	using namespace std;
int num;
cout << "Do you want to knw the way,truth and life? ";
cout << "If Yes Enter 1 ";
cout << "If No Enter 2" << endl;
cin >> num;
switch (num)
{
	case 1:
		cout << "His name is Jesus, the Son of God." << endl;
		break;
	case 2:
		exit(EXIT_FAILURE);
		break;
	default:
	cout << "INVALID INPUT: Pls enter either 1 or 2." << endl;	
}


system ("pause");
return 0;	
}
