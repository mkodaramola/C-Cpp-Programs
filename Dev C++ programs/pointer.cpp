#include <iostream>
#include <string>


	using namespace std;

	
static unsigned int n = 0;
int ** addElem(int ** arr,int x1,int x2,int x3,int x4){
	auto int n1 = n;
	int ** p = new int*[n1+1];
	
	for(int i=0;i<n1+1;i++){
		p[i] = new int[4];
	}
	
		for(int i=0;i<n1;i++){
			for(int j=0;j<4;j++){
			 p[i][j] = arr[i][j];	
		}
		}
	
	
		for(int i=0;i<n1;i++){
			delete []arr[i];
			arr[i] = NULL;
	}
	
	arr = NULL;

	auto int xarr[4] = {x1,x2,x3,x4};
		for(int i=0;i<4;i++){
		
		p[n1][i] = xarr[i];
	
	}
	
	arr = p;
	
		for(int i=0;i<n1+1;i++){
			for(int j=0;j<4;j++)  {
			
				arr[i][j] = p[i][j];
				
			}
		}

	
			p = NULL;
	
	n++;
	return arr;
	
}



static unsigned int n2 = 0;
int * addElem(int * arr,int x){
	
	auto int * p = new int[n2+1];
	
	for(int i=0;i<n2;i++) p[i] = arr[i];
	
	p[n2] = x;
	
	delete []arr;
	
	arr = NULL;
	
	arr = p;
	
	for(int i=0;i<n2+1;i++) arr[i] = p[i];
	
	p = NULL;
	
	n2++;
	
	return arr;	
	
}




	
int main (){


int ** parr = new int*[n];

int * a = new int[n2];
int sum = 0;
a = addElem(a,4);
cout << n2 << endl;
a = addElem(a,5);
cout << n2 << endl;
a = addElem(a,10);
cout << n2 << endl;
a = addElem(a,6);
cout << n2 << endl;
for(int i=0;i<n2;i++){
	sum += a[i];
}

cout << sum << endl;







system ("pause");
return 0;	
}
