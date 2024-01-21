#include<bits/stdc++.h>
using namespace std;
void SortAlgo(int a[], int n,int m) {
    for (int i = m; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        
        a[j + 1] = key;
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << " " << a[i];
}

int main(){
    ifstream inputFile("Lab-2\\Q_2\\input.txt");
    if(!inputFile.is_open()){
        cerr<<"Error opening the input file"<<endl;
    }
    ofstream outputFile("output.txt");
    if(!outputFile.is_open()){
        cerr<<"Error opening the output file"<<endl;
    }

    int n,m;
    inputFile>>n>>m;
    
    int *A = new int[n];
    for(int i=0;i<n;i++){inputFile>>A[i];}
    inputFile.close();
    SortAlgo(A,m,n);

    outputFile<<"The complete sorted array : "<<endl;
    for(int i=0;i<n;i++){
        outputFile<<A[i]<<" ";
    }
    outputFile<<endl;
}