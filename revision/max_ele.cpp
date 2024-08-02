#include<iostream>
using namespace std;

int findMaxEle(int arr[], int size) {

    int max_ele = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_ele)
        {
            max_ele = arr[i];
        }
        
    }
    return max_ele;
}

int main() {

    int arr[] = {3,5,7,2,8};

     int size = sizeof(arr)/sizeof(arr[0]);

     cout<<findMaxEle(arr,size);


    return 0;
}