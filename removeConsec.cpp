#include <iostream>
using namespace std;

int length(char input[]) {
    if(input[0]=='\0') {
        return 0;
    }

 return 1 + length(input + 1);
}

void removeConsecutiveDuplicates(char input[]) {
    if(input[0]=='\0') {
        return;
    }

    if(input[0] != input[1]) {
        removeConsecutiveDuplicates(input + 1);
    }
    if(input[0] == input[1]) {
        for(int i=0; input[i] != '\0'; i++){
            input[i] = input[i+1];  //put i here not 0 and 1, this is seperate from the recursive steps
        }
        removeConsecutiveDuplicates(input);

    }

}

int main() {
    char input[100];
    cin>>input;
    int l = length(input);
    cout <<l<<endl;

    removeConsecutiveDuplicates(input);
    cout << input << endl; //easy way to print an array
    cout << length(input) << endl;

    return 0;
}

