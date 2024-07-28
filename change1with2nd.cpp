#include<iostream>
using namespace std;

string changeChar(string &str, char ch1, char ch2){

    string result = str;
    for(char &c: result){
        if (c == ch1)
        {
            c = ch2;
        }else if(c == ch2){
            c = ch1;
        }
        
    }
    return result;
}

int main() {

    string str = "apple";
    char ch1 = 'a';
    char ch2 = 'p';
 cout<<changeChar(str,ch1,ch2)<<endl;


    return 0;
}