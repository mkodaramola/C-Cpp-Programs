#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;




void LLC(){

    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30;
    unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30;

    cout << "\n\n\n";

        cout << "\t\t\tListening and lecture Comprehension \n\n";
 cout << "\n";
    getline(cin,a30);


    cout << " ________ is the ability to accurately receive and interpret messages in the communication process \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("listen") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Listening \n";

        }

        ////////////

        cout << "Hearing is the act of ___________ \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("apprehend") != string::npos || a2.find("aural") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Apprehending \n";

        }

        //////////////////

        cout << "Hearing is more or less a\an ___________  rather than a\an ___________ \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("experience") != string::npos && a3.find("activit") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Experience, Activity  \n";

        }

        ////////////////////////

        cout << "Listening is a\an ______________  \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("activit") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Activity  \n";

        }

        //////////////////////

        cout << "Listening is the aural counterpart of _________? \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("looking") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Looking  \n";

        }

        //////////////////

        cout << "Listen is a ____________ activity \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("purposeful") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Purposeful  \n";

        }

        //////////////////

        cout << "Listening is a\an ___________ process \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("active") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Active  \n";

        }

        //////////////////////

        cout << "What phrase is used to describe the process of being fully involved\n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("active") != string::npos && a8.find("listen") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer =Active Listening \n";

        }
        ////////////////

        cout << "Whenever you are listening to learn, what type of listening are you then engaged in? \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if (a9.find("information") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer =Informational Listening \n";

        }

        /////////////////////

        cout << "when ones goal is to evaluate and scrutinise what is been said, one is engaged in ___________ listening  \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("critical") != string::npos || a10.find("analyt") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Critical  \n";

        }

        //////////////////////

        cout << "Critical listening is __________ to critical reading \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("akin") != string::npos || a11.find("same") != string::npos || a11.find("simila") != string::npos || a11.find("tanta") != string::npos ){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Akin/Same \n";

        }
        /////////////////////////////

        cout << "Critical listening is about analysing _____________ and making ___________ \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("opinion") != string::npos && a12.find("judgment") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = Opinion, Judgment  \n";

        }
        /////////////////

        cout << "Students learn primarily by __________ \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("listening") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Listening  \n";

        }

        ////////////////////////
        cout << "Listening focus on the __________ and not the delivery\n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("content") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer =Content  \n";

        }

          cout << "Mention two methods of note taking that involves the use of diagrams \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("spidergram") != string::npos && a15.find("graphic") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Spidergram & Graphic methods  \n";

        }
        //////////////

          cout << "Which method of note taking involves the provision of systematic format for condensing and organising notes easily    \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("cornell") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Cornell  \n";

        }
        //////////////////

          cout << "_________ is a non-linear way of organising notes \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if (a17.find("spidergram") != string::npos){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Spidergram \n";

        }

          cout << "Highlight two shortcut tips: \n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if (a18.find("abbreviat") != string::npos && a18.find("colour") != string::npos){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = Abbreviation and Colour  \n";

        }




}





void WF1(){
      string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30;
    unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30;

    cout << "\n\n\n";
    cout << "\n";
    getline(cin,a30);

        cout << "\t\t\tWord Formation: Word and their constituent. \n\n";
  cout << "______ is the smallest unit of language \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("morph") != string::npos && a1.find("eme") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Morphemes  \n";

        }
        ///////////////////
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
            sx/=0; cout << "\t\t Wrong! \t Answer =  \n";

        }
        ////////


    */

        cout << "Morphemes are _____ ______ of words. \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("building") != string::npos && a2.find("block") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Building Blocks  \n";

        }

            cout << "How many Morphemes has the word Demagnetization? \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("4") != string::npos || a3.find("four") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Four (4)  \n";

        }

            cout << "\n_________ is a method of word building where the initial letters of commonly used phrases come to stand for or represent the whole phrase and signifies what the whole phrase means and also involves new word being spelt individually.\n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("alpha") != string::npos && a4.find("betism") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Alphabetism  \n";

        }
        //////////////////////////
            cout << "________ is also formed from the initials letters of commonly used phrases but the resulting string is pronounced as a word. \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("acro") != string::npos && a5.find("nymy") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Acronymy  \n";

        }

             cout << "In which method of words formation are syllables of word cut off  and joined to other words to form new words  \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("clipping") != string::npos && a6.find("bending") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Clipping and Bending  \n";

        }

             cout << "'SOS' is an example of what type of word formation? \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("betism") != string::npos && a7.find("alpha") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Alphabetism  \n";

        }

             cout << "What is the full meaning of OCR? \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("optical") != string::npos && a8.find("character") != string::npos && (a8.find("recogni") != string::npos || a8.find("reader") != string::npos) ){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Optical Character Recognition/Reader \n";

        }

             cout << "The word 'Blogging' was form by clipping and bending which two words? \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if (a9.find("web") != string::npos && a9.find("logging") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Web & Logging \n";

        }

         cout << "What is the full meaning of SQUID? \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("superconducting quantum") != string::npos && a10.find("interference") != string::npos && (a10.find("device") != string::npos || a8.find("reader") != string::npos) ){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Superconducting Quantum Interference Device \n";

        }




             cout << "A method of word formation where bound morphemes are added to free morphemes or already existing words is called ____ \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("affix") != string::npos && a11.find("tion") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Affixation \n";

        }

           cout << "Bound morphemes are called _______ \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("aff") != string::npos && a12.find("ixes") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = Affixes  \n";

        }

          cout << "Affixes classify by grammatical functions may be ________ or __________ \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("inflectional") != string::npos && a13.find("derivational") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Inflectional or Derivational  \n";

        }

          cout << "Which of the type of affixes based on their grammatical functions does not change the meaning or grammatical class of the word \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("inflec") != string::npos && a14.find("tion") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Inflectional affixes  \n";

        }

          cout << "The Adjective 'Softest' is an example of which class of Affixes  \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("inflec") != string::npos && a15.find("tion") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Inflectional Affixes \n";

        }

          cout << "-ward is a suffix which of the part of speech? \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("ad") != string::npos && a16.find("verb") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer =Adverb  \n";

        }

          cout << "-wise is a suffix of which of the part of speech? \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if (a17.find("ad") != string::npos && a17.find("verb") != string::npos){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Adverb  \n";

        }

          cout << "im- is a prefix of which of the part of speech?   \n" ;
         getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if (a19.find("adje") != string::npos && a19.find("ctiv") != string::npos){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Adjective  \n";

        }
        cout << "_________ is the joining of two or more morpheme to form one word\n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if (a18.find("comp") != string::npos && a18.find("ound") != string::npos){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = compounding  \n";

        }
    Sleep(2000);




}

void GSnTM(){
   string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30;
    unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30;

    cout << "\n\n";

        cout << "\t\t\tGoal Setting and Time Management \n\n";
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
            sx/=0; cout << "\t\t Wrong! \t Answer =  \n";

        }
        ////////


    */

                  cout << "Goal setting gives you a long term _______ and a short term ____________ \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("vision") != string::npos && a1.find("motivation") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Vision and Motivation  \n";

        }

        /////////////////////

          cout << "What does the abbreviation 'SMART' in SMART goal represent: \nS - _______\nM - _______\nA - ________\nR - ________\nT - __________  \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("specific") != string::npos && a2.find("measurable") != string::npos  && a2.find("appropriate") != string::npos  && a2.find("realistic") != string::npos  && a2.find("time") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Specific, Measurable, Appropriate, Realistic and Time bound  \n";

        }
        //////////////////
         cout << "Time is ________, _________ and ____________ \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("limited") != string::npos && a3.find("invest") != string::npos && a3.find("non") != string::npos && a3.find("renew") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer =Limited, Investible and Non-renewable  \n";

        }
        ////////////////////////

         cout << "_____________ is an essential skill in modern world where several activities have to be crammed into each day \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("time") != string::npos && a4.find("management") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Time Management  \n";

        }

         cout << "Highlight Three Time Management devices \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("table") != string::npos && a5.find("organi") != string::npos && a5.find("piece")){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Timetable, Organiser and Timepiece  \n";

        }
        //////////////////////////

         cout << "In the principle of time management, you are expected to think _______ and not quantity of time \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("qual") != string::npos && a6.find("ity") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Quality  \n";

        }
        //////////////////
         cout << "According to the priciple of time management, set ______ and establish _______  early \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("goals") != string::npos && a7.find("prior") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Goals and priorities \n";

        }
        //////////////////
         cout << "Put all ________ tasks on your timtable \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("rec") != string::npos && a8.find("urring") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Recurring  \n";

        }
        ///////////////////
         cout << "Which of the following is not a strategy for time management.\n(A) Time-tabling (B) Casting of lots(C) Making a To-do list (D) Prioritization (E) Time Budgeting\n  ";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if (a9 == "b" || a9 == "B"){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = (B)  \n";

        }
         cout << "A ranking or ordering of things according to their importance or urgency is called _________ \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("prioriti") != string::npos && a10.find("ation") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Prioritization  \n";

        }

        ////////////////////////
         cout << "Highlight Three things you should account on your timetable \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("personal") != string::npos && a11.find("study") != string::npos && a11.find("time")!= string::npos && a11.find("cycle") != string::npos && a11.find("manage") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer =1. Personal daily cycle\n2. Study Cycle\n3. Time management plan  \n";

        }
        //////////////
         cout << "Highlight in five key words what your time table should not be: \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("distraction") != string::npos && a12.find("impress") != string::npos && a12.find("scanty") != string::npos && a12.find("detail") != string::npos && (a12.find("too") != string::npos || a12.find("over") != string::npos) && (a12.find("ignore") != string::npos || a12.find("neglect") != string::npos)){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer =(1) too detail (2) too scanty (3) made to impress (4)  distraction (5) ignore any subject or major activities  \n";

        }
        ////////////////////

         cout << "Time-table should be adaptable in response to __________ \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("exige") != string::npos && a16.find("nc") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Exigencies  \n";

        }
        ///////////////////////////

         cout << "Solutions to personal problems in time management includes(Mention 3):  \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("priorities") != string::npos && a13.find("organi") != string::npos && a13.find("leisure") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer =\n1. Set priorities\n2. Be organized\n3. Spend some time on leisure \n";

        }

        /////////////////////

         cout << "Mention 3 solution to psychological problem in time management \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("discipline") != string::npos && a14.find("no") != string::npos && a14.find("work") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer =\n1. Have self discipline\n2. Learn to say 'No'  when necessary\n3. Believe in team work\n4. Have a watch on the work entrusted  \n";

        }

        /////////////////////
         cout << "Which of the following should a realistic time-table not be __________ (A) pragmatic (B) a guide/tool (C) a reflection of your personality in content and design (D) accountable for all your  courses (E) ignore activity(sport,social, religion)  \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("e") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = (E)  \n";

        }

}

void Main(){
	int x;
cout << "Enter 1 for Listening and lecture comprehension,Enter 2 for Word formation1: Word and its Constituents, Enter 3 for Goal Setting and Time management \n";
cin >> x;

 if (x == 1){
    LLC();
 }
 else if (x == 2){
    WF1();
 }
 else if (x==3){
    GSnTM();
 }
 else
    cout << "Invalid Input!\n";
}





   int main(){

char rstr[128] = "readme.txt";

	char ch;	
	static int n;
	int i=0;	
	ifstream ifile("readme.txt");
		if (ifile.fail()){
			exit(EXIT_FAILURE);
		}
	
	while(!ifile.eof()){
		ifile.get(ch);
		n = ch;

	}	
	

	
		
n = (n-48);	
		
	ofstream ofile("readme.txt");
	
	ofile <<n+1;
	
	ofile.close();

		

	if (n < 3){
		Main();
	}
	
	else {
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\tLicence Expired!!!\n\n\n\n\n\n\n\n\n\n\n\n\n";
		
	}
		

system("pause");

   return 0;
   }

