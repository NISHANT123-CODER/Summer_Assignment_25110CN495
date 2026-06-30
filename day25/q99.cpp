//write a program to sort names alphabetically
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int n;
    cout << "Enter size of string (number of names): ";
    cin >> n;
    cin.ignore(); 
    vector<string> str(n); 

    cout << "Enter the names:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, str[i]);
    }

    sort(str.begin(), str.end());

    cout << "\nSorted names:" << endl;
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }

    return 0;
}