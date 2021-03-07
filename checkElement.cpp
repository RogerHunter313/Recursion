#include<iostream>
using namespace std;

bool isPresent (int a[], int n) {
    if (n == 0)
        return false;

    if (a[0] == 5)
        return true;
    if (a[0] != 5)
        return isPresent(a+1, n-1);

}

bool isPresent4(int a[], int n, int x, int i) {
    if (i==n)
        return true;

    return isPresent4(a, n, x, i+1);
}

int main() {
    int a[] = {1, 2 ,3 ,4 ,5};

    cout << boolalpha << isPresent(a, 5) << endl;

    cout << boolalpha << isPresent4(a, 5, 5, 0) << endl;

    return 0;

}
