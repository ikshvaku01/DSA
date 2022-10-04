# Functions

The functions in `C++` are the block of code that takes one or more (or Zero) number of arguments of same or different types and returns some output. Basically functions are the block of code that perfom some actions on the global data structures or the one that it takes as input.

## Function Declaration
Below is the simple code snippet to declare the function before defining it.

```cpp
#include <iostream>
using namespace std;

int sum(int a, int b); //Function declaration 

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"Sum of "<<a<<" and "<<b<<" is : "<<sum(a,b)<<endl;
  return 0;
}

/* Function definition */
int sum(int a,int b){ 
  return (a+b);
}

```
