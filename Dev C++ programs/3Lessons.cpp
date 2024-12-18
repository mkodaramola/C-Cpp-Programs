#include <iostream>
#include <stdlib.h>



char * concant(char * text1, char * text2){
    int l1 = 0;
    int l2 = 0;
    
    

    while (text1[l1] != '\0'){        
        l1++;
    }
    while (text2[l2] != '\0'){        
        l2++;
    }
    
    char * ntext = (char*)malloc(l1+l2+1);
    
    
    l1 = 0;
    l2 = 0;
    
    while (text1[l1] != '\0'){   
		 ntext[l1] = text1[l1];  
        l1++;
    }
    while (text2[l2] != '\0'){   
		ntext[l1+l2] = text2[l2];     
        l2++;
    }
    
    
	return ntext;
}

	using namespace std;
int main ()
{

char * text = "Jesus is Lord";

char * text2 = " and my Savior";

char * nt = concant(text,text2);

cout << nt << endl;




system ("pause");
return 0;	
}


//void UART_TX(char * text){
//    int i = 0;
//
//    while (text[i] != '\0'){
//
//        n = text[i];
//        EUSCI_A_UART_transmitData(EUSCI_A0_BASE, n);
//        __delay_cycles(1000);
//
//        i++;
//    }
//
//}


