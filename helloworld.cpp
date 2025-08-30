#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printNonZeroElements(const int arr[], int len);
void printArray(const int arr[], int len);
void bubbleSort(int arr[], int len);
void insertionSort(int arr[], int len);
void selectionSort(int arr[], int len);

int main()
{
    int arr[11] = {1, 8, 4, 2, 3, 3, 4, 5, 6, 6, 7};
    int arr2[11] = {1, 8, 41, 2, 31, 3, 4, 55, 6, 6, 7};
    int arr3[11] = {1, 8, 42, 2, 34, 3, 4, 56, 6, 6, 7};
    const int len = sizeof(arr) / sizeof(arr[0]);
    int result[len] = {};

    vector<int> list;
    list.push_back(8);
    list.push_back(9);

    for (const int &num : list)
    {
        cout << num << " ";
    }
    cout << endl;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                result[i] = arr[i];
            }
        }
    }

    printNonZeroElements(result, len);
    printf("Array before sorting: \n");
    printArray(arr, len);
    cout << endl;
    bubbleSort(arr, len);
    printf("Array after bubble sort: \n");
    printArray(arr, len);

    cout << endl;

    printf("Array before sorting: \n");
    printArray(arr2, len);
    cout << endl;
    selectionSort(arr2, len);
    printf("Array after selection sort: \n");
    printArray(arr3, len);

    cout << endl;

    printf("Array before sorting: \n");
    printArray(arr3, len);
    cout << endl;
    insertionSort(arr3, len);
    printf("Array after insertion sort: \n");
    printArray(arr3, len);

    cout << endl;

    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    // return 0;
}

void printArray(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printNonZeroElements(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

inline int greet(int count)
{
}

void bubbleSort(int arr[], int len)
{
    int temp;
    int iteration = 0;

    for (iteration = 0; iteration < len; iteration++)
    {
        for (int j = 0; j < len - iteration - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int len)
{
    int smallestIndex;
    int location;

    for (int index = 0; index < len; index++)
    {
        smallestIndex = index;
        for (int j = index + 1; j < len; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        if (smallestIndex != index)
        {
            swap(arr[index], arr[smallestIndex]);
        }
    }
}

void insertionSort(int arr[], int len){
    for (int i = 1; i < len; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}