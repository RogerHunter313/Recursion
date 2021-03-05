#include <iostream>
using namespace std;

int Power(int x, int n) {
    // base case or smallest solution we already know
    if (n == 0)
        return 1;
    if (n == 1)
        return x;

    // set any small values, or values dependent on earlier steps to an int value
    // this is any part of your I.H. that comes from an earlier step
    int smallAns1 = Power(x, n - 1);

    // calculate the current step value based on the smallAns values
    return x*smallAns1;

}

int main() {
    int x = 5;
    int n = 3;

    int ans = Power(x, n);
    cout<<ans<<endl;

    return 0;
}
