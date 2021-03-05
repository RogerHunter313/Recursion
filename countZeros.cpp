#include <iostream>
using namespace std;

int countZeroes(int n) {
    // base
    if (n == 0)
        return 0;

    //recursive
    int smallAns = countZeroes(n/10);

    //calculation
    int last_digit = n%10;
    if(last_digit == 0){
         cout << "last digit is zero and n = " << n << "    \t SmallAns = " << smallAns << " and returning " << 1 + smallAns << endl;
        return  ++smallAns;  // a last digit of 0
                                //the actual value of smallAns++ if the value before incrementation
    }
    else {
        cout << "last digit is not zero and n = " << n << "   \t SmallAns = " << smallAns << " and returning " << smallAns << endl;
        return smallAns;
    }


}

int main() {
    int input = 10320;

    cout << countZeroes(input);

    return 0;
}

