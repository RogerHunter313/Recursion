#include <iostream>
using namespace std;

int sumDigits(int n) {
    // base
    if (n==0)
        return 0;

    int smallAns = sumDigits(n/10);

    return smallAns + n%10;

}

int main() {
    int input = 12345;

    cout << sumDigits(input);

    return 0;
}

