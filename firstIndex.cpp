#include <iostream>
using namespace std;

int firstIndex(int a[], int n, int x, int i) {
    if (i == n)  // n == 0?
        return -1;

    int smallAns = firstIndex(a, n, x, i + 1); // n does not need to be shrunk since we are
                                                    // using an iterator

    if (a[i] == x) {   //not iterating through array pointer so change a[0] to a[i]
        return i;
    }
    if (a[i] != x) {
        return smallAns;
    }

}

int main() {

    int a[] = {2,1,3,4,5};

    cout << firstIndex(a, 5, 5, 0);

}
