#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v, string msg) {
    cout << msg << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) cout << " | ";
    }
    cout << " |" << endl;
    cout << "=========================================================\n\n";
}

int main() {
    int arr[] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };
    vector<int> v(arr, arr + 11);

    print(v, "Isi vector awal:");

    // Sorting ASC
    sort(v.begin(), v.end());
    print(v, "Isi vector setelah di sorting:");

    // Sorting DESC
    sort(v.begin(), v.end(), greater<int>());
    print(v, "Isi vector setelah di di DESC Order:");

    return 0;
}