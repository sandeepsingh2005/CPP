#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int prod = 1;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        prod = prod*digit;
        sum = sum + digit;
        n = n/10;
    }
    int ans = prod-sum;
    cout<<ans;
}

// if the value of n = 12345
// output will be 120-15
// 105
