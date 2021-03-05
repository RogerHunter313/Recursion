#include <iostream>
using namespace std;

int count (int n) {
    // base
    if (n==0)
        return 0;

    int smallAns = count(n/10);

    return smallAns + 1;

}

int main() {
    int input = 12345;

    cout << count(input);

    return 0;
}
