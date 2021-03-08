#include <iostream>
using namespace std;

int firstIndex(int a[], int n, int x, int i) {
    if (i == 0)  // n == 0?
        return -1;

    int smallAns = firstIndex(a, n, x, i - 1); // n does not need to be shrunk since we are
                                                    // using an iterator

    if (a[i] == x) {   //not iterating through array pointer so change a[0] to a[i]
        return i;
    }
    if (a[i] != x) {
        return smallAns;
    }

}

int lastIndex2(int a[], int n, int x) { //without the i iterator, end to start
    if(n==0) {
        return -1;
    }

    if (a[n-1]==x) {
        return n-1;
    }
    return lastIndex(a, n-1, x);
}

int lastIndex3(int a, int n, int x, int i) {
    if(i == n) {
        return -1;
    }

    int indexInRem = lastIndex3(a, n, x, i+ 1);
    if(indexInRem == -1) {
        if(a[i] == x) {
            return i;
        }else{
        return -1;
        }
    }
}

int main() {

    int a[] = {2,5,3,3,5};

    cout << firstIndex(a, 5, 3, 5);

}

