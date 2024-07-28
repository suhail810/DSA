#include <iostream>
using namespace std;

// int main() {

//     int arr[] = {1,2,4,5,6,7};
//     int n =sizeof(arr)/sizeof(arr[0]);
    
//     int sum = 0;
//     for (int i = 0; i <n; i++)
//     {
//         sum+=arr[i];
//     }
     
//     cout<<sum;
//     return 0;
// }

// // int main() {

// //     int arr[] ={1,2,3,4,5,6,7};
// //     int n = sizeof(arr)/sizeof(arr[0]);


// //      int product =1;
// //     for (int i = 0; i <n; i++)
// //     {
// //         product *= arr[i];
// //     }

// //     cout<<product;
    
// }


// int main() {

//     int arr[] = {1,2,3,4,5,6,8};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int x;
//     cout<<"Enter Target:";
//     cin>>x;
//     bool flag = false;
//     for (int i = 0; i <n; i++)
//     {
//         if(arr[i] == x) {
//             flag = true;
//             break;
//         }
//     }
//     if(flag == true) cout<<x<<" is present";
//     else cout<<x<<" not present";
    
// }



// int main() {
//     int arr[] = {10,20,30,20,-2,40,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mx= arr[0]; 
//     int mn = arr[n];
//     for (int i = 0; i <n; i++)
//     {
//         mx= max(mx,arr[i]);
//         mn = min(mn,arr[i]);
//     }
//     cout<<mx<<endl;
//     cout<<mn;
// }

// int main() {

//     int arr[] = {7,4,10,0,-20,400,1,6,8};
//     int n= sizeof(arr)/sizeof(arr[0]);

//     int mx = arr[0];
//     int smx= arr[0];
//     for (int i = 0; i <n; i++)
//     {
//         if(mx<arr[i]) mx= arr[i];
//     }

//     for (int i = 0; i <n; i++)
//     {
//         if(smx<arr[i] && arr[i] != mx) smx = arr[i];
//     }
    
//     cout<<mx<<endl;
//     cout<<smx;
// }


int main() {

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
  
  int x;
  cout<<"Element: ";
  cin>>x;

    int count;

    for (int i = 0; i <n; i++)
    {
        if(arr[i] > x) 
        count = count + 1;
    }
    count<<count;
}