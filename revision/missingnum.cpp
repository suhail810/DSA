#include<iostream>
#include<vector>
using namespace std;


int missingNum(vector<int> arr) {

    int n = arr.size() + 1;
    int total_sum = n *(n + 1)/2;
    int actual_sum = 0;
    for(int num: arr) {
        actual_sum += num;
    }

    return total_sum - actual_sum;
}


int main() {

    vector<int> arr = {1,2,4,5,6};

    cout<<missingNum(arr)<<endl;

    return 0;
}