#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int N;
    cin>> N;


    while (N>9)
    {
        if (N%2 !=0)
        {
            N= floor((N/2.0));
        }else{
            N = floor((N-2)/2);
        }
        
    }
    cout<<N<<endl;
    

    return 0;

}