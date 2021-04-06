
#include <iostream>
#include <string>
using namespace std;



bool vowel_count(const string& s){

    bool A=false,E=false,I=false,O=false,U=false;

    for (size_t i=0;i<s.size();i++){
        switch(s[i]){
            case 'a':
                A=true;
                break;
            case 'e':
                E=true;
                break;
            case 'i':
                I=true;
                break;
            case 'o':
                O=true;
                break;
            case 'u':
                U=true;
                break;

        }

    }

    return A&&E&&I&&O&&U;

}

int main()

{   string name="lily,i love you";
    if (vowel_count(name)){
        cout<<"all vowels appear in the string "<<name<<endl;}
    else{
        cout<<"not all vowels in the string "<<name<<endl;}

    string test="aeiou,all in";
    if (vowel_count(test))
      cout<<"all vowels found in "<<test<<endl;
    else
      cout<<"not all vowels in "<<test<<endl;
    return 0;

}
