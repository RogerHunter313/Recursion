#include <iostream>
using namespace std;

int mult(int m, int n) {
   // base case
   if (n == 0)
    return 0;
   // set prev recurring state to a current value
   int smallAns = mult(m, n-1);

   // recurring return values
   return smallAns + m;

}

int main() {
    int input = 12345;
    int m = 5;
    int n = 4;

    cout << mult(m, n);

    return 0;
}
