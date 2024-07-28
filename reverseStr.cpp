#include<iostream>
using namespace std;


string reverse(string str) {

    string reversed_str = "";

    for(int i=0;i<str.length();i++){

        reversed_str = str[i] + reversed_str;
    }

    return reversed_str;
}

int main() {

    string str = "hello";

    cout<<reverse(str)<<endl;


    return 0;
}