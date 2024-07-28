#include<iostream>
#include<vector>
using namespace std;

// int main() {

//     vector<int> v;
     
//     int n = v.size();

//     for (int i = 0; i <n; i++)
//     {
//         for (int j = 0; i <n; i++)
//         {
//             if(v[i] == v[j] ){
//                 cout<<"duplicate";
//                 return;
//             }
//         }
        
//     }
    

//     return 0;
// }


// int main() {

//     int arr[] = {10,20,30,40,50};
//     int n = sizeof(arr)/4;

//     for (int i = 0; i <n; i++)
//     {
//         cout<<arr[i]<< " ";
//     }
//     cout<<endl;

//     int b[n];
//     for (int i = 0; i <n; i++)
//     {
//         b[i] = arr[n-1-i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//          cout<<b[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

int main() {

    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     int i = 0, j = n-1; 
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