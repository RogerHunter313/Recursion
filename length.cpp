#include <iostream>
using namespace std;

int length(char input[]) {
    if(input[0]=='\0') {
        return 0;
    }

 //   int smallLength = length(input+1); //keep iterating recursively until base case found
 //   return 1 + smallLength; //add 1 for each recursive step and return

 return 1 + length(input + 1); //same as the two lines above

}

int main() {
    char input[100];
    cin>>input;
    int l = length(input);
    cout <<l<<endl;

    return 0;
}
