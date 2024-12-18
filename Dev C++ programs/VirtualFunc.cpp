#include <iostream>
#include <string>

	using namespace std;
	
	class fclass{
		private:
		
		public:
			int num;
			void msg(){
				cout << "In fclass with variable " << num << endl;
			}
		
	};
	
	class sclass:public fclass
	{
		public:
		void smsg(){
			msg();
		}
		
	};
	
	
char *cs(string x){
	char c[99] = "";
	
	for(int i=0;i<x.length();i++){
		c[i]+=x[i];
	}
	
	return c;
}	
	
	
	int main(){
		
cout << cs("Femi") << endl;
		
		system("pause");
		return 0;
	}
