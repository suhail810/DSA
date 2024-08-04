#include<iostream>
#include<vector>
using namespace std;


void Reverse_word(const string &sentence) {

    string result="";

  vector<string> arr;

  for (int i = 0; i < sentence.length(); i++)
  {
     if(sentence[i] == ' ' ){

        arr.push_back(result);
        arr.push_back(" ");
        result = " ";
     }else {
        result += sentence;
     }
  }
  

  arr.push_back(result);

  for (int i = arr.size() - 1; i >= 0; --i)
  {
     cout<<arr[i];
  }
  
  cout<<endl;

}

int main() {

    return 0;
}