#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
int wordCount(string wd);
int main(){


string wd = "Yes! I believe The Federal University of Technology, Akure(FUTA) has a waste management Challenge.The challenge that I personally have notices with regards to waste management here in FUTA is in the location of the temporary site of disposal and in how long the waste stays before being off-loaded for permanent disposal. The image IMG1 shows a temporary site of waste disposal iAn FUTA, Obanla, where wastes are temporarily dispose before being permanently dispose to it permanent site(outside the school).(examining the location) Its should be noted that the location of this site(IMG1) is around and within school premises. Apart for the offensive and irritating odour both student and staffs are exposed to, the place can also serve as a breeding habit for germs and harmful insect/micro-organisms that causes diseases. Its would be a lot more ideal if the location of the wastes is being situated outside or far from the school's premises. As I have mentioned, the challenge is not only in the location but also in how long the waste lingers at the temporary site before being disposed, it is certain that the long waste tarries within the reach of people the more offensive the odour becomes and more waste accumulates, making the area unattractive and hazardous to stay in. Waste management in this regards can be improved by ensuring a regular and consistent evacuation of the waste for permanent disposal. ";
cout << " \n";

cout << "Number of words = " << wordCount(wd);;



return 0;
}


int wordCount(string wd){
int c=0;
    int len = wd.length();
    for (int i=0;i<len;i++){

       wd = wd[i];
       if (wd == " "){
        c++;
       }


    }


return c+1;
}



