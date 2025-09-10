#include <iostream>
#include <vector>

using namespace std;

vector<int> find_all_indices(const int arr[], int size, int key)
{
    vector<int> found_indices;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
        {
            found_indices.push_back(i);
        }
    }

    return found_indices;
}

void print(const vector<int>& arr)
{
    if (arr.empty())
    {
        cout << "No indices found." << endl;
        return;
    }

    for (int index : arr)
    {
        cout << index << endl;
    }
}

int main()
{
    int key = 2;

    int arr1[] = {1, 2, 2, 3, 4, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Test Case 1: Searching for key " << key << " in {1, 2, 2, 3, 4, 2}" << endl;
    vector<int> result1 = find_all_indices(arr1, size1, key);
    print(result1);
    cout << endl;

    int arr2[] = {5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Test Case 2: Searching for key " << key << " in {5, 6, 7}" << endl;
    vector<int> result2 = find_all_indices(arr2, size2, key);
    print(result2);
    cout << endl;

    int arr3[] = {};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Test Case 3: Searching for key " << key << " in an empty array" << endl;
    vector<int> result3 = find_all_indices(arr3, size3, key);
    print(result3);
    cout << endl;

    return 0;
}
