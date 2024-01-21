#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream inputFile("Lab-2/Q_5/input.txt");
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
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++) {
        inputFile >> a[i];
    }

    int smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    outputFile << "Smallest element is: " << smallest << endl;

    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < second_smallest && a[i] > smallest) {
            second_smallest = a[i];
        }
    }

    outputFile << "Second smallest element is: " << second_smallest << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
