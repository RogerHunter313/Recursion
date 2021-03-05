#include <iostream>
using namespace std;

void printNums(int n) { //recurring functions need to return something
    /// Base case
    if (n == 0)
        return;  // just stops the recurring function

    // recursive case
    printNums(n - 1);   // 1 2 3 4 ..... n - 1

    cout << n << " ";
    return;  //optional, doesn't affect anything

}
//below is for descending order, it just print n for each recurring step, not really solving directly by recursion, but neat
void printNums2(int n) { //recurring functions need to return something
    /// Base case
    if (n == 0)
        return;  // just stops the recurring function, this is mandatory

    cout << n << " "; //just print the current n during each recursion step

    // recursive case
    printNums2(n - 1);   // 1 2 3 4 ..... n - 1


    return;  //optional, doesn't affect anything

}

int main() {

    int lastNum = 5;

    printNums(lastNum);
    cout << endl;
    printNums2(lastNum);

    return 0;
}
