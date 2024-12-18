#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
#include <cmath>


using namespace std;

int qda(string gst){
    int p1 = gst.find("x^2");

    string sub1 = gst.substr(0,p1);
    int a;

    istringstream iss(sub1);
    iss >> a;

        if (!iss.good()){
            return a;
        }
        else
        return 0;
    // x^2 + 3x + 6
}
int qdb(string gst){
    int p1 = gst.find("^2");

    string nst = gst.substr(0,p1);
    int p2 = gst.find("x");



    string sub1 = gst.substr(p1+3,p2);
    int b;

    istringstream iss(sub1);
    iss >> b;

        if (!iss.good()){
            return b;
        }
        else
        return 0;

}
int qdc(string gst){

    int p1 = gst.find("x+");
    int p2 = gst.length();


    string sub1 = gst.substr(p1+2,p2);
    int c;

    istringstream iss(sub1);
    iss >> c;

        if (!iss.good()){
            return c;
        }
        else
        return 0;

}


int main(){

    string w1;

    getline(cin,w1);


  int a = qda(w1);
                int b = qdb(w1);
                int c = qdc(w1);
                    int p,q,r;
                    p = -b;
                    q = sqrt((pow(b,2.0))-(4*a*c));
                    r = (2*a);
                    int x1 = (p+q)/r;
                    int x2 = (p-q)/r;


cout << "x1 = " << a << "\t" << "x2 = " << b << c << endl;
Sleep(3000);

return 0;

}

