#include<iostream>
using namespace std;

void generatePermutations(string name, int start, int end) {
    if (start == end) {
        cout << name << endl;
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(name[start], name[i]);
        generatePermutations(name, start + 1, end);
        swap(name[start], name[i]);  // Backtrack
    }
}

int main() {
    string name = "abc";
    generatePermutations(name, 0, name.length() - 1);

    return 0;
}
