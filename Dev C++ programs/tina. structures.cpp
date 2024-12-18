#include <iostream>
struct z3 { char name[50]; int CAscore; int Examscore;
	
};
int main ()
{
	using namespace std;
int x;
cout <<"Enter the student`s class number" << endl;	
cin >> x;	
// Conditioning	
	
if (x==1)
{	
z3 tina	=
	{ "Tina Ryan",
		23,
		45
	};
		int totalScoretina = (tina.CAScore+tina.ExamScore);
		cout << tina.name << endl;
	cout << "C.A Test= " <<tina.CAScore << endl;
	cout << "Exam= " << tina.ExamScore << endl;
	cout << "Total Score= " << totalScoretina << endl;
	cout << " " << endl;
}
else if (x==2)
{
	z3 dav =
	{ "Adekunle David",
		25,
		51
	};
		int totalScoredav = (dav.CAScore+dav.ExamScore);
		cout << dav.name << endl;
	cout << "C.A Test= " <<dav.CAScore << endl;
	cout << "Exam= " << dav.ExamScore << endl;
	cout << "Total Score= " << totalScoredav << endl;
	cout << " " << endl;
	else 
	
	  cout << "Invalid Number!!!" << endl;
}
system ("pause");
return 0;	
}
