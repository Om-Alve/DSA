#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int n);
void mergeSort(int arr[], int s, int e);
void merge(int arr[], int s, int e);
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    printArray(arr, n);
    delete[] arr;
    return 0;
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;

    // sort left part
    mergeSort(arr, s, mid);
    // sort right part
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

// Merge two sorted arrays
void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int *left = new int[l1];
    int *right = new int[l2];
    int k = s;
    for (int i = 0; i < l1; i++)
    {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        right[i] = arr[k++];
    }
    k = s;
    int i = 0, j = 0;
    while (i < l1 && j < l2)
    {
        if (left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < l1)
        arr[k++] = left[i++];
    while (j < l2)
        arr[k++] = right[j++];
    delete[] left;
    delete[] right;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return;
}