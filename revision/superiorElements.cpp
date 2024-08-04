#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count=0;

    int sup=0;

    for (int i = n-1; i >=0; i--)
    {
        if (arr[i] > sup)
        {
            count++;
            sup=arr[i];
        }
        
    }

    cout<<sup;
    
    

    return 0;
}