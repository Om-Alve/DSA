// Selection Sort --> Select smallest element and put it in the right place
#include <iostream>
#include <array>

using namespace std;

void selectionSort(int arr[], int n, int s = 0);
void printArray(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
// Iterative Approach
// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[minIndex] > arr[j])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
//     return;
// }

// Recursive Approach
void selectionSort(int arr[], int n, int s)
{
    if (s > n)
        return;
    int index = s;
    for (int i = s; i < n; i++)
    {
        if (arr[index] > arr[i])
            index = i;
    }
    swap(arr[s], arr[index]);
    selectionSort(arr, n, s + 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}
