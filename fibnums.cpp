#include <iostream>
using namespace std;

int fib(int n) {
  // cout << n << endl;
    if(n < 0) return -1;
    if (n==0) return 0;
    if (n==1) return 1;  // base cases

    // recursive case

    int smallOutput1 = fib(n-1);  //just extract values from previous steps into a current variable
    int smallOutput2 = fib(n-2);
    return smallOutput1 + smallOutput2;
}

int main() {
    int n;
    cin>>n;

    int ans = fib(n);
    cout<<ans<<endl;

    return 0;
}

