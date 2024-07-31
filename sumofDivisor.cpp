#include<iostream>
using namespace std;


int sumOfDivisor(int n) {

    int total = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
          total += i;
        }
        
    }
    return total;
}


int main() {

    cout<<sumOfDivisor(6)<<endl;

    return 0;
}