
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, element, position;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to insert: ";
    cin >> element;

    cout << "Enter position: ";
    cin >> position;

    for(int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    cout << "Updated array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

