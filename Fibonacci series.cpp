#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1;i<=n-2;i++){
     int next = a+b;
     cout<<next<<" ";
     a=b;
     b=next;
    }
    return 0;
}

// if value of n is 8
// output will be
// 0 1 1 2 3 5 8 13
