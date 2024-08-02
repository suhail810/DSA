#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
   
   string str, newstr;

   getline(cin, newstr);
        for(char c : str){
        if(c != ' '){

            newstr += c;
        }
        
    }

    vector<char> arr(newstr.begin(), newstr.end());
    sort(arr.begin(), arr.end());

    for (auto i = arr.rbegin(); i != arr.rend(); ++i)
    {
        cout<< *i;
    }
    return 0;
}