#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream inputFile("Lab-2/Q_4/input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening the input file" << endl;
        return 1;
    }

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cerr << "Error opening the output file" << endl;
        return 1;
    }

    int n;
    cout << "Size of array is:" << endl;
    inputFile >> n;

    int a[n];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++) {
        inputFile >> a[i];
    }

    sort(a, a + n);

    if (n % 2 != 0) {
        outputFile << (double)a[n / 2] << endl;
    }

    outputFile << (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0 << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
