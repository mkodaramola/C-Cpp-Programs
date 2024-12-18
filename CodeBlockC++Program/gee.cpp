#include <iostream>
#include <string>
#include <sstream>
#include <strstream>
#include <cstdlib>
#include <graphics.h>

using namespace std;



		string toBinary(int n, int arr[]){

		int i,y,Tarr[]={};

			for(i=0;n>=1;i++){

				arr[i] = n%2;

				n/=2;

				y=i;


			}

		string Sbin;

	transform(begin(arr),end(arr),back_inserter(Sbin),[](int const &i){ return i + '0'})



		return Sbin;


	}


		 int main(){
	int n;
	int arr[128];
		int i,y;
		cout << "Enter number: ";
		cin >> n;


		string str = toBinary(n,arr);

            cout << str;




		return 0;
		}
