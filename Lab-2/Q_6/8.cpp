#include<bits/stdc++.h>
using namespace std;

int findMedian(int a[], int p, int r){
    sort(a + p, a + r + 1);
    int mid = (p + r) / 2;
    return a[mid];
}

int Partition(int a[], int p, int r){
    int pivot = findMedian(a, p, r);
    int i = p - 1;
    for (int j = p; j <= r - 1; j++){
        if (a[j] == pivot){
            swap(a[j], a[r]);
            break;
        }
    }
    for (int j = p; j <= r - 1; j++){
        if (a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return (i + 1);
}

void QuickSort(int a[],int p,int r){
   if(p<r){
    int x=Partition(a,p,r);
    QuickSort(a,p,x-1);
    QuickSort(a,x+1,r);
   }   
}

int main(){
    ifstream inputFile("Lab-2/Q_6/input.txt");
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
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < n; i++){
        inputFile >> a[i];
    }
    
    QuickSort(a, 0, n - 1);

    outputFile << "Sorted Array" << endl;
    for(int i = 0; i < n; i++){
        outputFile << a[i] << " ";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
