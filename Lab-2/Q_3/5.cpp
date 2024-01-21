#include<bits/stdc++.h>
using namespace std;

void SortAlgo(long long a[], long long n) {
    for (long long i = 1; i < n; i++) {
        long long key = a[i];
        long long j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void printArray(long long a[], long long n) {
    for (long long i = 0; i < n; i++)
        cout << " " << a[i];
}

int main() {
    ifstream inputFile("Lab-2/Q_3/input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening the input file" << endl;
        return 1;
    }

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cerr << "Error opening the output file" << endl;
        return 1;
    }

    long long n;
    inputFile >> n;
    long long a[n];

    for (long long i = 0; i < n; i++) {
        inputFile >> a[i];
    }

    SortAlgo(a, n);

    outputFile << "Sorted array: \n";
    printArray(a, n);

    inputFile.close();
    outputFile.close();

    return 0;
}
