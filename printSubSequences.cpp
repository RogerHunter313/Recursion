#include <iostream>
using namespace std;

void print_subs(string input, string output) {
    if(input.length() == 0) {
        cout << output << endl;
        return;
    }
    print_subs(input.substr(1), output);  //input is changed to a new string starting at position 1, excluding input[0]
    print_subs(input.substr(1), output + input[0]); //including input[0]

}

void print_subs2(char input[], char output[], int i) {
    if(input[0] == '\0'){
        output[i] = '\0';
        cout << output<<endl;
        return;
    }

    //excluding
    print_subs2(input + 1, output, i);
    //including
    output[i] = input[0];
    //print_subs2(input + 1, output, i); //makes output[i] always \0
    print_subs2(input + 1, output, i+1);

}

int main() {

    //string input;
    char input[100];
    cin >> input;
    //string output = "";
    //print_subs(input, output);
    char output[10];

    print_subs2(input, output, 0);

    return 0;
}
