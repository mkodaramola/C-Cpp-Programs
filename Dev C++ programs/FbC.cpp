#include <iostream>
#include <vector>

using namespace std;
int simpleArraySum(vector<int> ar) {
	int sum = 0;
	for (int i = 0; i < ar.size(); i++) {
		sum += ar[i];
	}
	return sum;
}
int main()
{
	vector<int> array;
	
	int n;
	cout << "Enter 10 integers: \n";
	array.reserve(10);
	for (int i = 0; i < 10; i++) {
		cin >> n;
		array.push_back(n);
	}
	cout << "\nsum: " <<  simpleArraySum(array);
}
