#include<iostream>
using namespace std;

string palindrome(string s) {

    int left = 0;
    int right = s.length() -1 ;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return "false";
            left++;
            right--;
        }
        else {
            return "true";
        }
       
    }
    
}

int main() {

    string s = "abcdcba";
   cout<<palindrome(s)<<endl;

    return 0;
}