// write a program to merge two sorted arrays
#include <iostream>
#include <vector> 

using namespace std;

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter the elements of first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i]; 
    }
    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    vector<int> mergedArr(n + m);
    int i = 0; 
    int j = 0; 
    int k = 0; 

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged array is: ";
    for (int idx = 0; idx < n + m; idx++) {
        cout << mergedArr[idx] << " ";
    }
    cout << endl;

    return 0;
}