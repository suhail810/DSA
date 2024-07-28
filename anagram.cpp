#include<iostream>
using namespace std;


string anagram(string s1, string s2) {

    if (s1.length() != s2.length()) {
        return "no";
    
    }
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2 ? "yes" : "no";
};


int main() {

    string s1 = "listen";
    string s2 = "silence";

    cout<<anagram(s1,s2)<<endl;

    return 0;
}