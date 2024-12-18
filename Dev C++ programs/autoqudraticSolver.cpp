#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
using namespace std;

int main()
{

system("cls");
  string wd;
 cout << "Enter Equation: "; 
  getline(cin,wd);


  unsigned int len = wd.length();
  int w = wd.find("x^2");
  // 4x^2-3x +5
  string wa = wd.substr(0, w);
  double a;
  if (wa == ""){
    a =1;
  }

  stringstream(wa) >> a;

  string wb = wd.substr(w+3,w+5);

  double b;
  stringstream(wb) >> b;

  string wc = wd.substr(7,len);

  double c;
  stringstream(wc) >> c;


    double p = -b;
  double q = (sqrt((b*b)-(4*a*c)));
  double r = (2*a);

  double x1 = (p+q)/r;
  double x2 = (p-q)/r;

  cout << x1 << "  " << x2 << endl;

system("pause");
    return 0;
}
