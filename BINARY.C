#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int m =((low+high)/2);
    while (key!=arr[m]&&low <= high) {
        if (key>arr[m])
        {
            low=m+1;
        }
        if (key<arr[m])
        {
            high=m-1;
        }
        m =(low+high)/2;
       
    }
    if(low<=high){
        return(m);
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = binarySearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
