#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

void C1(){


    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35;
     int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35;


        system("cls");


        cout << "\n\n\n";

        cout << "\t\t Introduction to Philosophy \n\n";
 cout << "\n";
    getline(cin,a30);


    cout << "\nThe basic truth is that all human beings are ___________ \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("thinker") != string::npos || a1.find("philosopher") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Thinkers | Philosophy (13) \n";

        }
        
        

        /////////////////////
        cout << "\nWhich of the following is not a branch of Philosophy (19)\n (A) Ethics (B) Logic (C) Experimentation (D) Metaphysics (E) Aesthetic \n";
         getline(cin,a31);
        for(int i=0;i<a31.length();i++){
            a31[i]=tolower(a31[i]);
        }
        if (a31.find("c") != string::npos || a31.find("C") != string::npos){
            s31 = 1; cout << "Correct! \n\n";
        }
        else{
            s31=0; cout << "\t\t Wrong! \t Answer = C  \n\n";

        }


          cout << "\n_______ is an essential component in the technological training of the mind and the body in order to make man and his environment productive and liveable\n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("philosophy") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Philosophy (13)\n";

        }

        cout << "\nAs ________ being, we are to know the fundamental, ultimate beginning, end and value of all things. \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("rational") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Rational (13)  \n";

        }

          cout << "\nAccording to Armstrong, what is Philosophy in the ancient world? \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("natur") != string::npos && a6.find("search") != string::npos && a6.find("universe") != string::npos && a6.find("man") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = is generally the attempt to search after the nature of the universe and of man. (14)\n";

        }

          cout << "\nThose who engage themselves in meditation and contemplation defines Philosophy as _______ \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("reflective") != string::npos && a7.find("activit") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = a reflective activity (14) \n";

        }

          cout << "\nPhilosophy is the rational search for answers to the questions that arise in the mind when we reflect on __________  \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if ((a8.find("human") != string::npos && a8.find("experience") != string::npos)||a8.find("reality") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Human Experiences  \n";

        }

          cout << "\nAs  technologist, we reason for _______  \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if (a9.find("solution") != string::npos || a9.find("answer") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Solution  \n\n";

        }

          cout << "Philosophy coupled with technology is called: \n\n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("philosophy") != string::npos && a10.find("technology") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Philosophy of technology  \n\n";

        }


          cout << "Philosophy in the area of technology means _______ _______ in order to generate workable and appropriate solutions to our problems \n\n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("critical") != string::npos && a11.find("reflection") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Critical reflection  \n";

        }

          cout << "Good ethical orientation ---> ________ \n\n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("positive") != string::npos && a12.find("productive") != string::npos && a12.find("idea") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = Positive and Productive ideas  \n";

        }

             cout << "Positive and Productive ideas ---> ______\n\n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if ((a13.find("community") != string::npos || a12.find("cultural") != string::npos) && a13.find("transformation") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Community and cultural transformation  \n";

        }

          cout << "Cultural transformation ---> \n\n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("discoveries") != string::npos && a14.find("invention") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Discoveries and Inventions  \n\n";

        }

          cout << "Discoveries and Continuous invention ---> \n\n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("technolog") != string::npos && a15.find("transformation") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Technological Transformation  \n\n";

        }

          cout << "Our early men and women are first and foremost _______ and _______ \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("philosopher") != string::npos && a16.find("technologist") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Philosopher and Technologist\n \n";

        }

         cout << "The reflective activity of our early men and women gave rise to what is known as ______ and _____ \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if ((a17.find("stone age") != string::npos && a17.find("fire") != string::npos)){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Stone Age and the invention of Fire \n\n";

        }


         cout << "Philosophy of culture is the philosophy of _______ \n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if ((a18.find("li") != string::npos && a18.find("fe") != string::npos)){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = Life \n\n";
        }



            cout << "What type of philosophy embraces life problems, joys, setbacks, and development, sorrow and happiness? \n";
         getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if ((a19.find("philosophy") != string::npos && a19.find("culture") != string::npos)){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Philosophy of Culture \n\n";

        }


            cout << "Philosophy belonging to the rationality of man, his thinking ability and reasoning faculty is called _________ \n";
         getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if ((a20.find("scien") != string::npos && a20.find("philosophy") != string::npos)){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer = Scientific Philosophy/Philosophy of Science \n\n";

        }


            cout << "The name Plato, Aristotle and Aquinas called Philosophy of science is _______ \n";
         getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if ((a21.find("science ") != string::npos && a21.find("of sciences") != string::npos)){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = Science of Sciences \n\n";

        }

            cout << "Philosophy ________ rely on experiment. (does, does not, strongly, partially) \n";
         getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if ((a21.find("does") != string::npos && a21.find("not") != string::npos)){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = 'does not' \n\n";
        }



            cout << "Philosophy as science begins with ________ \n";
         getline(cin,a22);
        for(int i=0;i<a22.length();i++){
            a22[i]=tolower(a22[i]);
        }
        if ((a22.find("human") != string::npos && a22.find("consciousness") != string::npos)){
            s22 = 1; cout << "Correct! \n\n";
        }
        else{
            s22=0; cout << "\t\t Wrong! \t Answer = Human consciousness \n\n";

        }



        cout << "Philosophy does its seeking, searching, questioning and enquiries for knowledge in an ________ manner \n";
         getline(cin,a23);
        for(int i=0;i<a23.length();i++){
            a23[i]=tolower(a23[i]);
        }
        if ((a23.find("epistemolog") != string::npos && a23.find("ical") != string::npos)){
            s23 = 1; cout << "Correct! \n\n";
        }
        else{
            s23=0; cout << "\t\t Wrong! \t Answer = Epistemological\n\n";

        }


        cout << "______ is the process by which one seek to know. \n";
         getline(cin,a24);
        for(int i=0;i<a24.length();i++){
            a24[i]=tolower(a24[i]);
        }
        if ((a24.find("episte") != string::npos && a24.find("mology") != string::npos)){
            s24 = 1; cout << "Correct! \n\n";
        }
        else{
            s24=0; cout << "\t\t Wrong! \t Answer = Epistemology \n\n";

        }



        cout << "Philosophy engages in epistemological process by ______ \n";
         getline(cin,a25);
        for(int i=0;i<a25.length();i++){
            a25[i]=tolower(a25[i]);
        }
        if ((a25.find("reason") != string::npos && a25.find("ing") != string::npos)){
            s25 = 1; cout << "Correct! \n\n";
        }
        else{
            s25=0; cout << "\t\t Wrong! \t Answer = Reasoning (19)\n\n";

        }



        cout << "The reasoning process is called ______ \n";
         getline(cin,a26);
        for(int i=0;i<a26.length();i++){
            a26[i]=tolower(a26[i]);
        }
        if ((a26.find("lo") != string::npos && a26.find("gic") != string::npos)){
            s26 = 1; cout << "Correct! \n\n";
        }
        else{
            s26=0; cout << "\t\t Wrong! \t Answer = Logic \n\n";

        }



        cout << "The study of goodness and ills in human action is called ________ \n";
         getline(cin,a27);
        for(int i=0;i<a27.length();i++){
            a27[i]=tolower(a27[i]);
        }
        if ((a27.find("eth") != string::npos && a27.find("ics") != string::npos)){
            s27 = 1; cout << "Correct! \n\n";
        }
        else{
            s27=0; cout << "\t\t Wrong! \t Answer = Ethics \n\n";

        }



        cout << "The study of ethics is concerned with the _____________ \n";
         getline(cin,a28);
        for(int i=0;i<a28.length();i++){
            a28[i]=tolower(a28[i]);
        }
        if ((a28.find("beauty") != string::npos && a28.find("nature") != string::npos)){
            s28 = 1; cout << "Correct! \n\n";
        }
        else{
            s28=0; cout << "\t\t Wrong! \t Answer = Beauty of Nature \n\n";

        }



        cout << "The beauty of nature manifest itself in the  ________ and _________ that exist among humans\n";
         getline(cin,a29);
        for(int i=0;i<a29.length();i++){
            a29[i]=tolower(a29[i]);
        }
        if ((a29.find("health") != string::npos && a29.find("mutual") != string::npos)){
            s29 = 1; cout << "Correct! \n\n";
        }
        else{
            s29=0; cout << "\t\t Wrong! \t Answer = healthy and mutual \n\n";
        }

  int tot = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16+s17+s18+s19+s20+s21+s22+s23+s24+s25+s26+s27+s28+s29+s31;


        cout << "\n\n\nTotal = " << tot << " of 30\n\n";

}





void C2(){


    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40;
    unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35,s36,s37,s38,s39,s40;

        cout << "\n\n\n";
        system("cls");

        cout << "\t\t\tPhilosophy as a Rational Inquiry\n\n";
 cout << "\n";
    getline(cin,a30);


        /*

            cout << " \n";
         getline(cin,a\.);
        for(int i=0;i<a\..length();i++){
            a\.[i]=tolower(a\.[i]);
        }
        if ((a\..find("") != string::npos && a\..find("") != string::npos)){
            s\. = 1; cout << "Correct! \n\n";
        }
        else{
            s\.=0; cout << "\t\t Wrong! \t Answer = \n\n";

        }





        */


            cout << "Any rational inquiry is a _______ \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if ((a1.find("problem") != string::npos && a1.find("solving") != string::npos && a1.find("activity") != string::npos)){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Problem Solving Activity. \n\n";

        }




            cout << "Inquiry is usually stimulated by ______ \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if ((a2.find("dou") != string::npos && a2.find("bt") != string::npos)){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Doubt \n\n";

        }




            cout << "An inquiry ends as soon as we arrive at a ________ \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if ((a3.find("bel") != string::npos && a3.find("ief") != string::npos)){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Belief\n\n";

        }




            cout << "List the 3 nature of philosophical problems \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if ((a4.find("general") != string::npos && a4.find("fundamental") != string::npos && a4.find("abstract") != string::npos)){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer =They are:\n\t\t (1) General in nature\n\t\t (2) Fundamental problems\n\t\t (3) Abstract in nature \n\n";

        }




            cout << "The connection between philosophy and life is easily missed because philosophy is __________ \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if ((a5.find("abstract") != string::npos && a5.find("nature") != string::npos)){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Abstract in nature\n\n";

        }




            cout << "List the 3 approach to philosophical problems \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
    if ((a6.find("critical thinking") != string::npos && a6.find("conceptual analysis") != string::npos  && a6.find("reconstruction of idea") != string::npos)){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer =\n\t\t (1) Critical thinking\n\t\t (2) Conceptual Analysis\n\t\t (3) Reconstruction of Ideas \n\n";

        }




            cout << "The activity of critical thinking is an exercise in _____________ \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if ((a7.find("philosophical") != string::npos && a7.find("detection") != string::npos)){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Philosophical detection \n\n";

        }




            cout << "Human thinking is impossible without the use of _________ \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if ((a8.find("con") != string::npos && a8.find("cepts") != string::npos)){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Concepts \n\n";

        }




            cout << "Conceptual analysis is not just a question of words, but also a question of ______ \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if ((a9.find("wor") != string::npos && a9.find("th") != string::npos)){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Worth\n\n";

        }



cout << "Philosophical inquiry is not a (A) Conceptual activity (B) Critical activity (C) trivial activity (D) Logical activity \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("c") != string::npos || a10.find("C") != string::npos || a10.find("trivial") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = (C) \n\n";

        }


        cout << "Which of the following is not a problem of philosophy. The problem of  (A) nature of the human person, particularly first-person pronoun \"I\" (B) of Deduction (C) the basis of moral obligation (D) of nature and structure of reality \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("b") != string::npos || a11.find("B") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = (B)     Note -> Deduction is not a problem but INDUCTION (24) \n\n";

        }







            int tot = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11;
            cout << "Total Score: " << tot;
cout << "\n\nNumber of Questions: " << "11 \n\n";

}

     void C3(){

    string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35;
     int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35;

        system("cls");

         cout << "\t\t\tBranch of Philosophy\n\n";

     cout << "\n";
    getline(cin,a30);

             /*


        /////////////////////////////////////////////
        cout << " \n";
         getline(cin,ax/);
        for(int i=0;i<ax/.length();i++){
            ax/[i]=tolower(ax/[i]);
        }
        if ((ax/.find("") != string::npos && ax/.find("") != string::npos)){
            sx/ = 1; cout << "Correct! \n\n";
        }
        else{
            sx/=0; cout << "\t\t Wrong! \t Answer =  \n\n";

        }
        ////////


    */

    cout << "Logic is seen as a _______ rather than a Branch \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if ((a1.find("to") != string::npos && a1.find("ol") != string::npos)){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Tool \n\n";

        }


        cout << "_______ is concerned with the nature and scope of knowledge. \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if ((a2.find("epis") != string::npos && a2.find("temology") != string::npos)){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Epistemology \n\n";

        }


        cout << "'Episteme' is a greek word which means: \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if ((a3.find("know") != string::npos && a3.find("ledge") != string::npos)){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Knowledge \n\n";

        }


        cout << "An attempt was made by Plato and Theodorus to define knowledge in a dialogue entitled:  \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if ((a4.find("thea") != string::npos && a4.find("tetus") != string::npos)){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Theatetus \n\n";

        }


        cout << "Plato and Theodorus defined Knowledge as _________ \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if ((a5.find("true") != string::npos && a5.find("opinion") != string::npos)){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = True opinion \n\n";

        }


        cout << "For Plato, what is the FIRST condition for the claim that X knows that P: \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if ((a6.find("must") != string::npos && a6.find("be") != string::npos) && a6.find("p") != string::npos && a6.find("true") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = P must be true \n\n";

        }


        cout << "According to Plato, what is the SECOND condition for the claim that X knows that P: \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if ((a7.find("x") != string::npos && a7.find("believe") != string::npos  && a7.find("p") != string::npos  && a7.find("true") != string::npos)){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = X must believe that P is true \n\n";

        }


        cout << "According to Plato, what is the THIRD condition for the claim that X knows that P: \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a7.find("x") != string::npos && a7.find("justified") != string::npos  && a7.find("p") != string::npos  && a7.find("must") != string::npos && a7.find("believ") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = X must be justified in believing that P \n\n";

        }


        cout << "JTB is an abbreviation that means: \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if ((a9.find("justified") != string::npos && a9.find("true") != string::npos && a9.find("belief") != string::npos)){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Justified True Belief \n\n";

        }


        cout << "Relativism is a form of __________ \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if ((a10.find("skepti") != string::npos && a10.find("cism") != string::npos)){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Skepticism \n\n";

        }


        cout << "In response to the certainty of knowledge, what school of thought holds that we ought not to claim knowledge unless there is no possibility of our being wrong.\n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if ((a11.find("skep") != string::npos && a11.find("ticism") != string::npos)){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Skepticism \n\n";

        }


        cout << "________ denies that truth is objective and universal, therefore relative. \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if ((a12.find("rela") != string::npos && a12.find("tivism") != string::npos)){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = Relativism \n\n";

        }


        cout << "'Meta' means: \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if ((a13.find("af") != string::npos && a13.find("ter") != string::npos)){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = After \n\n";

        }


        cout << "'physika' means: \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if ((a14.find("nat") != string::npos && a14.find("ure") != string::npos)){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Nature \n\n";

        }


          cout << "The word Metaphysics didn't originate from Aristotle but by his editor named ________ \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if ((a15.find("adronicles") != string::npos && a15.find("rhode") != string::npos)){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Adronicles of Rhode \n\n";

        }



          cout << "________ is the science of being qua being \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if ((a16.find("meta") != string::npos && a16.find("physics") != string::npos)){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Metaphysics \n\n";

        }


          cout << "_________ is the Search for reality \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if ((a17.find("meta") != string::npos && a17.find("phy") != string::npos)){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Metaphysics  \n\n";

        }



          cout << "The concept of Metaphysics include the following except\t (A) Existence (B) Things (C) Property (D) Event (E) Beauty of nature  \n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if ((a18.find("e") != string::npos || a18.find("E") != string::npos || a18.find("beauty of nature") != string::npos)){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = (E) \n\n";

        }


          cout << "Metaphysics is classified into two different school namely: _________ and ________ \n";
         getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if ((a19.find("idealism") != string::npos && a19.find("materialism") != string::npos)){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Idealism and Materialism \n\n";

        }

          cout << "________ is the doctrine that reality is made up of immaterial substance \n";
         getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if ((a20.find("idea") != string::npos && a20.find("lism") != string::npos)){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer = Idealism \n\n";

        }


         cout << "In the Idealist's view, the \"eternal world\" is a product of the _________ \n";
         getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if ((a21.find("mi") != string::npos && a21.find("nd") != string::npos)){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = mind \n\n";

        }


         cout << "Which of the following Philosopher is  Logical Positivist\t(A)George Berkeley (B) David Hume (C) Rene Descartes (D) Plato \n";
         getline(cin,a22);
        for(int i=0;i<a22.length();i++){
            a22[i]=tolower(a22[i]);
        }
        if ((a22.find("david") != string::npos || a22.find("b") != string::npos)){
            s22 = 1; cout << "Correct! \n\n";
        }
        else{
            s22=0; cout << "\t\t Wrong! \t Answer = (B) \n\n";

        }

         cout << "Rene Descartes is a ________ (A) logical positivist (B) Idealist (C) Materialist (D) skeptist\n";
         getline(cin,a27);
        for(int i=0;i<a27.length();i++){
            a27[i]=tolower(a27[i]);
        }
        if ((a27.find("ideal") != string::npos || a27 == "b")){
            s25 = 1; cout << "Correct! \n\n";
        }
        else{
            s27=0; cout << "\t\t Wrong! \t Answer = (B) \n\n";

        }


         cout << "_________ is the reality that tend to reduces all matter. \n";
         getline(cin,a23);
        for(int i=0;i<a23.length();i++){
            a23[i]=tolower(a23[i]);
        }
        if ((a23.find("mater") != string::npos && a23.find("ialism") != string::npos)){
            s23 = 1; cout << "Correct! \n\n";
        }
        else{
            s23=0; cout << "\t\t Wrong! \t Answer = Materialism \n\n";

        }


         cout << "The physical movements that occurs in the brain are called ______ \n";
         getline(cin,a24);
        for(int i=0;i<a24.length();i++){
            a24[i]=tolower(a24[i]);
        }
        if ((a24.find("thoug") != string::npos && a24.find("ht") != string::npos)){
            s24 = 1; cout << "Correct! \n\n";
        }
        else{
            s24=0; cout << "\t\t Wrong! \t Answer = Thought \n\n";

        }



         cout << " Thomas Hobbes is a ________ (A) logical positivist (B) Idealist (C) Materialist (D) skeptist\n";
         getline(cin,a25);
        for(int i=0;i<a25.length();i++){
            a25[i]=tolower(a25[i]);
        }
        if ((a25.find("material") != string::npos || a25 == "c")){
            s25 = 1; cout << "Correct! \n\n";
        }
        else{
            s25=0; cout << "\t\t Wrong! \t Answer = (C) \n\n";

        }

         cout << "A.J Ayer is a ________ (A) logical positivist (B) Idealist (C) Materialist (D) skeptist\n";
         getline(cin,a26);
        for(int i=0;i<a26.length();i++){
            a26[i]=tolower(a26[i]);
        }
        if ((a26.find("positiv") != string::npos || a26 == "a")){
            s26 = 1; cout << "Correct! \n\n";
        }
        else{
            s26=0; cout << "\t\t Wrong! \t Answer = (A) \n\n";

        }



         cout << "David Hume asserted that the statements of metaphysical are useless because they are not __________ \n";
         getline(cin,a28);
        for(int i=0;i<a28.length();i++){
            a28[i]=tolower(a28[i]);
        }
        if ((a28.find("cogn") != string::npos && a28.find("itive") != string::npos)){
            s28 = 1; cout << "Correct! \n\n";
        }
        else{
            s28=0; cout << "\t\t Wrong! \t Answer = Cognitive \n\n";
        }


         cout << "______ deals with how man should conduct himself in the society \n";
         getline(cin,a29);
        for(int i=0;i<a29.length();i++){
            a29[i]=tolower(a29[i]);
        }
        if ((a29.find("eth") != string::npos && a29.find("ics") != string::npos)){
            s29 = 1; cout << "Correct! \n\n";
        }
        else{
            s29=0; cout << "\t\t Wrong! \t Answer = Ethics \n\n";

        }


         cout << "Two aspect can be identified within the field of Ethics namely:  \n";
         getline(cin,a30);
        for(int i=0;i<a30.length();i++){
            a30[i]=tolower(a30[i]);
        }
        if ((a30.find("normative") != string::npos && a30.find("meta") != string::npos && a30.find("ethics") != string::npos)){
            s30 = 1; cout << "Correct! \n\n";
        }
        else{
            s30=0; cout << "\t\t Wrong! \t Answer = Normative ethics and Meta-ethics \n\n";

        }


         cout << "________ is the attempt to examine questions about the meaning of moral concepts \n";
         getline(cin,a31);
        for(int i=0;i<a31.length();i++){
            a31[i]=tolower(a31[i]);
        }
        if ((a31.find("meta") != string::npos && a31.find("ethics") != string::npos)){
            s31 = 1; cout << "Correct! \n\n";
        }
        else{
            s31=0; cout << "\t\t Wrong! \t Answer = Meta-ethics \n\n";

        }

        cout << "_______ is the attempt to make moral judgement about what is right or wrong. \n";
         getline(cin,a32);
        for(int i=0;i<a32.length();i++){
            a32[i]=tolower(a32[i]);
        }
        if ((a32.find("normative") != string::npos && a32.find("ethics") != string::npos)){
            s32 = 1; cout << "Correct! \n\n";
        }
        else{
            s32=0; cout << "\t\t Wrong! \t Answer = Normative ethics \n\n";

        }






cout <<  "\n\n\n";

int tot = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;

cout << "Total Score: " << tot;
cout << "\n\nNumber of Questions: " << "10 \n\n";

     }

 void C4(){


     string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35;
     int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35;

        system("cls");

         cout << "\t\tMethods of Philosophy\n\n";

     cout << "\n";
    getline(cin,a30);

             /*


        /////////////////////////////////////////////
        cout << " \n";
         getline(cin,ax/);
        for(int i=0;i<ax/.length();i++){
            ax/[i]=tolower(ax/[i]);
        }
        if ((ax/.find("") != string::npos && ax/.find("") != string::npos)){
            sx/ = 1; cout << "Correct! \n\n";
        }
        else{
            sx/=0; cout << "\t\t Wrong! \t Answer =  \n\n";

        }
        ////////


*/




 cout << "________ method of philosophy applies the art of debate by means of questions and answers \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if ((a1.find("") != string::npos && a1.find("") != string::npos)){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer =  \n\n";

    }



         cout << " \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if ((a2.find("") != string::npos && a2.find("") != string::npos)){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer =  \n\n";

        }


         cout << "_______ was one of the major criticiser of the Socratics method which suppose that knowledge is inborn \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if ((a3.find("john") != string::npos && a3.find("locke") != string::npos)){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = John Locke \n\n";

        }


         cout << "John Locke believes that the mind of man is a ____________  \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if ((a4.find("tabula") != string::npos && a4.find("raza") != string::npos) || a4.find("clean state") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Tabularaza \n\n";

        }


         cout << "Tabularaza means:  \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if ((a5.find("clean") != string::npos && a5.find("state") != string::npos)){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Clean State \n\n";

        }


         cout << "The Deductive method was introduced by _______ \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if ((a6.find("arist") != string::npos && a6.find("totle") != string::npos)){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Aristotle \n\n";

        }


          cout << "____________ method goes through the process of syllogism(premises & conclusion) \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if ((a7.find("deduct") != string::npos && a7.find("ive") != string::npos)){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Deductive Method \n\n";

        }



          cout << "In __________ method of philosophy, conclusions are drawn from premises which are believed to be true.  \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if ((a8.find("induc") != string::npos && a8.find("tive") != string::npos)){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Inductive method \n\n";

        }




          cout << "The method of Induction leads its users to the fallacy of hasty __________ \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if ((a9.find("generali") != string::npos && a9.find("ation") != string::npos)){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Generalization \n\n";

        }

              cout << "_________ method opined that truth is subjective \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if ((a11.find("existen") != string::npos && a11.find("tialist") != string::npos)){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Existentialist Method \n\n";

        }


          cout << "Existentialism was adopted and applied widely by ___________ who is considered is the FATHER OF EXISTENTIALISM\n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if ((a10.find("soren") != string::npos && a10.find("kierkegaard") != string::npos)){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Soren Kierkegaard \n\n";

        }






          cout << "Logical Positivists are also called:  \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if ((a13.find("vienna") != string::npos && a13.find("circle") != string::npos)){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Vienna Circle \n\n";

        }






        cout << "________ method is the oldest method of philosophy. \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if ((a14.find("socra") != string::npos && a14.find("tic") != string::npos)){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Socratic \n\n";

        }

        cout << "______ method has been criticised because it denies philosophy the opportunity to offering new knowledge or serving as a guide to action.  \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if ((a15.find("analy") != string::npos && a15.find("tical") != string::npos)){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Analytical \n\n";

        }



         cout << "______ method involves the intellectual observation of a given object.\n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if ((a16.find("phenomeno") != string::npos && a16.find("logical") != string::npos)){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Phenomenological Method \n\n";

        }



         cout << "_______ method presupposes that knowledge is inborn \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if ((a17.find("socra") != string::npos && a17.find("tic") != string::npos)){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Socratic Method \n\n";

        }



         cout << "______ method is based on intuition \n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if ((a18.find("phenomeno") != string::npos && a18.find("logical") != string::npos)){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = Phenomenological \n\n";

        }



         cout << "Who in his philosophical inquiry always insists that he is not a teacher.\n";
         getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if ((a19.find("socra") != string::npos && a19.find("tes") != string::npos)){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Socrates \n\n";
        }




         cout << "_______ method is said to be presuppositionless method\n";
         getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if ((a20.find("phenomeno") != string::npos && a20.find("logical") != string::npos)){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer = Phenomenological \n\n";

        }


          cout << "In Phenomenological method, attention is concentrated on a given object called _______ \n";
         getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if ((a21.find("phenome") != string::npos && a21.find("non") != string::npos)){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = Phenomenon \n\n";

        }




/*
          cout << " \n";
         getline(cin,ax/);
        for(int i=0;i<ax/.length();i++){
            ax/[i]=tolower(ax/[i]);
        }
        if ((ax/.find("") != string::npos && ax/.find("") != string::npos)){
            sx/ = 1; cout << "Correct! \n\n";
        }
        else{
            sx/=0; cout << "\t\t Wrong! \t Answer =  \n\n";

        }

*/

 }

 void C5(){


     string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35;
     int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35;

	        system("cls");

         cout << "\t\tMethods of Philosophy\n\n";

     cout << "\n";
    getline(cin,a30);


          cout << "______ holds that pleasure in intrinsically good.\n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if ((a1.find("hedo") != string::npos && a1.find("nism") != string::npos)){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Hedonism \n\n";

        }



          cout << "Mention to aspect of pleasure: \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if ((a2.find("momentary") != string::npos || a2.find("sensual") != string::npos) && a2.find("superior") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Momentary/Sensual pleasure and Superior pleasure \n\n";

        }



          cout << "Intellectual ecstasy is an example of what aspect of Hedonism? \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if ((a3.find("superi") != string::npos && a3.find("or") != string::npos)){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Superior please \n\n";

        }



          cout << "J.S Mill is only concerned with _________ pleasure \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if ((a4.find("men") != string::npos && a4.find("tal") != string::npos)){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Mental \n\n";

        }



          cout << "To Democritus, ________ is the highest good. \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if ((a5.find("de") != string::npos && a5.find("light") != string::npos)){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Delight \n\n";

        }



          cout << "Unperturbed temper of mind can be attained through __________________ \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if ((a6.find("moderation") != string::npos && a6.find("desire") != string::npos)){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Moderation of desire \n\n";

        }



          cout << "To _________, supreme good is the present pleasure of the body \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if ((a7.find("aristo") != string::npos && a7.find("pus") != string::npos)){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Aristopus \n\n";

        }



          cout << "A hedonist that looks into action themselves to see one that will produce more pleasure over pain is called a __________ \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if ((a8.find("deonto") != string::npos && a8.find("logist") != string::npos)){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Deontologist \n\n";

        }



          cout << "A hedonist that merely looks forward for the achievement of a certain end(i.e pleasure) is called _______  \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if ((a9.find("teleolo") != string::npos && a9.find("gist") != string::npos)){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Teleologist \n\n";

        }



          cout << "_________ is the exercise of self and life devoted to the good of others, more particularly the good the society \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if ((a10.find("altru") != string::npos && a10.find("ism") != string::npos)){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Altruism \n\n";

        }



          cout << "__________ introduced the theory of altruism in philosophy \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if ((a11.find("auguste") != string::npos && a11.find("comte") != string::npos)){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Auguste Comte \n\n";

        }



          cout << "Altruism is the ________ of morality \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if ((a12.find("bed") != string::npos && a12.find("rock") != string::npos)){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = bedrock \n\n";

        }

           cout << "Which of the following is difficult to practice  (A) Pragmatism (B) Emotivism (C) Altruism (D) Utilitarianism\n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if ((a13.find("altruism") != string::npos || a13 == "c" || a13 == "C")){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = (C) \n\n";

        }



 }




int main(){
	char rstr[128] = "ctt.dat";

	char ch;	
	static int n;
	int i=0;	
	ifstream ifile(rstr);
		if (ifile.fail()){
			exit(EXIT_FAILURE);
		}
	
	while(!ifile.eof()){
		ifile.get(ch);
		n = ch;

	}	
	

	
		
n = (n-48);	
		
	ofstream ofile("ctt.dat");
	
	ofile <<n+1;
	if (n > 8){
		ofile << "0";
	}
	ofile.close();

		


		cout << "Note: User can only install this application 3 time.\n" << "\t\tTrial " << n+1 << " of 3" << endl;
		
		
		int x;
char k;
loop:
cout << "Choose Topic:\n1 for Introduction to Philosophy\n2 for Philosophy as a Rational Inquiry\n3 for Branch of Philosophy\n4 Methods in Philosophy\n5 School of thought in Philosophy. \n";
cin >> x;
if (x == k){
    cout << "Enter in figures and not in words please.\n";
    Sleep(5000);

           exit(EXIT_FAILURE);
}
if (x == 1){
    C1();
}
else if(x == 2){
C2();

}
else if (x == 3){

    C3();
}
else if (x == 4){

    C4();
}
else if (x == 5){

    C5();
}
else
    cout << "Invalid Input!!!\nPlease Enter 1,2,3 or 5\n\n";
    goto loop;

	
	
	
	
	
	
	
		system("pause");
return 0;
}





