#include <iostream>
#include <vector>
using namespace std;

void printAllPos(int a[], int n, int x, int i) {
    if(i==n) {
        return;
    }

    // putting printAllPos here reverses the order, I believe because this comes before the cout statmment
    // and the cout statements won't execute until this hits a base case
    if (a[i]==x) {
        cout << i << " ";
    }
    printAllPos(a, n, x, i+1);
}

void saveAllPos(int a[], int n, int x, int i, vector<int> &ans) { //pass vector by reference so it is reflected in main, not a copy
    if (i==n) {
        return;
    }
    if(a[i] == x) {
        ans.push_back(i);
    }
    saveAllPos(a, n, x, i+1, ans);

}

void saveAllPosUsingArray(int a[], int n, int x, int i, int out[], int &j) { //pass j by reference to be used in main
    if (i==n) {
        return;
    }

    if(a[i] == x) {
        out[j] = i;
        j++;
    }
    saveAllPosUsingArray(a, n, x, i+1, out, j);

}

int main() {
    int a[] = {5,5,6,5,6,7};
    printAllPos(a, 6, 6, 0);
    cout << endl;
    int n = 6;
    vector<int> v;
    int out[10];
    int j = 0;
    saveAllPosUsingArray(a, n, 5, 0, out, j);

    for(int i = 0; i < j; i++){
        cout << out[i] << " ";
    }

    return 0;
}
