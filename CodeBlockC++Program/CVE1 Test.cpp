#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
    using namespace std;


    void MON(){
        string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30;
        unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30;
    cout << "\n\n";

    cout << "\n\n\n";
getline(cin,a1);

        cout << "\t\t\tMan, his Origin And Nature \n\n";
 cout << "The Account of the origin of life that says that 'Life was created by a supernatural being at a particular time' is called the:\n";
 getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("special") != string::npos && a1.find("creation")!= string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Special Creation \n";
        }
        ///////////////////////////////////
         cout << "Who (in 1932) argued that the multitude of simple molecules, surface area of earth,, the energy available and time scale would have accumulated organic molecules in which life could have evolved:\n";
 getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if (a19.find("alexander") != string::npos && a19.find("oparin")!= string::npos){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Alexander Oparin \n";
        }
//////////////////////////////////////////
 cout << "The name of the organic molecule produced by Oparin's hypothesis is:\n";
 getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if (a20.find("primeval") != string::npos && a20.find("soup")!= string::npos){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer = Primeval Soup \n";
        }
///////////////////////////////////////////

 cout << "The separation of colloids from their aqueous phase is called:\n";
 getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if (a21.find("coacervation") != string::npos){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = Coacervation \n";
        }

//////////////////////////////////////////

 cout << "The varying composition of the ___________ in the different area will lead to variation in the chemical composition of ___________, producing the raw material for _______________\n";
 getline(cin,a22);
        for(int i=0;i<a22.length();i++){
            a22[i]=tolower(a22[i]);
        }
        if (a22.find("soup") != string::npos && a22.find("coacerva")!= string::npos && a22.find("natural selection")!= string::npos){
            s22 = 1; cout << "Correct! \n\n";
        }
        else{
            s22=0; cout << "\t\t Wrong! \t Answer = soup, coacervates, natural selection \n";
        }

//////////////////////////////////////
 cout << "The Account of Origin of life that says that 'Life arose from non-living matter ' is called:\n";
 getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("spontaneous") != string::npos && a2.find("generation")!= string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Spontaneous Generation \n";
        }
        //////////////////////////////////
 cout << "The Account of the origin of life that says that life has no origin is called:\n";
 getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("steady") != string::npos && a3.find("state")!= string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Steady State\n";
        }
        /////////////////////////////////
         cout << "The hypothesis of life originating from an extra terrestial origin is known as: ";
 getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("cosmozoan") != string::npos || a4.find("panspermia")!= string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Cosmozoan or Panspermia \n";
        }
        ///////////////////////////////
         cout << "The hypothesis of life originating according to chemical and physical laws is: \n";
 getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("biochemical") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Biochemical Evolution \n";
        }
//////////////////////////////////////


 cout << "Who and who calculated the day, month and year that God created the world:\n";
 getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("usser") != string::npos && a6.find("armagh")!= string::npos && a6.find("archbishop")!= string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Archbishop Usser and Archbishop Armagh \n";
        }
        //////////////////////

    cout << "According to the them, what was the exact day(in digits),month and year(in digits) God created the world\n";
 getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("23") != string::npos && (a7.find("oct")!= string::npos || a7.find("8") != string::npos) && a7.find("4004")!= string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0;cout << "\t\t Wrong! \t Answer = 23/October/4004BC \n";
        }
        /////////////////////////////////////


         cout << "Also, according to them, what was the exact time(in digit form) the first man(Adam) was created: \n";
 getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("9") != string::npos && a8.find(":")!= string::npos && a8.find("am")!= string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = 9:00AM \n";
        }

        //////////////////////////////

         cout << "Science seeks the truth by Observation and experiment(or imprericism) while theology seeks truth by:\n";
 getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if ((a9.find("revelation") != string::npos && a9.find("faith")!= string::npos) || a9.find("indoctrin") != string::npos ){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Revelation and Faith \n";
        }

 /////////////////////////////////

       cout << "Spontaneous generation is prevalent in the ancient ______, ________ and _________ thought\n";
 getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("egypt") != string::npos && a10.find("babylon")!= string::npos && a10.find("chin")!= string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Egyptian, Chinese and Babylonian \n";
        }
////////////////////////////////////
 cout << "Aristotle's was born in what year and died what year? \n";
 getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("384") != string::npos && a11.find("322")!= string::npos && a11.find("bc")!= string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = 384BC - 322BC \n";
        }

    ///////////////////////////////


     cout << "Aristotle related all organisms to a continuum which he called ______\n";
 getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if ((a12.find("scala") != string::npos && a12.find("natura")!= string::npos)|| a12.find("ladder") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = A Scala natura \n";
        }
    	///////////////////////////////////

 cout << "The Christian account for creation is given which bible text:\n";
 getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("genesis") != string::npos && a13.find("26")!= string::npos && a13.find("1")!= string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Genesis 1:1-26 \n";
        }
//////////////////////////////

 cout << "According to Aristotle hypothesis of spontaneous generation, he assumed that certain particles of matter contained 'active principle'. His active principle include:\n";
 getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("fertili") != string::npos && a14.find("egg")!= string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Fertilized Egg \n";
        }
////////////////////////////

 cout << "The spontaneous generation was later disapproved by the theory of _____";
 getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("biogenesis") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Biogenesis \n";
        }
////////////////////////////
cout << "Which of the following does not belong to the school of thought as by the theory of biogenesis:\n (A) Van Helmonth (B) Louis Pasteur (C) Redi (D)Lazzaro Spallanzan (E) Louis Masteur \n";
getline(cin,a16);
if (a16 == "e" || a16=="E"){
	s16 = 1; cout << "Correct! \n\n";
}
else{
	s16=0; cout << "\t\t Wrong! \t Answer = (E) \n";
}
////////////////////////////
cout << "Which of the following is not an evidence of panspermia theory\n (A) Rockect like Objects(UFO's)  (B) Space probe (C) Cafe drawing (D) Paleontology \n";
getline(cin,a17);
if (a17 == "d" || a17=="D"){
	s17 = 1; cout << "Correct! \n\n";
}
else{
	s17=0; cout << "\t\t Wrong! \t Answer = (D) \n";
}

///////////////////////////
 cout << "Which account of the origin of life speculate that the earth was hot and as it cooled, carbon and less volatile metal formed the earth's core:\n";
 getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if (a18.find("biochemical") != string::npos){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = Biochemical \n";
        }

///////////////////////////



int tot = (s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16+s17+s18+s19+s20+s21+s22);

cout << "\n";
cout << "\n";
double p1 = tot/22;
double p2 = p1*100;
cout << "Score = " << tot << " of 22 => " << p2<< "%\n";


    }
















    //THE THEORY OF EVOLUTION

 void Evolution(){

 string a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50;
 unsigned int s19,s20,s21,s22,s23,s24,s25,s26,s27,s28,s29,s30,s31,s32,s33,s34,s35,s36,s37,s38,s39,s40,s41,s42,s43,s44,s45,s46,s47,s48,s49,s50;

cout << "\n\n\n\t\t\tTHE THEORY OF EVOLUTION";
getline(cin,a19);
cout << "\n";
 cout << "What was the first condition proposed by Lamarck for the mechanism of evolution:\n";
 getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if (a19.find("use ") != string::npos && a19.find("disuse")!= string::npos &&( a19.find("part")!= string::npos || a19.find("body")!= string::npos)){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = The use and disuse of parts \n";
        }
/////////////////////////
 cout << "What was the second condition proposed by Lamarck for the mechanism of evolution:\n";
 getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if (a20.find("inherit") != string::npos &&( a20.find("character")!= string::npos || a20.find("feature")!= string::npos)){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer = The inheritance of acquired characteristics \n";
        }
////////////////////////////////////

 cout << "Who later showed that phenotypic changes cannot be transmitted to a next generated as proposed by Lamarck's hypothesis:\n";
 getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if (a21.find("weismann") != string::npos){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = Weismann \n";
        }
/////////////////////////////

/////////////////////////////////
 cout << "Who published the 'Origin of Species by Natural Selection':\n";
 getline(cin,a22);
        for(int i=0;i<a22.length();i++){
            a22[i]=tolower(a22[i]);
        }
        if (a22.find("darwin") != string::npos || a22.find("charles")!= string::npos){
            s22 = 1; cout << "Correct! \n\n";
        }
        else{
            s22=0; cout << "\t\t Wrong! \t Answer = Charles Darwin \n";
        }
///////////////////////////////////
 cout << "What year did Darwin and Wallace presented their joint theory on Natural Selection:\n";
 getline(cin,a23);
        for(int i=0;i<a23.length();i++){
            a23[i]=tolower(a23[i]);
        }
        if (a23.find("1858") != string::npos){
            s23 = 1; cout << "Correct! \n\n";
        }
        else{
            s23=0; cout << "\t\t Wrong! \t Answer = 1858 \n";
        }
//////////////////////////////////////

 cout << "According to Darwin and Wallace, define natural selection:\n";
 getline(cin,a24);
        for(int i=0;i<a24.length();i++){
            a24[i]=tolower(a24[i]);
        }
        if (a24.find("mechanism") != string::npos && a24.find("new spec")!= string::npos && a24.find("pre")!= string::npos && a24.find("exist")!= string::npos) {
            s24 = 1; cout << "Correct! \n\n";
        }
        else{
            s24=0; cout << "\t\t Wrong! \t Answer = Natural Selection is the mechanism by which new species arise from pre-existing species.(N.B-> Its is a Mechanism) \n";
        }
///////////////////////////////////
 cout << "According to Darwin and Wallace, ________ exists within all populations:\n";
 getline(cin,a24);
        for(int i=0;i<a24.length();i++){
            a24[i]=tolower(a24[i]);
        }
        if (a24.find("variation") != string::npos) {
            s24 = 1; cout << "Correct! \n\n";
        }
        else{
            s24=0; cout << "\t\t Wrong! \t Answer = Variation\n";
        }
////////////////////////////////
  	       /*
 cout << "";
 getline(cin,a);
        for(int i=0;i<a.length();i++){
            a[i]=tolower(a[i]);
        }
        if (a.find("special") != string::npos && a.find("creation")!= string::npos){
            s = 1; cout << "Correct! \n\n";
        }
        else{
            s=0;
        }

*/

 cout << "As part of the Misconception of Darwin's theory of Evolution, The struggle of existence was characterised by unhealthy terms like 'survival of the fittest' and 'elimination of the unfit' by the philosopher named:\n";
 getline(cin,a25);
        for(int i=0;i<a25.length();i++){
            a25[i]=tolower(a25[i]);
        }
        if (a25.find("herbert") != string::npos && a25.find("spencer")!= string::npos){
            s25 = 1; cout << "Correct! \n\n";
        }
        else{
            s25=0; cout << "\t\t Wrong! \t Answer = Herbert Spencer\n";
        }

//////////////////////				THE NATURE OF EARLIEST ORGANISM

 cout << "The earliest organism were:\n";
 getline(cin,a26);
        for(int i=0;i<a26.length();i++){
            a26[i]=tolower(a26[i]);
        }
        if (a26.find("heterotroph") != string::npos){
            s26 = 1; cout << "Correct! \n\n";
        }
        else{
            s26=0; cout << "\t\t Wrong! \t Answer = Heterotroph \n";
        }
///////////////////////
 cout << "The theory of organic evolution by natural selection of inherited characteristics is known as:\n";
 getline(cin,a27);
        for(int i=0;i<a27.length();i++){
            a27[i]=tolower(a27[i]);
        }
        if (a27.find("neo") != string::npos && a27.find("darwinism")!= string::npos){
            s27 = 1; cout << "Correct! \n\n";
        }
        else{
            s27=0; cout << "\t\t Wrong! \t Answer = Neo-Darwinism \n";
        }
     ///////////////////////
 cout << "'Neo' means:\n";
 getline(cin,a28);
        for(int i=0;i<a28.length();i++){
            a28[i]=tolower(a28[i]);
        }
        if (a28.find("new") != string::npos || a28.find("current")!= string::npos){
            s28= 1; cout << "Correct! \n\n";
        }
        else{
            s28=0; cout << "\t\t Wrong! \t Answer = New \n";
        }
	///////////////////////
 cout << "Mention two evidence of past evolution\n";
 getline(cin,a29);
        for(int i=0;i<a29.length();i++){
            a29[i]=tolower(a29[i]);
        }
        if (a29.find("fossil") != string::npos || a29.find("stratigraphy")!= string::npos || a29.find("genetics") != string::npos || a29.find("shell")!= string::npos || a29.find("colour")!= string::npos){
            s29 = 1; cout << "Correct! \n\n";
        }
        else{
            s29=0; cout << "\t\t Wrong! \t Answer =(1) Fossil, geology, stratigraphy,selection of shell,color, mechanism of inheritance as shown in Mendelian genetics \n";
        }
        /////////////////////////////
         cout << "The branch of learning concerned with investigating the origin and evolution of hominids is known as: \n";
         getline(cin,a30);
        for(int i=0;i<a30.length();i++){
            a30[i]=tolower(a30[i]);
        }
        if (a30.find("palaeanthropology") != string::npos){
            s30 = 1; cout << "Correct! \n\n";
        }
        else{
            s30=0; cout << "\t\t Wrong! \t Answer = Palaeanthropology \n";
        }

        /////////////////////////////////////////

        //////////////////////////////////////

             cout << "Our ancestors diverge from: \n";
         getline(cin,a31);
        for(int i=0;i<a31.length();i++){
            a31[i]=tolower(a31[i]);
        }
        if (a31.find("ape") != string::npos){
            s31 = 1; cout << "Correct! \n\n";
        }
        else{
            s31=0; cout << "\t\t Wrong! \t Answer = Apes \n";
        }
          /////////////////////////////////////////////

        cout << "The separation is generally believed to have occurred ___________ year ago \n";
         getline(cin,a32);
        for(int i=0;i<a32.length();i++){
            a32[i]=tolower(a32[i]);
        }
        if (a32.find("6") != string::npos && a32.find("8") != string::npos && a32.find("million") != string::npos){
            s32 = 1; cout << "Correct! \n\n";
        }
        else{
            s32=0; cout << "\t\t Wrong! \t Answer = 6-8 Millions \n";

        }

        ////////////////////////////////////////////

        /////////////////////////////////////////////

        cout << "The species of what genus may be typically common ancestors of the African apes and hominids? \n";
         getline(cin,a33);
        for(int i=0;i<a33.length();i++){
            a33[i]=tolower(a33[i]);
        }
        if (a33.find("proconsul") != string::npos && a33.find("") != string::npos){
            s33 = 1; cout << "Correct! \n\n";
        }
        else{
            s33=0; cout << "\t\t Wrong! \t Answer = Proconsul  \n";

        }

        ////////////////////////////////////////////
        /////////////////////////////////////////////

        cout << "Presence of apes in southern Asia is related to which of the animal\n";
         getline(cin,a34);
        for(int i=0;i<a34.length();i++){
            a34[i]=tolower(a34[i]);
        }
        if (a34.find("orangutan") != string::npos){
            s34 = 1; cout << "Correct! \n\n";
        }
        else{
            s34=0; cout << "\t\t Wrong! \t Answer = Orangutan \n";

        }

        ////////////////////////////////////////////

        /////////////////////////////////////////////

        cout << "All earlier hominids known so far are normally grouped in the genus ___________ \n";
         getline(cin,a35);
        for(int i=0;i<a35.length();i++){
            a35[i]=tolower(a35[i]);
        }
        if (a35.find("australopithecus") != string::npos){
            s35 = 1; cout << "Correct! \n\n";
        }
        else{
            s35=0; cout << "\t\t Wrong! \t Answer = Australopithecus  \n";

        }

        ////////////////////////////////////////////

    /////////////////////////////////////////////

        cout << "The Australopithecus are also known as the ____________ \n";
         getline(cin,a36);
        for(int i=0;i<a36.length();i++){
            a36[i]=tolower(a36[i]);
        }
        if (a36.find("southern") != string::npos && a36.find("ape") != string::npos){
            s36 = 1; cout << "Correct! \n\n";
        }
        else{
            s36=0; cout << "\t\t Wrong! \t Answer = Southern Apes \n";

        }

        ////////////////////////////////////////////

      /////////////////////////////////////////////

        cout << "Australopithecus(southern apes) was discovered in what year and where?\n";
         getline(cin,a37);
        for(int i=0;i<a37.length();i++){
            a37[i]=tolower(a37[i]);
        }
        if (a37.find("1924") != string::npos && a37.find("south") != string::npos && a37.find("africa") != string::npos){
            s37 = 1; cout << "Correct! \n\n";
        }
        else{
            s37=0; cout << "\t\t Wrong! \t Answer = 1924, South Africa\n";

        }

        ////////////////////////////////////////////
          /////////////////////////////////////////////

        cout << "In the late _____________ about 2 million years ago, part of the australopitheomes began to develop larger brain \n";
         getline(cin,a38);
        for(int i=0;i<a38.length();i++){
            a38[i]=tolower(a38[i]);
        }
        if (a38.find("piliocene ") != string::npos && a38.find("epoch") != string::npos){
            s38 = 1; cout << "Correct! \n\n";
        }
        else{
            s38=0; cout << "\t\t Wrong! \t Answer = Piliocene epoch \n";

        }
          /////////////////////////////////////////////
        cout << "The Homo habilis are also called: \n";

         getline(cin,a39);
        for(int i=0;i<a39.length();i++){
            a39[i]=tolower(a39[i]);
        }
        if (a39.find("handy") != string::npos && a39.find("man") != string::npos){
            s39 = 1; cout << "Correct! \n\n";
        }
        else{
            s39=0; cout << "\t\t Wrong! \t Answer = Handy man \n";

        }

        ////////////////////////////////////////////


          /////////////////////////////////////////////

        cout << "The Homo habilis was found in __________ \n";
         getline(cin,a40);
        for(int i=0;i<a40.length();i++){
            a40[i]=tolower(a40[i]);
        }
        if (a40.find("olduvia") != string::npos && a40.find("gorge") != string::npos && a40.find("tanzania") != string::npos){
            s40 = 1; cout << "Correct! \n\n";
        }
        else{
            s40=0; cout << "\t\t Wrong! \t Answer = Olduvia Gorge in Tanzania \n";

        }

        ////////////////////////////////////////////



       /////////////////////////////////////////////

        cout << "The Homo erectus are found in the continent _________, _____________ and ______________ \n";
         getline(cin,a41);
        for(int i=0;i<a41.length();i++){
            a41[i]=tolower(a41[i]);
        }
        if (a41.find("africa") != string::npos && a41.find("asia") != string::npos && a41.find("europe") != string::npos){
            s41 = 1; cout << "Correct! \n\n";
        }
        else{
            s41=0; cout << "\t\t Wrong! \t Answer = Africa, Asia and Europe \n";

        }

        ////////////////////////////////////////////

   /////////////////////////////////////////////

        cout << "The Homo erectus(upright man) was first found in ________ and _______________ \n";
         getline(cin,a42);
        for(int i=0;i<a42.length();i++){
            a42[i]=tolower(a42[i]);
        }
        if (a42.find("china") != string::npos && a42.find("japan") != string::npos){
            s42 = 1; cout << "Correct! \n\n";
        }
        else{
            s42=0; cout << "\t\t Wrong! \t Answer = Java and China \n";

        }

        ////////////////////////////////////////////
     /////////////////////////////////////////////

        cout << "The principal species of this age is \n";
         getline(cin,a43);
        for(int i=0;i<a43.length();i++){
            a43[i]=tolower(a43[i]);
        }
        if (a43.find("homo") != string::npos && a43.find("erectus") != string::npos){
            s43 = 1; cout << "Correct! \n\n";
        }
        else{
            s43=0; cout << "\t\t Wrong! \t Answer = Homo erectus \n";

        }

        ////////////////////////////////////////////
         /////////////////////////////////////////////

        cout << "The Homo sapiens' specimen are gotten from _________,____________, with traces in __________, and ____________ \n";
         getline(cin,a44);
        for(int i=0;i<a44.length();i++){
            a44[i]=tolower(a44[i]);
        }
        if (a44.find("europe") != string::npos && a44.find("africa") != string::npos && a44.find("india") != string::npos && a44.find("china") != string::npos){
            s44 = 1; cout << "Correct! \n\n";
        }
        else{
            s44=0; cout << "\t\t Wrong! \t Answer = Europe, Africa, India and China \n";

        }

        ////////////////////////////////////////////

     /////////////////////////////////////////////

        cout << "Mention one suggestive evidence that hunting was practiced during the evolution of the Homo sapiens: \n";
         getline(cin,a45);
        for(int i=0;i<a45.length();i++){
            a45[i]=tolower(a45[i]);
        }
        if ((a45.find("kalambo fall") != string::npos && a45.find("africa") != string::npos)|| (a45.find("spear") != string::npos && a45.find("essex") != string::npos && a45.find("england") != string::npos )){
            s45 = 1; cout << "Correct! \n\n";
        }
        else{
            s45=0; cout << "\t\t Wrong! \t Answer = Club from Kalambo falls in Africa OR Spear from Essex in England \n";

        }

        ////////////////////////////////////////////

 /////////////////////////////////////////////

        cout << "The best variety of early homo sapiens named after a valley in Germany is _________ \n";
         getline(cin,a46);
        for(int i=0;i<a46.length();i++){
            a46[i]=tolower(a46[i]);
        }
        if (a46.find("neanderthal") != string::npos && a46.find("") != string::npos){
            s46 = 1; cout << "Correct! \n\n";
        }
        else{
            s46=0; cout << "\t\t Wrong! \t Answer = The Neanderthals  \n";

        }

        ////////////////////////////////////////////

     /////////////////////////////////////////////

        cout << "Mention two places the above mentioned are widespread \n";
         getline(cin,a48);
        for(int i=0;i<a48.length();i++){
            a48[i]=tolower(a48[i]);
        }
        if (a48.find("europe") != string::npos && a48.find("asia") != string::npos){
            s48 = 1; cout << "Correct! \n\n";
        }
        else{
            s48=0; cout << "\t\t Wrong! \t Answer = Europe and parts of Asia\n";

        }

        ////////////////////////////////////////////

     /////////////////////////////////////////////

        cout << "The aforementioned flourished between _____________ and ______________ years ago.(answer in digits)\n";
         getline(cin,a47);
        for(int i=0;i<a47.length();i++){
            a47[i]=tolower(a47[i]);
        }
        if (a47.find("100000") != string::npos && a47.find("300000") != string::npos){
            s47 = 1; cout << "Correct! \n\n";
        }
        else{
            s47=0; cout << "\t\t Wrong! \t Answer = 100,000 - 300,000 \n";

        }

        ////////////////////////////////////////////

         /////////////////////////////////////////////

        cout << "What characteristics make the Neanderthals easily recognizable as stated in the manual book\n";
         getline(cin,a50);
        for(int i=0;i<a50.length();i++){
            a50[i]=tolower(a50[i]);
        }
        if ((a50.find("long") != string::npos && a50.find("low") != string::npos  && a50.find("skull") != string::npos) || (a50.find("robust") != string::npos && a50.find("bodily") != string::npos  && a50.find("skeleton") != string::npos) || (a50.find("large") != string::npos && a50.find("face") != string::npos)){
            s50 = 1; cout << "Correct! \n\n";
        }
        else{
            s50=0; cout << "\t\t Wrong! \t Answer = The combination of long low skull, large face and robust bodily skeleton   \n";

        }

        ////////////////////////////////////////////
int tot = (s19+s20+s21+s22+s23+s24+s25+s26+s27+s28+s29+s30+s31+s32+s33+s34+s35+s36+s37+s38+s39+s40+s41+s42+s43+s44+s45+s46+s47+s48+s49+s50);

cout << "\n";
cout << "\n";
double p1 = tot/32;
double p2 = p1*100;
cout << "Score = " << tot << " of 32 => " << p2<< "%\n";


 }

 void MNR(){

   unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25;
   string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25;

 cout << "\n\n\n\t\t\tMAN AND HIS NATURAL RESOURCES";
getline(cin,a19);
cout << "\n";


         /////////////////////////////////////////////

        cout << "Material resources from man's environment include the following except? \n (A)Water (B) Fire (C) air (C) fuel\n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1 == "b" || a1 == "B"){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = (B) \n";

        }

        ////////////////////////////////////////////


      /////////////////////////////////////////////

        cout << "Plant converts water and air into _________ \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("glucose") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Glucose \n";

        }

        ////////////////////////////////////////////
        /////////////////////////////////////////////

        cout << "During the process of producing glucose, plant release _______ \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("oxygen") != string::npos || a3.find("o2") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Oxygen  \n";

        }

        ////////////////////////////////////////////

        /////////////////////////////////////////////

        cout << "The interdependence relationship between man and plant in their air consumption is _________ \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("symbiosis") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Symbiosis  \n";

        }

        ////////////////////////////////////////////

    /////////////////////////////////////////////

        cout << "The three types of carbohydrates are _______, ________ and ________ \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("sugar") != string::npos && a5.find("starch") != string::npos && a5.find("cellulose") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Sugar, Starch and Cellulose \n";

        }

        ////////////////////////////////////////////


    /////////////////////////////////////////////

        cout << "Plants produces fats from __________ \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("carbohydrate") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Carbohydrates  \n";

        }

        ////////////////////////////////////////////

          /////////////////////////////////////////////

        cout << "The three types of Minerals are __________, ___________, and __________ \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("iron") != string::npos && a7.find("calcium") != string::npos && a7.find("phosphorous") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Iron, Calcium and Phosphorus \n";

        }

        ////////////////////////////////////////////

              /////////////////////////////////////////////
        cout << "Cabbage is an example of which type of mineral? \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("iron") != string::npos || a8.find("fe") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Iron (Fe)  \n";

        }
        ////////////////////////////////////////////

          /////////////////////////////////////////////
        cout << "Which of the following areas is not favourable to agriculture \n(A)Tundra (B) Nile Valley (C) Valleys of Tigris (D) Euphrates in Babylonia (E) Yangtse of China \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10 == "a" || a10 =="A"){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = (A) \n";

        }
        ////////////////////////////////////////////

                    cout << "Liver is an example of which type of mineral? \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a8[i]=tolower(a9[i]);
        }
        if (a9.find("phosphorus") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Phosphorus  \n";

        }




     /////////////////////////////////////////////
        cout << "What is precipitation\n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("falling") != string::npos && a11.find("products") != string::npos && a11.find("condensation") != string::npos && a11.find("atmosphere") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Is the falling down of products of condensation in the atmosphere \n";

        }
        ////////////////////////////////////////////

        /////////////////////////////////////////////
        cout << "Climate is the prevailing weather condition while weather is the prevailing ____________ \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("state") != string::npos && a12.find("atmosphere") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = State of atmosphere \n";

        }
        ////////////////////////////////////////////


        /////////////////////////////////////////////
        cout << "________ is the organic material in soils produced by the decomposition of vegetables and animal matter which is essential for the fertility of the earth \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("humus") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Humus  \n";

        }
        ////////////////////////////////////////////

        /////////////////////////////////////////////
        cout << "Weathering is brought about by  \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("ice") != string::npos || a14.find("frost") != string::npos || a14.find("natural occurring chemicals") != string::npos || a14.find("lowly plant") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Ice, frost, naturally occurring chemicals,lowly plant e.g lichen, algae  \n";

        }
        ////////////////////////////////////////////








        /////////////////////////////////////////////
        cout << "Regions that are no suitable for agricultural purposes has been made suitable by the introduction of special breeds, fertilizer etc...\nAn  example of a country which this has taken place is   \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("israel") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Israel \n";

        }
        ////////////////////////////////////////////


        /////////////////////////////////////////////
        cout << "Primary needs are those needs required for _________ \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("existence") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Existence \n";

        }
        ////////////////////////////////////////////


        /////////////////////////////////////////////
        cout << "When a resource can be maintained or rejuvenated or improved upon by a naturally occurring process, the resource is said to be: \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if (a17.find("renewable") != string::npos && a17.find("non") == string::npos){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Renewable Resources  \n";

        }
        ////////////////////////////////////////////



        /////////////////////////////////////////////
        cout << "Soil formation is what class of resources \n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if (a18.find("renewable") != string::npos && a18.find("non") == string::npos){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = Renewable Resources  \n";

        }
        ////////////////////////////////////////////



        /////////////////////////////////////////////
        cout << "All forms of natural resources are actually integrated in a _____________  \n";
         getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if (a19.find("continuum") != string::npos || a19.find("continuous process") != string::npos){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Continuum  \n";

        }
        ////////////////////////////////////////////

        /////////////////////////////////////////////
        cout << "What is Cycling time \n";
         getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if ((a20.find("period") != string::npos || a20.find("time")) && ((a20.find("replace") != string::npos) || a20.find("recover") != string::npos) && a20.find("quantity") != string::npos && a20.find("resource") != string::npos){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer = Is the period it takes to replace a particular quantity of used with an equivalent quantity in a useful form. \n";

        }
        ////////////////////////////////////////////


      /////////////////////////////////////////////
        cout << "When the rate of consumption or utilization of a resources is greater than its cycling capacity \n";
         getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if (a21.find("non") != string::npos && a21.find("renewable") != string::npos){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = Non-Renewable resources  \n";

        }
        ////////////////////////////////////////////

              /////////////////////////////////////////////
        cout << "When an easily renewable resource is consumed at a rate that will render it non-renewable, then such a resource is said to have been: \n";
         getline(cin,a22);
        for(int i=0;i<a22.length();i++){
            a22[i]=tolower(a22[i]);
        }
        if (a22.find("mined") != string::npos){
            s22 = 1; cout << "Correct! \n\n";
        }
        else{
            s22=0; cout << "\t\t Wrong! \t Answer = Mined \n";

        }
        ////////////////////////////////////////////

          /////////////////////////////////////////////
        cout << "List(Separating with a comma(,)) 5 different method of management of non-living resources: \n";
         getline(cin,a23);
        for(int i=0;i<a23.length();i++){
            a23[i]=tolower(a23[i]);
        }
        if (a23.find("beneficiation") != string::npos && a23.find("maximisation") != string::npos && a23.find("allocation") != string::npos && a23.find("substitution") != string::npos && a23.find("recycling") != string::npos){
            s23 = 1; cout << "Correct! \n\n";
        }
        else{
            s23=0; cout << "\t\t Wrong! \t Answer = Beneficiation, Maximisation, Allocation, Substitution and Recycling \n";

        }
        ////////////////////////////////////////////


        /////////////////////////////////////////////
        cout << "The system of management mentioned above that deals with the upgrading or improving of uneconomical process is called: \n";
         getline(cin,a24);
        for(int i=0;i<a24.length();i++){
            a24[i]=tolower(a24[i]);
        }
        if (a24.find("beneficiation") != string::npos){
            s24 = 1; cout << "Correct! \n\n";
        }
        else{
            s24=0; cout << "\t\t Wrong! \t Answer = Beneficiation \n";

        }
        ////////////////////////////////////////////








double totMNR = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16+s17+s18+s19+s20+s21+s22+s23+s24;
double p1 = (totMNR/24)*100;

cout << "Score = " << totMNR << " of 22 => " << p1<< "%\n";

 }

 void HPST(){

  unsigned int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20,s21,s22,s23,s24,s25;
   string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25;


cout << "\n\n\n\t\t\tPHILOSOPHY, SCIENCE AND TECHNOLOGY\n";
getline(cin,a19);
cout << "\n";



        /////////////////////////////////////////////
        cout << "Science is roughly speaking concerned with what is considered as __________ \n";
         getline(cin,a1);
        for(int i=0;i<a1.length();i++){
            a1[i]=tolower(a1[i]);
        }
        if (a1.find("fact") != string::npos){
            s1 = 1; cout << "Correct! \n\n";
        }
        else{
            s1=0; cout << "\t\t Wrong! \t Answer = Fact \n";

        }
        ////////


        /////////////////////////////////////////////
        cout << "Science helps to gain knowledge through an organised system of ________ and __________ \n";
         getline(cin,a2);
        for(int i=0;i<a2.length();i++){
            a2[i]=tolower(a2[i]);
        }
        if (a2.find("observation") != string::npos && a2.find("experiment") != string::npos){
            s2 = 1; cout << "Correct! \n\n";
        }
        else{
            s2=0; cout << "\t\t Wrong! \t Answer = Observation and Experiment\n";

        }
        ////////

        /////////////////////////////////////////////
        cout << "The word 'Technology' relates to using of the ____________ \n";
         getline(cin,a3);
        for(int i=0;i<a3.length();i++){
            a3[i]=tolower(a3[i]);
        }
        if (a3.find("hand") != string::npos && a3.find("practical") != string::npos && a3.find("action") != string::npos){
            s3 = 1; cout << "Correct! \n\n";
        }
        else{
            s3=0; cout << "\t\t Wrong! \t Answer = Hand in practical action \n";

        }
        ////////
               /////////////////////////////////////////////
        cout << "Technology is a flexible combination of ________, ___________ and __________ for attaining desired results and avoiding failures under varying circumstances \n";
         getline(cin,a4);
        for(int i=0;i<a4.length();i++){
            a4[i]=tolower(a4[i]);
        }
        if (a4.find("skill") != string::npos && a4.find("knowledge") != string::npos && a4.find("method") != string::npos){
            s4 = 1; cout << "Correct! \n\n";
        }
        else{
            s4=0; cout << "\t\t Wrong! \t Answer = Skills, Knowledge and Methods  \n";

        }
        ////////
           /////////////////////////////////////////////
        cout << "The sun emits two types of energy which are _______ and ___________ \n";
         getline(cin,a5);
        for(int i=0;i<a5.length();i++){
            a5[i]=tolower(a5[i]);
        }
        if (a5.find("light") != string::npos && a5.find("heat") != string::npos){
            s5 = 1; cout << "Correct! \n\n";
        }
        else{
            s5=0; cout << "\t\t Wrong! \t Answer = Heat and Light \n";

        }
        ////////
           /////////////////////////////////////////////
        cout << "Engineering makes properties of matter useful to man in _________, __________ and ___________  \n";
         getline(cin,a6);
        for(int i=0;i<a6.length();i++){
            a6[i]=tolower(a6[i]);
        }
        if (a6.find("structure") != string::npos && a6.find("machine") != string::npos && a6.find("system") != string::npos){
            s6 = 1; cout << "Correct! \n\n";
        }
        else{
            s6=0; cout << "\t\t Wrong! \t Answer = Structures, machines and systems \n";

        }
        ////////

           /////////////////////////////////////////////
        cout << "Philosophy is gotten from the greek word ______________, which means ____________ \n";
         getline(cin,a7);
        for(int i=0;i<a7.length();i++){
            a7[i]=tolower(a7[i]);
        }
        if (a7.find("philosophia") != string::npos && a7.find("love") != string::npos && a7.find("wisdom") != string::npos){
            s7 = 1; cout << "Correct! \n\n";
        }
        else{
            s7=0; cout << "\t\t Wrong! \t Answer = Philosophia, Love of wisdom \n";

        }
        ////////

           /////////////////////////////////////////////
        cout << "Philosophy is a kind of _________ or ___________ \n";
         getline(cin,a8);
        for(int i=0;i<a8.length();i++){
            a8[i]=tolower(a8[i]);
        }
        if (a8.find("calling") != string::npos && a8.find("vocation") != string::npos){
            s8 = 1; cout << "Correct! \n\n";
        }
        else{
            s8=0; cout << "\t\t Wrong! \t Answer = Calling or Vocation  \n";

        }
        ////////
           /////////////////////////////////////////////
        cout << "Philosophy is a calling to anyone that wishes to take life reflectively rather than acting on prevailing _________, ________ and ________  \n";
         getline(cin,a9);
        for(int i=0;i<a9.length();i++){
            a9[i]=tolower(a9[i]);
        }
        if (a9.find("prejudice") != string::npos && a9.find("assum") != string::npos  && a9.find("habits") != string::npos){
            s9 = 1; cout << "Correct! \n\n";
        }
        else{
            s9=0; cout << "\t\t Wrong! \t Answer = Assumptions, habits and prejudices \n";

        }
        ////////

               /////////////////////////////////////////////
        cout << "Because the lines of distinction between various areas of knowledge are subject to change, the definition of Philosophy is __________ \n";
         getline(cin,a10);
        for(int i=0;i<a10.length();i++){
            a10[i]=tolower(a10[i]);
        }
        if (a10.find("subject") != string::npos && a10.find("controversy") != string::npos){
            s10 = 1; cout << "Correct! \n\n";
        }
        else{
            s10=0; cout << "\t\t Wrong! \t Answer = Subject to Controversy  \n";

        }
        ////////

               /////////////////////////////////////////////
        cout << "The desire to find out what is real and true to better understanding is know as __________ \n";
         getline(cin,a11);
        for(int i=0;i<a11.length();i++){
            a11[i]=tolower(a11[i]);
        }
        if (a11.find("love") != string::npos && a11.find("wisdom") != string::npos){
            s11 = 1; cout << "Correct! \n\n";
        }
        else{
            s11=0; cout << "\t\t Wrong! \t Answer = Love of wisdom  \n";

        }
        ////////
               /////////////////////////////////////////////
        cout << "Philosophy is first of all ___________ \n";
         getline(cin,a12);
        for(int i=0;i<a12.length();i++){
            a12[i]=tolower(a12[i]);
        }
        if (a12.find("deep") != string::npos && a12.find("self") != string::npos){
            s12 = 1; cout << "Correct! \n\n";
        }
        else{
            s12=0; cout << "\t\t Wrong! \t Answer = Deepening of one's own self \n";

        }
        ////////

               /////////////////////////////////////////////
        cout << "Philosophy is therefore interested in _____________ and the relationship between them \n";
         getline(cin,a13);
        for(int i=0;i<a13.length();i++){
            a13[i]=tolower(a13[i]);
        }
        if (a13.find("structure") != string::npos && a13.find("fact") != string::npos){
            s13 = 1; cout << "Correct! \n\n";
        }
        else{
            s13=0; cout << "\t\t Wrong! \t Answer = Structure of facts \n";

        }
        ////////


               /////////////////////////////////////////////
        cout << "Philosophy is divided into four branches namely _______, _________, ________, and _________ \n";
         getline(cin,a14);
        for(int i=0;i<a14.length();i++){
            a14[i]=tolower(a14[i]);
        }
        if (a14.find("metaphysics") != string::npos && a14.find("epistemology") != string::npos && a14.find("ethic") != string::npos && a14.find("aesthetics") != string::npos){
            s14 = 1; cout << "Correct! \n\n";
        }
        else{
            s14=0; cout << "\t\t Wrong! \t Answer = Metaphysics, Epistemology, Ethics and Aesthetics \n";

        }
        ////////


          /////////////////////////////////////////////
        cout << "Which of the aforementioned is the study of the nature of beauty and art? \n";
         getline(cin,a15);
        for(int i=0;i<a15.length();i++){
            a15[i]=tolower(a15[i]);
        }
        if (a15.find("aesthetics") != string::npos){
            s15 = 1; cout << "Correct! \n\n";
        }
        else{
            s15=0; cout << "\t\t Wrong! \t Answer = Aesthetics  \n";

        }
        ////////

          /////////////////////////////////////////////
        cout << "Metaphysics deals with _______________ \n";
         getline(cin,a16);
        for(int i=0;i<a16.length();i++){
            a16[i]=tolower(a16[i]);
        }
        if (a16.find("investi") != string::npos && a16.find("ultimate") != string::npos && a16.find("reality") != string::npos){
            s16 = 1; cout << "Correct! \n\n";
        }
        else{
            s16=0; cout << "\t\t Wrong! \t Answer = Investigation of ultimate reality \n";

        }
        ////////

              /////////////////////////////////////////////
        cout << "What is Epistemology: \n";
         getline(cin,a17);
        for(int i=0;i<a17.length();i++){
            a17[i]=tolower(a17[i]);
        }
        if (a17.find("study") != string::npos && a17.find("origin") != string::npos && a17.find("validity") != string::npos && a17.find("knowledge") != string::npos && (a17.find("limit") != string::npos)|| a17.find("boundar") != string::npos){
            s17 = 1; cout << "Correct! \n\n";
        }
        else{
            s17=0; cout << "\t\t Wrong! \t Answer = Is the study of the origin, validity and limit of knowledge \n";

        }
        ////////


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

     /////////////////////////////////////////////
        cout << "Highlight one philosophical types of inquiry and it meaning(Separated by commas) \n";
         getline(cin,a18);
        for(int i=0;i<a18.length();i++){
            a18[i]=tolower(a18[i]);
        }
        if ((a18.find("analytic") != string::npos && a18.find("logic") != string::npos && a18.find("study") != string::npos && a18.find("concept") != string::npos)||(a18.find("synthetic") != string::npos && a18.find("arrange") != string::npos && a18.find("system") != string::npos && a18.find("concept") != string::npos && a18.find("uni") != string::npos)){
            s18 = 1; cout << "Correct! \n\n";
        }
        else{
            s18=0; cout << "\t\t Wrong! \t Answer = Analytic Philosophy, the logical study of concepts OR Synthetic Philosophy, the arrangement of concepts in a unified system \n";

        }
        ////////

        /////////////////////////////////////////////
        cout << "What is concerned with facts about facts about the world\; \n";
         getline(cin,a19);
        for(int i=0;i<a19.length();i++){
            a19[i]=tolower(a19[i]);
        }
        if (a19.find("philosophy") != string::npos && a19.find("science") != string::npos){
            s19 = 1; cout << "Correct! \n\n";
        }
        else{
            s19=0; cout << "\t\t Wrong! \t Answer = Philosophy of Science \n";

        }
        ////////
          /////////////////////////////////////////////
        cout << "____________ is the investigating into the general nature of scientific practice. \n";
         getline(cin,a20);
        for(int i=0;i<a20.length();i++){
            a20[i]=tolower(a20[i]);
        }
        if (a20.find("philosophy") != string::npos && a20.find("science") != string::npos){
            s20 = 1; cout << "Correct! \n\n";
        }
        else{
            s20=0; cout << "\t\t Wrong! \t Answer =  \n";

        }
        ////////
          /////////////////////////////////////////////
        cout << "While scientist are concerned about the behaviour of two gas experiment, philosopher are concerned about which of the following?\n(A) The conclusion of the experiment (B) The technological application of the two experiment (C) what logic it is that enables the scientist to claim that the 1st experiment explains the 2nd (D) The logical invalidity of its conclusion. \n";
         getline(cin,a21);
        for(int i=0;i<a21.length();i++){
            a21[i]=tolower(a21[i]);
        }
        if (a21 == "c" || a21 == "C"){
            s21 = 1; cout << "Correct! \n\n";
        }
        else{
            s21=0; cout << "\t\t Wrong! \t Answer = (C) \n";

        }
        ////////





















 }













  int main(){
      int ch;
      lp1:
      cout << "Enter 1 for Man and His Origin, 2 for The Theory of Evolution, 3 for Man and his Natural Resources,4 for History and philosophy of Science and Technology: ";
      cin >> ch;

   switch (ch) {
   case 1:
       MON();
       break;
   case 2:
        Evolution();
        break;
   case 3:
        MNR();
        break;
   case 4:
        HPST();
        break;
   default:
        cout << "Invalid Choice!\n";
        goto lp1;

   }




  return 0;
  }

