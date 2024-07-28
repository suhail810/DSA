#include<iostream>
using namespace std;


   int max(int arr[], int size){
      

      int max_ele = arr[0];

      for (int i = 0; i < size; i++)
      {
        if (arr[i]> max_ele){
            max_ele = arr[i];
        }
        
      }
      return max_ele;
      
   }
int main() {

    int arr[] = {1,3,5,80,9};
    int size = sizeof(arr)/sizeof(arr[0]);

  cout<<max(arr,size)<<endl;


    return 0;
}