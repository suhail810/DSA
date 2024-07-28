#include<iostream>
using namespace std;

string changeChar(string str, char s1, char s2) {

    string result = str;

    for(char &c : result) {

        if(c == 'a') {
            c= 'b';
        }
    }
    return result;
}

int main() {

    string str = "banana";

    char s1 = 'a';
    char s2 = 'b';
    cout<<changeChar(str,s1,s2)<<endl;


 return 0;

}