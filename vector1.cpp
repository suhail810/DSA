#include<iostream>
using namespace std;

int main() {
   
   int arr[] = {10,20,30,40,50};
   int n= sizeof(arr)/sizeof(arr[0]);

   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   int i=0, j = n-1;
   while (i<j)
   {
     swap(arr[i], arr[j]);
     i++;
     j--;
   }
   
   
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }


    return 0;
}