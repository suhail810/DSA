#include<iostream>
#include<Math.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int count = 0;

    while (n)
    {
        count += n & 1;
        n>>=1;
    }
    
    int ans = pow(2,count) -1;
    cout<<ans;


    return 0;
}