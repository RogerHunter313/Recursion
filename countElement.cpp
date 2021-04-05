#include <iostream>
using namespace std;

int firstIndex(int a[], int n, int x, int i) {
    if (i == n)  // n == 0?
        return -1;

    //firstIndex(a, n, x, i + 1);  //this reverses the order, I believe because this comes before the cout statmment
                                 // and the cout statements won't execute until this hits a base case

    if (a[i] == x) {
        cout << i << " ";
    }

    firstIndex(a, n, x, i + 1);

}

void count(int a[], int n, int x, int i, int &ans) {
    if (i==n) {
        return;
    }

    if(a[i]==x) {
        ans++;
    }
    count (a, n, x, i + 1, ans );
}

int count2(int a[], int n, int x, int i) {
    if (i == n)
        return 0;

    if(a[i] == x) {
        return 1 + count(a, n, x, i + 1);
    }
    else {
        return 0 + count(a, n, x, i + 1);
    }
}

int main() {

    int a[] = {2,5,3,4,5};

    firstIndex(a, 5, 5, 0);
    cout << endl;

    int ans = 0;
    count(a, 5, 5, 0, ans);
    cout << ans << endl;
    return 0;
}
