#include <iostream>
using namespace std;

int sumOfArray(int a[], int n) {
    if (n==0)
        return 0;

    int smallSum = sumOfArray(a + 1, n - 1);

    return a[0] + smallSum;
}

int sumOfArray3(int a[], int n, int i) { //this just makes us avoid manipulating the array pointer
    if (i==n)
        return 0;

    int smallSum = sumOfArray3(a, n, i + 1);

    return a[i] + smallSum;
}

int sumOfArray2(int a[], int n) {
    if (n==0)
        return 0;

    int smallSum = sumOfArray2(a, n - 1);

    return a[n-1] + smallSum;
}


int main() {

    int a[] = {2,1,3,4,5};

    cout << sumOfArray3(a, 5, 0);

}
