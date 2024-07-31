#include<iostream>
#include<algorithm>
using namespace std;

//STRING IS PALINDROME OR NOT

// bool isPalindrome(string s){
//       int left = 0;
//       int right = s.length() - 1;

     
//            while(left < right) {
//                if (s[left] != s[right])
//                {
//                  return false;
//                }
//                left++;
//                right--;
//            }
//       return true;
      
// }
// int main() {
  
    
//      cout<<isPalindrome("racecar")<<endl;

//     return 0;
// }


//BINARY OPERATION ON STRINGS

// string binaryAnd(string s1, string s2) {
//     string result =" ";
//     for (int i = 0; i < s1.length(); i++)
//     {
//         if(s1[i] == '1' && s2[i] =='1'){
//           result += '1';
//         }else {
//             result += '0';
//         }
//     }   
//     return result;
// }


// string binaryOr(string s1, string s2){
//   string result = " ";
//     for (int i = 0; i < s1.length(); i++)
//     {
//         if (s1[i] == '1' || s2[i]== '1')
//         {
//             result += '1';
//         }else{
//             result += '0';
//         }       
//     }  
//     return result;
// }


// string binaryXor(string s1, string s2) {
//  string result =" ";
//     for (int i = 0; i < s1.length(); i++)
//     {
//         if(s1[i] == '1' == s2[i]){
//             result += '1';
//         }else {
//             result += '0';
//         }
//     }   
//     return result;
// }
// int main() {


//   string s1 = "1101";
//  string s2 = "1011";

//  cout<<binaryAnd(s1,s2)<<endl;
//     return 0;
// }

//   string changeChar(const string &s, char ch1, char ch2) {
//     string result =s;
//      for(char &c: result)
//       {
//         if (c == ch1)
//         {
//             c = ch2;
//         }else if(c == ch2){
//             c = ch1;
//         }            
//       }
//       return result;
//   }  

// int main() {

//     string s = "apple";
//     char ch1 = 'a';
//     char ch2 = 'p';

//     cout<<changeChar(s, ch1,ch2)<<endl;
//     return 0;
// }


//CHECK WHETHER THE STRING IS ANAGRAM OR NOT


string Anagram(string s1, string s2) {

    int length1 = s1.length();
    int length2 = s2.length();

    if (s1.length() != s2.length())
    {
        return "no";
    }
     sort(s1.begin(), s2.end());
     sort(s2.begin(), s2.end());



    return s1 == s2 ? "yes" : "no";
    
}

int main() {

    string s1 = "listen";
    string s2 = "silent";

    cout<<Anagram(s1,s2)<<endl;

    return 0;
}


// void reverse_word(string &sentence){

//     string result = "";

//   vector<string> arr;

//   for (int i = 0; i < sentence.length(); ++i)
//   {
//     if(sentence[i] == ' '){
//         arr.push_back(result);
//         arr.push_back(" ");
//         result = " ";
//     } else{
//         result += sentence[i];
//     }
//   }
//   arr.push_back(result);

//    for (int i = arr.size() -1 ; i >= 0; --i)
//       {
//         cout<<arr[i];
//       }
//      cout<<endl;
  
// }

// int main() {
//     string input_str = "Welcome to code";
//     reverse_word(input_str);
//     return 0;
//  }
