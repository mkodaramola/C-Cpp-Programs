#include <iostream>
#include <windows.h>
#include <string>

        using namespace std;

        string indentText(string literal, int space) {
       string indent = "" ;
       for (int i = 0; i < space - literal.length(); ++i) {
        indent += " ";
       }
       return (indent + literal);
    }

    void man(){


    }

    int main(){



   string sp =" ";
cout << sp << "          *          " << endl;
cout << sp << "       *  *  *        "<< endl;
cout << sp << "          *          "<< endl;
cout << sp << "          *          "<< endl;
cout << sp << "          *          "<< endl;
cout << sp << "          *          "<< endl;
cout << sp << "       *  *  *        "<< endl;
cout << sp << "     *    *    *     "<< endl;
cout << sp << "    *     *       *    "<< endl;
cout << sp << "          *          "<< endl;
cout << sp << "          *          "<< endl;
cout << sp << "       *  *  *        "<< endl;
cout << sp << "      *       *        "<< endl;
cout << sp << "     *         *     "<< endl;

sp += " ";


    Sleep(1);






        return 0;
    }


