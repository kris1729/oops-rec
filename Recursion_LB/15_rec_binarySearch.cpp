#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{

    if (s > e)
        return -1;
    int mid = (s + e) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearch(arr, s, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, e, key);
}

int main()
{
    int n;
    n = 10;
    int arr[10] = {2, 5, 6, 8, 10, 23, 456, 3453, 12888, 122121};
    int key1 = 456;
    int key2 = 4;
    cout << binarySearch(arr, 0, n - 1, key1) << endl;
    cout << binarySearch(arr, 0, n - 1, key2) << endl;
}