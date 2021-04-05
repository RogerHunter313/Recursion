#include<iostream>
using namespace std;

void print (char input[]) {
    if(input[0]== '\0'){
        return;  // don't return 0, this is a void function
    }
    cout << input[0];
    print(input+1);  //char array is a pointer
}

void revPrint(char input[]) {
    if(input[0]=='\0') {
        return ;
    }
    revPrint(input + 1); //check the rest of the array first before printing, like coiling a spring
    cout << input[0];
}

int main() {
    char input[] = "abc";
    print(input);
    cout << endl;
    revPrint(input);
    return 0;
}
