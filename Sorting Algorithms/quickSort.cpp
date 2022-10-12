#include <iostream>
using namespace std;

void quickSort(int arr[], int s, int e);
int partition(int arr[], int s, int e);
void printArray(int arr[], int n);
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
    delete[] arr;
    return 0;
}

void quickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        // Sort left part
        quickSort(arr, s, p - 1);
        // Sort right part
        quickSort(arr, p + 1, e);
    }
    return;
}
int partition(int arr[], int s, int e)
{
    // Select pivot element
    int pivot = arr[s];
    int index = s;
    for (int i = s + 1; i <= e; i++)
    {
        if (pivot >= arr[i])
            index++;
    }
    // Assign pivot element to the right place
    swap(arr[s], arr[index]);
    // Assign other elements to their respective places
    int i = s, j = e;
    while (i < index && j > index)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (arr[i] > pivot && arr[j] < pivot)
            swap(arr[i++], arr[j--]);
    }

    return index;
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