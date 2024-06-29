#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int n;

    cout << "Enter array length: ";
    cin >> n;

    int arr[n];

    srand(time(0));
    cout << "An unsorted array" << endl;
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    int m = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int min_value = arr[min_index];

        for(int k = min_index; k > i; k--)
        {
            arr[k] = arr[k-1];
        }
        arr[i] = min_value;
    }

    cout << "selection sort" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
