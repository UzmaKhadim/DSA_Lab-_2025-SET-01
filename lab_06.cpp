
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, search;
    int low, high, mid;
    int found = 0;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter sorted array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> search;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == search)
        {
            cout << "Element found at position " << mid + 1;
            found = 1;
            break;
        }
        else if(arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}

