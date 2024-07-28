#include<iostream>
using namespace std;

string binaryAnd(string s1, string s2){

  string result = "";

    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == '1' &&  s2[i]=='1'){
            result += '1';
        } else{
            result += '0';
        }
    }   
    return result;
}

string binaryOR(string s1, string s2){

    string result = "";

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '1' ||  s2[i]=='1') {
            result += '1';
        }else
        {
            result += '0';
        }
        
    }
    return result;
}

string binaryXOR(string s1, string s2){

    string result = "";

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
        {
            result +='0';
        }else {
            result +='1';
        }
        
    }
    return result;
}
int main() {


    string s1= "1101";
    string s2 = "1011";

    cout<<binaryAnd(s1,s2)<<endl;
    cout<<binaryOR(s1,s2)<<endl;
    cout<<binaryXOR(s1,s2)<<endl;
    return 0;
}