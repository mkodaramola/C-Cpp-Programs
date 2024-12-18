#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

void ILLE(){


    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35;
     int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35;




        cout << "\n\n\n";

        cout << "\t\t Information Literacy and Library Education in Nigeria \n\n";
 cout << "\n";
    getline(cin,a30);


    cout << "________ is a set of abilities requiring individuals to recognise when information is needed and have the ability to locate and use effectively the needed information. \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("literacy") != string::npos && a1.find("information") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Information Literacy \n";

        }

        /////////////////////
          cout << "Information literacy is a fusion of the following except?\n (A) Ethics (B) Media literacy (C) Computer literacy (D) Technological literacy (E)Aesthetic \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("e") != string::npos || a2.find("E") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = E  \n";

        }

          cout << "Which of the following is NOT an aspect of information literacy\n (A) Visual literacy (B) Network literacy (C) Social literacy (D) Numerical literacy (E) Library instruction \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("c") != string::npos || a3.find("C") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = (C) \n";

        }

          cout << "Mention the two types of Education \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("formal") != string::npos && (a4.find("self") != string::npos) || a4.find("informal") != string::npos || a4.find("life") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Formal and (Self taught/ life exercise)  \n";

        }

          cout << "Education is needed for the __________ \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("mind") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Mind  \n";

        }

          cout << "_________ is any act or experience that has a formative effect on the mind, character or physical ability of an individual. \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("educ") != string::npos && a6.find("ation") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Education  \n";

        }

          cout << "_________ source of information have not been interpreted by anyone other than its creator \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("prim") != string::npos && a7.find("ary") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Primary  \n";

        }

          cout << "__________ are sources that analyze and interpret primary sources  \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("second") != string::npos && a8.find("ary") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Secondary information sources  \n";

        }

          cout << "Diaries, Letters, Autobiographies, Conference literatures, Statistics, Poetry and Drama are examples of ___________ information source  \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if (a9.find("prim") != string::npos && a9.find("ary") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Primary  \n";

        }

          cout << "_________ information source act as a tool for understanding and locating information \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("terti") != string::npos && a10.find("ary") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Tertiary  \n";

        }


          cout << "_________ is an array of skills which may tackle the process of organising and taking in new information, retaining information. \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("study") != string::npos && a11.find("skill") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Study skills  \n";

        }

          cout << "________ aid the retention of lists of information \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("mnemo") != string::npos && a12.find("nic") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = Mnemonics \n";

        }

             cout << "Library is both the _________ and Sources and the _______ and storehouse of knowledge & experience \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("foundation") != string::npos && a13.find("protector") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Foundation, Protector  \n";

        }

          cout << "__________ is regarded as the people's University \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("libr") != string::npos && a14.find("ary") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Library  \n";

        }

          cout << "The library can be seen as an _______ of education \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("exten") != string::npos && a15.find("sion") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Extension  \n";

        }

          cout << "________ is the abilty to understand graphic and charts  \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("visual") != string::npos && a16.find("literacy") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Visual literacy \n \n";

        }

}





void Library(){


    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40;
    unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35,s36,s37,s38,s39,s40;

        cout << "\n\n\n";

        cout << "\t\t\tThe Library\n\n";
 cout << "\n";
    getline(cin,a30);


      cout << "The word 'Library' is from the latin word 'liber', which means __________ \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("bo") != string::npos && a1.find("ok") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Book \n \n";

        }

        cout << "_________ is seen as an agent of educational,social and political change  \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("lib") != string::npos && a2.find("rary") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Library  \n \n";

        }

        cout << "The Library is the ___________ of the university or institution. \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("hea") != string::npos && a3.find("rt") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Heart  \n \n";

        }


        cout << "For a library to perform its duties effectively, which of the following may not be needed. \n(A) Staff (B) Funds (C)Well ventilated building (D) Laboratory for Scientific research (E) Information resources  \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("d") != string::npos || a4.find("D") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = (D)  \n \n";

        }
        cout << "__________ library is founded by the Federal or Central government of a country \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("national") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = National  \n \n";

        }

           cout << "___________ is often refers to as 'Community information resources centre' \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if ((a9.find("public") != string::npos || a9.find("state") != string::npos) && a9.find("library") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Public/State Library \n \n";

        }

        cout << "What type of library supply in-depth knowledge for advanced study and research in almost all human endeavour.  \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("acade") != string::npos && a14.find("mic") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Academic Library \n \n";

        }




        cout << "BLL is what type of library? \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("national") != string::npos && a8.find("library") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = National Library \n \n";

        }


        cout << "__________ library is owned by individuals \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("priv") != string::npos && a10.find("ate") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Private  \n \n";

        }


        cout << "Henry Carr Library is a perfect example of which type of library \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("priv") != string::npos && a11.find("ate") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Private Library  \n \n";

        }

        cout << "The library established in elementary and secondary schools to support teaching and learning is called ____________ \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("school") != string::npos && a12.find("library") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = School library \n \n";

        }

        cout << "The modern school libraries are often called __________ \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("media resour") != string::npos && a13.find("centre") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Media Resource Centre  \n \n";

        }

          cout << "___________  library is a depositories for all publication \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("nationa") != string::npos && a6.find("l") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = National \n \n";

        }



        cout << "__________ produces the union catalogue \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("library") != string::npos && a7.find("national") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = National Library \n \n";

        }

        cout << "What type of libraries serve only the organisations to which they are attached \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("spec") != string::npos && a15.find("ial") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Special Library  \n \n";

        }

      cout << "Which of the following is not an example of institution where Special Library can be found? (A)SPDC(B)NIIA(C)CBN(D)FRCN(E)NFA \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("e") != string::npos || a16.find("E") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = (E)  \n\n";

        }


          cout << "Which of DIGITAL and ELECTRONICS Libraries has Internet access \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if (a17.find("elec") != string::npos && a17.find("tronic") != string::npos){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Electronics Library \n\n";

        }


          cout << "_________ library is popularly known as Library without walls \n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if (a18.find("virt") != string::npos && a18.find("ual") != string::npos){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = Virtual Library \n\n";

        }

          cout << "____________ is a place where a large number of historical records are stored. \n";
         getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if (a19.find("arch") != string::npos && a19.find("ive") != string::npos){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Archives  \n\n";

        }

          cout << "Archive contains _____________ sources of information. \n";
         getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if (a20.find("prim") != string::npos && a20.find("ary") != string::npos){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer = Primary \n\n";

        }


          cout << "Items in Archive are grouped by there ____________ \n";
         getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if ((a21.find("source") != string::npos || a21.find("place") != string::npos)  && a21.find("origin") != string::npos){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = Place/Source of Origin\n\n";

        }

          cout << "Response to user's queries, registration of users and lending & borrowing of library materials are the basic functions of _____________ \n";
         getline(cin,a22);
        for(int i=0;i<a22.length();i++){
            a22[i]=tolower(a22[i]);
        }
        if (a22.find("circulation") != string::npos && a22.find("unit") != string::npos){
            s22 = 1; cout << "Correct! \n\n";
        }
        else{
            s22=0; cout << "\t\t Wrong! \t Answer = Circulation Unit \n\n";

        }

          cout << "The library term for lending out books is ____________ \n";
         getline(cin,a23);
        for(int i=0;i<a23.length();i++){
            a23[i]=tolower(a23[i]);
        }
        if (a23.find("check") != string::npos && a23.find("out") != string::npos){
            s23 = 1; cout << "Correct! \n\n";
        }
        else{
            s23=0; cout << "\t\t Wrong! \t Answer = Check Out  \n\n";

        }

          cout << "The Library term for keeping transaction records is _______ \n";
         getline(cin,a24);
        for(int i=0;i<a24.length();i++){
            a24[i]=tolower(a24[i]);
        }
        if (a24.find("charge") != string::npos && a24.find("in") != string::npos){
            s24 = 1; cout << "Correct! \n\n";
        }
        else{
            s24=0; cout << "\t\t Wrong! \t Answer = Charge in \n\n";

        }

          cout << "Which unit sends overdue notices and imposes fine on overdue books \n";
         getline(cin,a25);
        for(int i=0;i<a25.length();i++){
            a25[i]=tolower(a25[i]);
        }
        if (a25.find("circula") != string::npos && a25.find("tion") != string::npos){
            s25 = 1; cout << "Correct! \n\n";
        }
        else{
            s25=0; cout << "\t\t Wrong! \t Answer = Circulation Unit  \n\n";

        }

          cout << "when certain books are out of print or are in constant demand by users but are in short supply then books will be kept in the __________ book section of the library  \n";
         getline(cin,a26);
        for(int i=0;i<a26.length();i++){
            a26[i]=tolower(a26[i]);
        }
        if (a26.find("v") != string::npos && a26.find("reser") != string::npos){
            s26 = 1; cout << "Correct! \n\n";
        }
        else{
            s26=0; cout << "\t\t Wrong! \t Answer = Reserved  \n\n";

        }
          cout << "______________ is responsible for the repair of damaged books \n";
         getline(cin,a27);
        for(int i=0;i<a27.length();i++){
            a27[i]=tolower(a27[i]);
        }
        if (a27.find("binde") != string::npos && a27.find("ry") != string::npos){
            s27 = 1; cout << "Correct! \n\n";
        }
        else{
            s27=0; cout << "\t\t Wrong! \t Answer = Bindery Units/Service \n\n";

        }

          cout << "The Federal University Of Technology Akure Library was established in _________ and became officially opened to students in ____________ \n";
         getline(cin,a28);
        for(int i=0;i<a28.length();i++){
            a28[i]=tolower(a28[i]);
        }
        if (a28.find("1982") != string::npos && a28.find("1983") != string::npos){
            s28 = 1; cout << "Correct! \n\n";
        }
        else{
            s28=0; cout << "\t\t Wrong! \t Answer = 1982, 1983  \n\n";

        }

          cout << "The temporary site of the library at Obakekere hosted the library until __________ and was permanently moved to the main campus of the university on __________ \n";
         getline(cin,a29);
        for(int i=0;i<a29.length();i++){
            a29[i]=tolower(a29[i]);
        }
        if (a29.find("march") != string::npos && a29.find("2006") != string::npos && a29.find("april") != string::npos){
            s29 = 1; cout << "Correct! \n\n";
        }
        else{
            s29=0; cout << "\t\t Wrong! \t Answer = March 2006, April 2006 \n\n";

        }

          cout << "List the division of university library FUTA: \n";
         getline(cin,a30);
        for(int i=0;i<a30.length();i++){
            a30[i]=tolower(a30[i]);
        }
        if (a30.find("administrative") != string::npos && a30.find("reader") != string::npos && a29.find("service") != string::npos && a29.find("technical") != string::npos && a29.find("collection") != string::npos && a29.find("development") != string::npos && a29.find("division") != string::npos){
            s30 = 1; cout << "Correct! \n\n";
        }
        else{
            s30=0; cout << "\t\t Wrong! \t Answer =\nAdministrative Division, Reader's Service Division, Technical Service Division, Collection Development Division   \n\n";

        }

          cout << "List the constituent of the Reader's Service Division: \n";
         getline(cin,a31);
        for(int i=0;i<a31.length();i++){
            a31[i]=tolower(a31[i]);
        }
        if (a31.find("circulation") != string::npos && a31.find("reference") != string::npos && (a29.find("porter") != string::npos || a29.find("security") != string::npos) && a29.find("bindery") != string::npos && a29.find("unit") != string::npos){
            s31 = 1; cout << "Correct! \n\n";
        }
        else{
            s31=0; cout << "\t\t Wrong! \t Answer =\nCirculation Unit, Reference Unit, Porter's/Security Unity & Bindery Unit \n\n";

        }

          cout << "The books in all the reading rooms in the library are shelved according to the arrangement of knowledge contained in the ______________ \n";
         getline(cin,a32);
        for(int i=0;i<a32.length();i++){
            a32[i]=tolower(a32[i]);
        }
        if (a32.find("library") != string::npos && a32.find("congress") != string::npos && a29.find("classification") != string::npos && a29.find("scheme") != string::npos){
            s32 = 1; cout << "Correct! \n\n";
        }
        else{
            s32=0; cout << "\t\t Wrong! \t Answer =  Library of Congress Classification Scheme \n\n";

        }

          cout << "List Three units on the Technical Service Division \n";
         getline(cin,a33);
        for(int i=0;i<a33.length();i++){
            a33[i]=tolower(a33[i]);
        }
        if (a33.find("catalogu") != string::npos && a33.find("classification") != string::npos && a33.find("serial") != string::npos && a33.find("multimedia") != string::npos && a33.find("unit") != string::npos){
            s33 = 1; cout << "Correct! \n\n";
        }
        else{
            s33=0; cout << "\t\t Wrong! \t Answer = Cataloguing and Classification Unit, Serial Unit & Multimedia Unit  \n";

        }
                cout << "\n\n";
            int tot = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16+s17+s18+s19+s20+s21+s22+s23+s24+s25+s26+s27+s28+s29+s30+s31+s32+s33;
            cout << "Total Score: " << tot;
cout << "\n\nNumber of Questions: " << "33 \n\n";

}

     void ICT(){

    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35;
     int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35;

     cout << "\n";
    getline(cin,a30);

             /*


        /////////////////////////////////////////////
        cout << " \n";
         getline(cin,ax/);
        for(int i=0;i<ax/.length();i++){
            ax/[i]=tolower(ax/[i]);
        }
        if (ax/.find("") != string::npos && ax/.find("") != string::npos){
            sx/ = 1; cout << "Correct! \n\n";
        }
        else{
            sx/=0; cout << "\t\t Wrong! \t Answer =  \n\n";

        }
        ////////


    */




         cout << "The Internet is a worldwide collection of computers made up of networks linked together by the ____________ \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("international") != string::npos && a1.find("telephone") != string::npos && a1.find("system") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = International Telephone System \n";

        }


        cout << "World Wide Web consist of computers that are linked to the Internet through the use of _____________\n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if ((a2.find("hypertext") != string::npos && a2.find("transfer") != string::npos && a2.find("protocol") != string::npos)|| a2.find("http") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Hypertext transfer Protocol  \n\n";

        }


        cout << "In 1983, ARPANET was split into two namely _________ and ________ \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("milnet") != string::npos && a3.find("arpanet") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = MINLNET, ARPANET  \n\n";

        }

         cout << "JANET is an Acronym for ________________ \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("joint academic") != string::npos && a4.find("network") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Joint Academic Network  \n\n";

        }

         cout << "URL means __________________ \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("uniform resource") != string::npos && a5.find("locator") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Uniform Resource Locator  \n\n";

        }

         cout << "List 5 other names Search engines are also called  \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("intelligent agent") != string::npos && a6.find("crawler") != string::npos && a6.find("worm") != string::npos && a6.find("spider") != string::npos && a6.find("robot") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Intelligent agent, Crawler, Worm, Spider or Robot  \n\n";

        }

         cout << "Search engines are the component of Internet's __________ \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("cata") != string::npos && a7.find("logu") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Catalogue  \n\n";

        }

         cout << "List the 4 biggest and most useful Search engines on the web currently \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("alta vista") != string::npos && a8.find("hotbot") != string::npos && a8.find("alltheweb") != string::npos && a8.find("google") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Alta Vista, Hotbot, Alltheweb, Google  \n\n";

        }

         cout << "__________ is the domain name or location of a person's e-mail account \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if (a9.find("user") != string::npos && a9.find("i") != string::npos && a9.find("d") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = User I.D  \n\n";

        }

        cout << "_________ is a website that regularly reflects the interests, opinion and personalities of writers or authors \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("b") != string::npos && a10.find("log") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Blog\n\n";

        }

cout <<  "\n\n\n";

int tot = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;

cout << "Total Score: " << tot;
cout << "\n\nNumber of Questions: " << "10 \n\n";


     }




int main(){
int x;
char k;
loop:
cout << "Choose Topic:\nEnter 1 for 'Information Literacy and Library Education in Nigeria'\nEnter 2 for 'The Library'\nEnter 3 for 'The Use of Information and Communication Technology' \n";
cin >> x;
if (x == k){
    cout << "Enter in figures and not in words please.\n";
    Sleep(5000);

           exit(EXIT_FAILURE);
}
if (x == 1){
    ILLE();
}
else if(x == 2){
Library();

}
else if (x == 3){

    ICT();
}
else
    cout << "Invalid Input!!!\nPlease Enter 1 or 2\n\n";
    goto loop;

return 0;
}
