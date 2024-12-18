#include <iostream>
#include <windows.h>
#include <string>

	using namespace std;
	

int main(){
	
for(;;){
	

		STARTUPINFO startInfo = {0};
	
	PROCESS_INFORMATION processInfo = {0};
	
string appName="";
string getName;	
	cout << "Enter App Name: ";
	getline(cin, appName);
	
	bool test = false;
		for(int i=0;i<appName.length();i++){
			appName[i] = tolower(appName[i]);
		}
		
			
		
		if (appName.find("bible") != string::npos)
		{
			getName = "C:\\Program Files (x86)\\Biblesoft\\PC Study Bible 4\\Program\\joshua.exe"; //----------
		}
		
			else if (appName.find("quad") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Programming\\C++\\Dev C++ programs\\autoqudraticSolver.exe";
			test = true;
		}
		
		else if (appName.find("matlab") != string::npos)
		{
			getName = "C:\\Program Files\\MATLAB\\R2016a\\bin\\matlab.exe";
		}
			else if (appName.find("shutdown") != string::npos)
		{
			getName = "C:\\windows\\system32\\shutdown /s";
		}
			else if (appName.find("restart") != string::npos)
		{
			getName = "C:\\windows\\system32\\shutdown /r";
		}
			else if (appName.find("logoff") != string::npos)
		{
			getName = "C:\\windows\\system32\\shutdown /l";
		}
			else if (appName.find("timer") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Programming\\C++\\Dev C++ programs\\Timer.exe";
				test = true;
		}
			else if (appName.find("arduino") != string::npos)
		{
			getName = "C:\\Program Files (x86)\\Arduino\\arduino.exe";
		}
			else if (appName.find("eclipse") != string::npos || appName.find("java") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Programming\\eclipse-java-2019-03-R-win32-x86_64\\eclipse\\eclipse.exe";//----------
		}
		
			else if (appName.find("sublime") != string::npos)
		{
			getName = "C:\\Program Files\\Sublime Text 3\\sublime_text.exe";
		}
			else if (appName.find("codeblock") != string::npos)
		{
			getName = "C:\\Program Files (x86)\\CodeBlocks\\codeblocks.exe";
		}
			else if (appName.find("dev") != string::npos)
		{
			getName = "C:\\Program Files (x86)\\Dev-Cpp\\devcpp.exe";//----------------
		}
			else if (appName.find("anaconda") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\AppData\\Local\\Continuum\\anaconda3\\pythonw.exe";
		}
			else if (appName.find("basic") != string::npos)
		{
			getName = "C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\Common7\\IDE\\vbexpress.exe";//---------
		}
			else if (appName.find("visual") != string::npos || appName.find("c++") != string::npos)
		{
			getName = "C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\Common7\\IDE\\VCExpress.exe";
		}
			else if (appName.find("chrome") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\AppData\\Local\\Google\\Chrome\\Application\\chrome_proxy.exe";
			test = true;
		}
				else if (appName.find("file") != string::npos || appName.find("explorer") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\AppData\\Roaming\\Microsoft\\Windows\\Libraries";
		}
		
		
			else if (appName.find("proteus") != string::npos)
		{
			getName = "C:\\Program Files (x86)\\Labcenter Electronics\\Proteus 8 Professional\\BIN\\PDS.EXE";
		}
			
			else if (appName.find("multism") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\Multisim\\Multisim.exe";
		}
			
			else if (appName.find("spyder") != string::npos)
		{
			getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\AppData\\Local\\Continuum\\anaconda3\\pythonw.exe"; 
		}
			
			else if (appName.find("word") != string::npos)
		{
			getName = "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Word 2016.lnk";
		}
			
			else if (appName.find("excel") != string::npos)
		{
			getName = "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Excel 2016.lnk";
		}
			
			else if (appName.find("point") != string::npos)
		{
			getName = "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\PowerPoint 2016.lnk";
		}
			
			else if (appName.find("android") != string::npos)
		{
			getName = "C:\\Program Files\\Android\\Android Studio\\bin\\studio64.exe";
		}
		else{
						getName = "C:\\Users\\DARAMOLA OLUWAFEMI M\\Documents\\C++\\AppCantOpen.exe";

		}
		
		
		
	
	char name[999];
	
		for(int i=0;i<getName.length();i++){
			name[i] = getName[i];
		}
	


	
	bool bsuccess = CreateProcess(TEXT(name),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
	
	if (bsuccess){
		
		printf("Process %s","started: ");
		
		cout << "Process ID:\t" << processInfo.dwProcessId << endl;
	}
	else{
		cout << "Error to start the process: " << GetLastError() << endl;
	}
	
	if(test == true){
		exit(EXIT_FAILURE);
	}
	
}
	
system("pause");	
	
	return 0;
}	
