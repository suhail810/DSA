#include<iostream>
using namespace std;

string reverse(string s){

    string ch = " ";

    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i] + ch;
    }
    return ch;
}


int main() {

    string s = "hello";

   cout<<reverse(s);
    return 0;
}