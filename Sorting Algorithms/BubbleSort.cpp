#include <iostream>
#include <array>

using namespace std;

void bubbleSort(int arr[], int n);
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
    bubbleSort(arr, n);
    printArray(arr, n);
}
// Iterative approach
// void bubbleSort(int arr[], int n)
// {
//     bool swapped = false;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (swapped == false)
//         {
//             return;
//         }
//     }
//     return;
// }

// Recursive approach
void bubbleSort(int arr[], int n)
{
    // Base case (if there is only 1 elment or no element then the array is sorted)
    if (n == 0 || n == 1)
        return;
    // Swapping
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    // Recursive call
    return bubbleSort(arr, n - 1);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}