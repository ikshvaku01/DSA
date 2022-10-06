# ARRAYS

An array is a data structure consisting of a collection of elements, each identified by at least one array index or key. An array is stored such that the position of each element can be computed from its index tuple by a mathematical formula

## DECLARATION:




## Traversing an Array:

### `Naive Approach` :
The simplest approach to solve this problem is to iterate a loop over the range
* `Time Complexity : O(N)`
* `Auxiliary Space : O(1)`
```cpp
#include<iostream>
using namespace std;
// Function to traverse the array and
// print the elements of the referenced array
void TraverseArray(int a[], int N)
{
        // Traverse the array using naive approach
        for (int i = 0; i < N; i++)
        {
                cout<< a[i] << " ";
        }
}
int main()
{
        int a[]={1,2,3,4,5};
        // N stores length of the array

        int N = 5;
        TraverseArray(a, N);
        return 0;
}
```

### Reverse elements in an array :thinking: :

* Using swap stl for exchanging the elements in the array
* **Complexity Analysis** :
* `Time Complexity: O(N)`
* `Auxiliary Space: O(1)`
```cpp
#include <iostream>

#include <algorithm>
using namespace std;
void reverseArr(int a[],int n)
{
        for (int i = 0; i < n / 2; i++)
        {
                swap(a[i], a[n - i - 1]);
                //using #include <algorithm> that contain std::swap
        }
}
int main()
{
        int a[]={12,321,2312,423,124,3423];
        reverseArr(a,6);
        for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
        return 0;
}
```
