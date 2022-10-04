# STRINGS

Strings are considered a data type in general and are typically represented as arrays of bytes (or words) that store a sequence of characters. Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a special character ‘\0

## DECLARATION:




## Traversing a String:
### `Naive Approach` :
The simplest approach to solve this problem is to iterate a loop over the range `[0, N – 1]`, where N denotes the length of the string, using variable i and print the value of `str[i]`.
* `Time Complexity : O(N)`
* `Auxiliary Space : O(1)`
```cpp
#include<iostream>
using namespace std;
// Function to traverse the string and
// print the characters of the refernced string
void TraverseString(string &str, int N)
{
	// Traverse the string using naive approach
	for (int i = 0; i < N; i++) 
	{
		cout<< str[i]<< " ";
	}	
}
int main()
{
	string str = "LOVEYOUTHREETHOUSAND";	
	// N stores length of the string
	int N = str.length();
	TraverseString(str, N);
	return 0;
} 
```

### Reverse a string :thinking: :

* Using swap stl for exchanging the characters in the string 
* **Complexity Analysis** : 
* `Time Complexity: O(N)`
* `Auxiliary Space: O(1)`
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
void reverseStr(string &str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
	{
		swap(str[i], str[n - i - 1]);
		//using #include <algorithm> that contain std::swap
	}
}
int main()
{
	string str = "gffg";
	reverseStr(str);
	cout << str;
	return 0;
}
```