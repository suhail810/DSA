/*step1 take two strings point i to 1st string & j to second string
step2 : iterate the i and j and compare i< j push_backarr[i]
        else push_back arr[j]
step3 : while loop i<arr.size() push_back(arr[i]) 
        while loop j<arr.size() push_back(arr[j])

step4 : print the array               
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> mergedSort(vector<int>arr1, vector<int>arr2){
    vector<int> merged;

    int i=0, j=0;

    while (i<arr1.size() && j<arr2.size()) {
           
           if (arr1[i] < arr2[j])
           {
               merged.push_back(arr1[i]);
               i++;
           }else{
            merged.push_back(arr2[j]);
            j++;
           }
        }
    
    while (i< arr1.size())
    {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        merged.push_back(arr2[j]);
        j++;
    }
    
    return merged;
}

int main() {

    vector<int> arr1 = {1,3,5};
    vector<int> arr2 = {2,4,6};

    vector<int> result = mergedSort(arr1,arr2);

    for(int num: result){

        cout<<num<<" ";
    }

    cout<<endl;

    return 0;
}