#include<iostream>
using namespace std;

pair<int,int> maxAndInd(int arr[], int size){

    int max_value = arr[0];
    int max_index= 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
            max_index = i;
        }
        
    }
    return make_pair(max_value,max_index);
}

int main() {

    int arr[] = {1,3,7,9,2};
    int size = sizeof(arr)/ sizeof(arr[0]);

    pair<int,int> result = maxAndInd(arr,size);

    cout<<"Max Ele: "<<result.first<< ", Index: "<<result.second <<endl;

   return 0;
}