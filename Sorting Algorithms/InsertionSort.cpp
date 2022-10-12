#include <iostream>
using namespace std;

void printArray(int arr[], int n);
void insertionSort(int arr[], int n, int s = 1);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}

// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (temp < arr[j])
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }

void insertionSort(int arr[], int n, int s)
{
    if (s >= n)
        return;
    int j = s - 1;
    int temp = arr[s];
    for (; j >= 0; j--)
    {
        if (arr[j] > temp)
            arr[j + 1] = arr[j];
        else
        {
            break;
        }
    }
    arr[j + 1] = temp;
    insertionSort(arr, n, s + 1);
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