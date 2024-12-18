#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <sstream>

//.find("") != string::npos
	using namespace std;

	bool tang(string tst){
		
		if(tst.find("tangent") != string::npos && tst.find("equation") != string::npos && tst.find("point") != string::npos && tst.find("(") != string::npos ){
			return true;
		}
	
		
	}	
	bool normal(string tst){
		
		if(tst.find("normal") != string::npos && tst.find("equation") != string::npos && tst.find("point") != string::npos && tst.find("(") != string::npos ){
			return true;
		}
		
	}
	
	int equLen(string spec){
		
int i=0;

	while(spec[i] != ' '){
		i++;
	}

return i;
	
	
}

	
int main(){
	
	
	
string que;
cout << "Question Solver: " << endl;
getline(cin,que);

for (int i=0;i<que.length();i++){
	que[i] = tolower(que[i]);
}

cout << "tangent: " << tang(que) << "     Normal: " << normal(que) << endl << endl;




	if(tang(que) == 1){
		int posB1 = que.find("(");
	int posB2 = que.find(")");
	
	string point = que.substr(posB1,posB2);
	int posCm = point.find(",");
	int posB22 = point.find(")");
	string p1 = point.substr(1,posCm-1);
	
	string p2 = point.substr(posCm+1,posB22-3); 
	
	int x1;
	int y1;
	
	stringstream(p1) >> x1;
	stringstream(p2) >> y1;
	
int posEq = que.find("y=");
string equLine = que.substr(posEq,que.length());

string equ = equLine.substr(0,equLen(equLine));

cout << equ << "                       (" << x1 << "," << y1 << ") \n\n\n\n";	


	equ = equ.substr(2,equ.length());
	unsigned int len = equ.length();
  int w = equ.find("x^2");
  // 4x^2-3x +5
  string wa = equ.substr(0, w);
  double a;
  if (wa == ""){
    a =1;
  }

  stringstream(wa) >> a;

  string wb = equ.substr(w+3,w+5);

  double b;
  stringstream(wb) >> b;

  string wc = equ.substr(7,len);

  double c;
  stringstream(wc) >> c;

if (b > 0){
	cout << "dy/dx = " << (2*a) << "x+" << b << endl << endl<< endl<< endl;
}
else if(b<0){
	cout << "dy/dx = " << (2*a) << "x" << b << endl << endl<< endl<< endl;
}
else{
	cout << "dy/dx = " << (2*a) << "x" << endl << endl<< endl<< endl;
}

double m = (2*a)*x1 + b;
double c1 = (y1-(m*x1));
cout << "gradient = " << m << endl << endl<< endl<< endl;

	if (c1 > 0) {


if (m == 1){
	cout << "Equation of Tangent:  y=" << "x+" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Tangent:  y=" << m << "x+" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}
}

	else if(c1 < 0){

if (m == 1){
	cout << "Equation of Tangent:  y=" << "x" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Tangent:  y=" << m << "x" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}
	else
{

if (m == 1){
	cout << "Equation of Tangent:  y=" << "x"<< endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Tangent:  y=" << m << "x" << endl << endl<< endl<< endl; 
}

}








m = -1/m;
double c2 = (y1-(m*x1));

	if (c2 > 0) {
if (m == 1){
	cout << "Equation of Normal:  y=" << "x +" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Normal:  y=" << m << "x +" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}
	else if(c2 < 0){
if (m == 1){
	cout << "Equation of Normal:  y=" << "x" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Normal:  y=" << m << "x" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}
	else
{
	if (m == 1){
	cout << "Equation of Normal:  y=" << "x"	 << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Normal:  y=" << m << "x" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}


}


/*

else if(tang(que) == true && normal == false){
	
	int posB1 = que.find("(");
	int posB2 = que.find(")");
	
	string point = que.substr(posB1,posB2);
	int posCm = point.find(",");
	int posB22 = point.find(")");
	string p1 = point.substr(1,posCm-1);
	
	string p2 = point.substr(posCm+1,posB22-3); 
	
	int x1;
	int y1;
	
	stringstream(p1) >> x1;
	stringstream(p2) >> y1;
	
int posEq = que.find("y=");
string equLine = que.substr(posEq,que.length());

string equ = equLine.substr(0,equLen(equLine));

cout << equ << "                       (" << x1 << "," << y1 << ") \n\n\n\n";	


	equ = equ.substr(2,equ.length());
	unsigned int len = equ.length();
  int w = equ.find("x^2");
  // 4x^2-3x +5
  string wa = equ.substr(0, w);
  double a;
  if (wa == ""){
    a =1;
  }

  stringstream(wa) >> a;

  string wb = equ.substr(w+3,w+5);

  double b;
  stringstream(wb) >> b;

  string wc = equ.substr(7,len);

  double c;
  stringstream(wc) >> c;

cout << "dy/dx = " << (2*a) << "x" << b << endl << endl<< endl<< endl;

double m = (2*a)*x1 + b;

double c3= (y1-(m*x1));
cout << "gradient = " << m << endl << endl<< endl<< endl;

	if (c3> 0) {


if (m == 1){
	cout << "Equation of Tangent:  y=" << "x+" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Tangent:  y=" << m << "x+" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}
}

	else if(c3< 0){

if (m == 1){
	cout << "Equation of Tangent:  y=" << "x" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Tangent:  y=" << m << "x" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}
	else
{

if (m == 1){
	cout << "Equation of Tangent:  y=" << "x"<< endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Tangent:  y=" << m << "x" << endl << endl<< endl<< endl; 
}

}




}

else if(normal(que) == true && tang(que) == false){
		int posB1 = que.find("(");
	int posB2 = que.find(")");
	
	string point = que.substr(posB1,posB2);
	int posCm = point.find(",");
	int posB22 = point.find(")");
	string p1 = point.substr(1,posCm-1);
	
	string p2 = point.substr(posCm+1,posB22-3); 
	
	int x1;
	int y1;
	
	stringstream(p1) >> x1;
	stringstream(p2) >> y1;
	
int posEq = que.find("y=");
string equLine = que.substr(posEq,que.length());

string equ = equLine.substr(0,equLen(equLine));

cout << equ << "                       (" << x1 << "," << y1 << ") \n\n\n\n";	


	equ = equ.substr(2,equ.length());
	unsigned int len = equ.length();
  int w = equ.find("x^2");
  // 4x^2-3x +5
  string wa = equ.substr(0, w);
  double a;
  if (wa == ""){
    a =1;
  }

  stringstream(wa) >> a;

  string wb = equ.substr(w+3,w+5);

  double b;
  stringstream(wb) >> b;

  string wc = equ.substr(7,len);

  double c;
  stringstream(wc) >> c;

cout << "dy/dx = " << (2*a) << "x" << b << endl << endl<< endl<< endl;

double m = (2*a)*x1 + b;
m = -1/m;
double c4 = (y1-(m*x1));

	if (c4 > 0) {
if (m == 1){
	cout << "Equation of Normal:  y=" << "x +" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Normal:  y=" << m << "x +" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}
	else if(c4 < 0){
if (m == 1){
	cout << "Equation of Normal:  y=" << "x" << (y1-(m*x1)) << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Normal:  y=" << m << "x" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}
	else
{
	if (m == 1){
	cout << "Equation of Normal:  y=" << "x"	 << endl<< endl<< endl<< endl; 
}
else{
	cout << "Equation of Normal:  y=" << m << "x" << (y1-(m*x1)) << endl << endl<< endl<< endl; 
}

}
	
}

else{
	cout << "Can't Solve Presently!\n\n\n\n";
}


*/

	
		
	
	system("pause");
	return 0;
}

























	
