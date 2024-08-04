#include<iostream>
using namespace std;

string MaxPalindrome(string s) {

    int n = s.length();
    if(n<=1) return s;
    
    int st=0;
    int max_len = 1;

    for (int i = 1; i < n; i++)
    {
        int l=i, j=i , r;
        while (l>=0 && r<n)
        {
            if (s[l] == s[r])
            {
                l--;
                r++;
            }else {
                break;
            }           
        }
        int len = r-l-1;
        if (max_len<len)
        {
            max_len = len;
            st= l+1;
        }        
    }
    
    
    //even
    for (int i = 0; i < n-1; i++)
    {
        int l=i, j=i+1 , r;
        while (l>=0 && r<n)
        {
            if (s[l] == s[r])
            {
                l--;
                r++;
            }else {
                break;
            }           
        }
        int len = r-l-1;
        if (max_len<len)
        {
            max_len = len;
            st= l+1;
        }        
    }
   return  s.substr(st,max_len);
    
}

int main() {

    string s = "cbcbbc";
    cout<<MaxPalindrome(s)<<endl;


    return 0;
}