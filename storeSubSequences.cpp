#include <iostream>
#include <vector>
using namespace std;

void print_subs(string input, string output, vector<string> &v ) { //pass the vector in by reference
    if(input.length() == 0) {
        v.push_back(output);
        return;
    }
    print_subs(input.substr(1), output + input[0], v);  //input is changed to a new string starting at position 1, excluding input[0]
    print_subs(input.substr(1), output, v); //including input[0]

}


int main() {
    string in;
    cin>>in;
    string out ="";

    vector<string> v;
    print_subs(in, out, v);  //dont forget to call the function

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
