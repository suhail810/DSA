#include<iostream>
using namespace std;

// int main() {

//     string s;
//     cin>>s;

//     int up_cnt = 0;
//     int lo_cnt = 0;
    
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i]>=65 and s[i]<=97)
//             up_cnt++;
        
//         if (s[i]>=97 and s[i]<=122)
//           lo_cnt++;
//     }

//     if( lo_cnt > up_cnt ){
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i]>=65 and s[i]<=97)
//             s[i] = s[i] + 32 ;  
//     }
//     }
    
//     if (up_cnt > lo_cnt) {
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i]>=97 and s[i]<=122)
//                 s[i] = s[i] - 32;
            
//         }
        
//     }
   
    
//     cout<<s<<endl;
    

//     return 0;
// }


// int main() {

//     string M;
//     cin>>M;

//     if (M == "rock")
//     {
//         cout<<"pepper";
//     }
//     else if (M == "scissor")
//     {
//         cout<<"rock";
//     }
//     else
//     {
//         cout<<"scissor";
//     }
    
//     return 0;
// }


//  int main(){

//     string s;
//     cin>>s;

//     int i =0; 
//     int j = s.length() - 1;

//     while(i < j) {
       
//        swap(s[i],s[j]);
//        i++;
//        j--;
       
//     }

//     cout<<s<<endl;


// }

bool isPalindrome(string s) {


    int i =0;
    int j= s.length() -1;

    while (i< j)
    {
     if (s[i] != s[j])
     {
        return false;

     }

     i++;
     j--;
     
    }
    return true;
    
}

int main() {

     string s;
    // cin>>s;

    cout<<isPalindrome(s)<<endl;
}