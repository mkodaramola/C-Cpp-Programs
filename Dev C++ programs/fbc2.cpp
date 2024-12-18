#include<iostream>
using namespace std;

int check_has_other_octal(int num)
{
 int octal_in_arr[1000];
 int remainder, quotient;
 int index = 0;
 while(num != 0)
 {
 remainder = num % 10;
 quotient = (num - remainder) / 10;
 num = quotient;
 octal_in_arr[index] = remainder;
 index ++;
 }
 for(int i = 1; i <= index; i++)
 {
 if(octal_in_arr[index - i] == 8 || octal_in_arr[index - i] == 9)
 {
 return 0;
 }
 }
 return 1;
}

int check_has_other_binary(int num)
{
 int binary_in_arr[1000];
 int remainder, quotient;
 int index = 0;
 while(num != 0)
 {
 remainder = num % 10;
 quotient = (num - remainder) / 10;
 num = quotient;
 binary_in_arr[index] = remainder;
 index ++;
 }
 for(int i = 1; i <= index; i++)
 {
 if(binary_in_arr[index - i] != 1 && binary_in_arr[index - i] != 0)
 {
 return 0;
 }
 }
 return 1;
}

int pow(int num, int time)
{
 int sum = num;
 for(int i = 0; i < time - 1; i++)
 {
 sum = sum * num;
 }
 if(time <= 0)
 {
 return 1;
 }
 else
 {
 return sum;
 }
}

int abs(int num)
{
 int sum;
 if(num < 0)
 {
 sum = num * -1;
 }
 else
 {
 sum = num;
 }
 return sum;
}

void hex_to_deci()
{
 cout << "Convert hexadecimal to decimal number.\n";
 cout << "Input hexcadecimal : ";
 string hex_in;
 cin  >> hex_in;
 bool minus;
 if(hex_in[0] == '-')
 {
 minus = true;
 hex_in.erase(0, 0);
 }
 else
 {
 minus = false;
 }
 
 string hex_in_arr[hex_in.length()];
 for (int i = 0; i < hex_in.length(); i++)
   {
    hex_in_arr[i] = hex_in.at(i);
   }
 
 int hex_out = 0;
 for(int i = 0; i < hex_in.length(); i++)
 {
 if(hex_in_arr[i] == "0")
 {
 hex_out += 0 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "1")
 {
 hex_out += 1 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "2")
 {
 hex_out += 2 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "3")
 {
 hex_out += 3 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "4")
 {
 hex_out += 4 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "5")
 {
 hex_out += 5 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "6")
 {
 hex_out += 6 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "7")
 {
 hex_out += 7 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "8")
 {
 hex_out += 8 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "9")
 {
 hex_out += 9 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "A")
 {
 hex_out += 10 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "B")
 {
 hex_out += 11 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "C")
 {
 hex_out += 12 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "D")
 {
 hex_out += 13 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "E")
 {
 hex_out += 14 * pow(16, hex_in.length()- i - 1);
 }
 else if(hex_in_arr[i] == "F")
 {
 hex_out += 15 * pow(16, hex_in.length()- i - 1);
 }
 }
 cout << "Decimal is : ";
 if(minus == true)
 {
 cout << "-";
 minus = false;
 }
 cout << hex_out;
}

void deci_to_hex()
{
 cout << "Convert decimal to hexadecimal number.\n";
 int hex_in;
 
 cout << "Input decimal : ";
 cin  >> hex_in;
 bool minus;
 if(hex_in < 0)
 {
 minus = true;
 hex_in = abs(hex_in);
 }
 else
 {
 minus = false;
 }
 
 int hex_out_arr[1000];
 int index = 0;
 int remainder, quotient;
 while(hex_in != 0)
 {
 remainder = hex_in % 16;
 quotient = (hex_in - remainder) / 16;
 hex_in = quotient;
 
 hex_out_arr[index] = remainder;
 index ++;
 }
 if(minus == true)
 {
 cout << "-";
 minus = false;
 }
 for(int i = 1; i <= index; i++)
 {
 switch (hex_out_arr[index - i])
 {
 case 0 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 1 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 2 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 3 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 4 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 5 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 6 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 7 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 8 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 9 :
 {
 cout << hex_out_arr[index - i];
 break;
 }
 case 10 :
 {
 cout << "A";
 break;
 }
 case 11 :
 {
 cout << "B";
 break;
 }
 case 12 :
 {
 cout << "C";
 break;
 }
 case 13 :
 {
 cout << "D";
 break;
 }
 case 14 :
 {
 cout << "E";
 break;
 }
 case 15 :
 {
 cout << "F";
 break;
 }
 }
 
 }
}

void octal_to_deci()
{
 cout << "Convert octal to decimal number.\n";
 int octal_in;
 bool minus;
 while(true)
 {
 cout << "Input octal : ";
 cin  >> octal_in; 
 if(octal_in < 0)
 {
 minus = true;
 octal_in = abs(octal_in);
 }
 else
 {
 minus = false;
 }
 if(check_has_other_octal(octal_in))
 {
 break;
 }
 cout << "Incorrect format input again.\n";
 }

 int octal_in_arr[1000];
 int remainder, quotient;
 int index = 0;
 while(octal_in != 0)
 {
 remainder = octal_in % 10;
 quotient = (octal_in - remainder) / 10;
 octal_in = quotient;
 octal_in_arr[index] = remainder;
 index ++;
 }

 int octal_out = 0;
 for(int i = 1; i <= index; i++)
 {
 octal_out += octal_in_arr[index - i] * pow(8, index - i);
 }
 cout << "Decimal is : ";
 if(minus == true)
 {
 cout << "-";
 minus = false;
 }
 cout << octal_out;
}

void deci_to_octal()
{
 cout << "Convert decimal to octal number.\n";
 cout << "Input decimal : ";
 int octal_in;
 cin  >> octal_in;
 
 bool minus;
 if(octal_in < 0)
 {
 minus = true;
 octal_in = abs(octal_in);
 }
 else
 {
 minus = false;
 }
 
 int octal_out_arr[1000];
 int index = 0;
 int remainder, quotient;
 while(octal_in != 0)
 {
 remainder = octal_in % 8;
 quotient = (octal_in - remainder) / 8;
 octal_in = quotient;
 
 octal_out_arr[index] = remainder;
 index ++;
 }
 cout << "Octal is : ";
 if(minus == true)
 {
 cout << "-";
 minus = false;
 }
 for(int i = 1; i <= index; i++)
 {
 cout << octal_out_arr[index - i];
 }
}

void binary_to_deci()
{
 cout << "Convert binary to decimal number.\n";
 int binary_in;
 bool minus;
 while(true)
 {
 cout << "Input binary : ";
 cin  >> binary_in;
 if(binary_in < 0)
 {
 minus = true;
 binary_in = abs(binary_in);
 }
 else
 {
 minus = false;
 }
 if(check_has_other_binary(binary_in))
 {
 break;
 }
 cout << "Incorrect format input again.\n";
 }
 
 int binary_in_arr[1000];
 int remainder, quotient;
 int index = 0;
 while(binary_in != 0)
 {
 remainder = binary_in % 10;
 quotient = (binary_in - remainder) / 10;
 binary_in = quotient;
 binary_in_arr[index] = remainder;
 index ++;
 }
 
 
 
 int deci_out = 0;
 for(int i = 1; i <= index; i++)
 {
 deci_out += binary_in_arr[index - i] * pow(2, index - i);
 }
 cout << "Decimal is : ";
 if(minus == true)
 {
 cout << "-";
 minus = false;
 }
 cout << deci_out;
}

void deci_to_binary()
{
 cout << "Convert decimal to binary number.\n";
 int deci_in;
 while(true)
 {
 cout << "Input decimal : ";
 cin  >> deci_in;
 if(deci_in == 0 || deci_in > 0 || deci_in < 0)
 {
 break;
 }
 cout << "Incorrect format input again.\n";
 }
 
 bool minus;
 if(deci_in < 0)
 {
 minus = true;
 deci_in = abs(deci_in);
 }
 else
 {
 minus = false;
 }
 
 int bina_out_arr[1000];
 int index = 0;
 int remainder, quotient;
 while(deci_in != 0)
 {
 remainder = deci_in % 2;
 quotient = (deci_in - remainder) / 2;
 deci_in = quotient;
 
 bina_out_arr[index] = remainder;
 index ++;
 }
 cout << "Binary is : ";
 if(minus == true)
 {
 cout << "-";
 minus = false;
 }
 for(int i = 1; i <= index; i++)
 {
 cout << bina_out_arr[index - i];
 }
}

int select_program()
{
 cout << "--Number Converter--\n";
 cout << "(0) Decimal to Binary\n";
 cout << "(1) Binary to Decimal\n";
 cout << "(2) Decimal to Octal\n";
 cout << "(3) Octal to Decimal\n";
 cout << "(4) Decimal to Hexadecima\n";
 cout << "(5) Hexadecimal to Decimal\n";
 int program;
 cout << "Choose program (by number) : ";
 cin  >> program;
 return program;
}

void execute_program()
{
 int program = select_program();
 switch(program)
 {
 case 0 : 
 {
 deci_to_binary();
 break;
 }
 case 1 :
 {
 binary_to_deci();
 break; 
 } 
 case 2 : 
 {
 deci_to_octal();
 break;
 }
 case 3 :
 {
 octal_to_deci();
 break; 
 }
 case 4 : 
 {
 deci_to_hex();
 break;
 }
 case 5 :
 {
 hex_to_deci();
 break; 
 } 
 default :
 {
 cout << "No program avaliables\n";
 break;
 }
 }
}

main()
{
	system("cls");
 string play_again;
 
 while(true)
 {
 execute_program();
 while(true)
 {
 cout << "\n";
 cout << "Do you want to use again? (Y / N) : ";
 cin  >> play_again;
 
 if(play_again == "Y" || play_again == "y" || play_again == "N" || play_again == "n")
 {
 break;
 }
 else
 {
 cout << "Incorrect format input again!!\n";
 }
 }
 if(play_again == "N" || play_again == "n")
 {
 break;
 }
 }
 cout << "Thanks for using my program";
}
