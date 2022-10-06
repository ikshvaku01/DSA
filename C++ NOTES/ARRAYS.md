# Arrays

Arrays are useful for storing collection of similar data type together. Arrays are useful when we want to store set of values in our program, then we use array of data items. 

```c++
int a[5]; // We are able to store 5 integers in continuous memory block
```

In arrays location can be accessed with the help of index. Arrays are zero indexed.

### Ways to create and Initialize array :

```c++
int a[5]; // Declaration of an array
int b[5] = {1,2,3,5,8}; // Declaration with size and initialization
int c[] = {1,5,8,6,7,136,65}; // Declaration without size with initialization
int d[5] = {1,2} // Declaration with size but partial initialization
int e[5] = {0}; // Declaration with partial initialization. All the values in the array becomes zero.
```

## Different Types of Arrays :

## Int  : 

```c++
int a[5] = {1,65,98,456,132,68};
```

## Float :

```c++
float b[5] = {1.5,65.5,12.6,98.7,74.9};
```

## Char :

```c++
char arr[4] = {'a','g','e','k'};
```

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
