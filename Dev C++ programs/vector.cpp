#include <iostream>
#include <vector>

using namespace std;

int main(){
	
vector <int> vec(3);
vec[0]=12;
vec[1]=45;
vec[2]=7;
vec.insert(vec.begin()+1,9);
for(int i=0;i<vec.size();i++){
	cout << vec[i] << endl;
}

cout << "------------------\n";
cout << vec.at(3) << endl;
	
	
	return 0;
}
