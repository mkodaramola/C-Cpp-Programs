#include <iostream>
#include <Windows.h>


	using namespace std;
	
	int main{
		
		WIN32_FIND_DATA file;
		HANDLE search_handle=FindFirstFile(L"C:\\*",&file);
		
		if(search_handle){
			do{
				std::wcout << file.cFileName << endl;
			}while(FindNextFile(search_handle, &file));
			
			FindClose(search_handle);
		}
		
		
	
		
	}

