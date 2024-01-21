#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream inputFile("Lab-2/Q_1/input3.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening the input file" << endl;
        return 1;
    }

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cerr << "Error opening the output file" << endl;
        return 1;
    }

    int m, n;
    inputFile >> m >> n;
    int a[m], b[n];

    for (int i = 0; i < m; i++) inputFile >> a[i];
    for (int j = 0; j < n; j++) inputFile >> b[j];

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            outputFile << a[i] << " ";
            i++;
            j++;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
