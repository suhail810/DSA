#include<iostream>
#include<vector>
using namespace std;

int findMissingNum(vector<int> arr){

    int n = arr.size() + 1;

    int total_num = n * (n-1) / 2;
    int actual_num = 0;
    for(int num : arr){
        actual_num += num;
    }
    return total_num - actual_num;
}

int main() {

    int arr[] = {1,2,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

   cout<<findMissingNum(arr)<<endl;

    return 0;
}