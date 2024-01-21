#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream inputFile("Lab-2/Q_1/input1.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening the input file" << endl;
        return 1;
    }

    ofstream outputFile("output1.txt");
    if (!outputFile.is_open()) {
        cerr << "Error opening the output file" << endl;
        return 1;
    }

    int m, n;
    inputFile >> n >> m;
    int *a = new int[m];
    int *b = new int[n];
    for (int i = 0; i < m; i++) inputFile >> a[i];
    for (int i = 0; i < n; i++) inputFile >> b[i];
    int *c = new int[n + m];
    inputFile.close();

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        }
        else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n) {
        c[k] = b[j];
        j++;
        k++;
    }

    for (int k = 0; k < m + n; k++) {
        cout << c[k] << " ";
        outputFile << c[k] << " ";  // Writing to the output file
    }
    outputFile << endl;

    // Don't forget to free the allocated memory
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
