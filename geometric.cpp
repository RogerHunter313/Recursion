#include <iostream>
#include <math.h>
using namespace std;

double gSum(int k) {
    // base
    if(k==0) {
        return 1;
    }

    // recursive case
    double smallAns = gSum(k-1);

    // calculations
    return smallAns + 1/pow(2,k);


}

int main() {

    int k = 3;

    cout << gSum(k);

return 0;

}
