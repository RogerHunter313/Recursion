#include <iostream>
using namespace std;

bool checkPal(int a[], int s, int e) {
    if (s > e) {
        return true;
    }
    if(a[s] == a[e]) {
        return checkPal(a, s+1, e-1);
    } else {
        return false;
    }
}


int main() {
    int a[] = {1,2,3,2,1};

    cout << boolalpha << checkPal(a, 0, 4); //last index is n-1

    return 0;
}
