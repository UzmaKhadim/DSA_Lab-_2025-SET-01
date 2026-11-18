
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, position;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position to delete: ";
    cin >> position;

    for(int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Updated array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

