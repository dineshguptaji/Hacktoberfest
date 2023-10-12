#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n <= 0) {
        cout << "Array is empty." << endl;
        return 0;
    }

    int f, l;
    f = arr[0];
    l = arr[n - 1];

    cout << "First element: " << f << endl;
    cout << "Last element: " << l << endl;

    return 0;
}
