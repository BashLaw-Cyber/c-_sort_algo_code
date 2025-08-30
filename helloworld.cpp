#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printNonZeroElements(const int arr[], int len);
void printArray(const int arr[], int len);
void bubbleSort(int arr[], int len);

int main()
{
    int arr[11] = {1, 8, 4, 2, 3, 3, 4, 5, 6, 6, 7};
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
    printArray(arr, len);
    bubbleSort(arr, len);
    cout << endl;
    printArray(arr, len);

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
    int location;
    
}