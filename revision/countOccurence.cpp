#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int,int> countOccurrences(int arr[], int size){

    unordered_map<int,int> counts;

    for (int i = 0; i < size; i++)
    {
        if (counts.find(arr[i]) != counts.end())
        {
            counts[arr[i]] += 1;
        }else {
            counts[arr[i]] = 1;
        }
        
    }
    return counts;
    
}

int main() {

    return 0;
}