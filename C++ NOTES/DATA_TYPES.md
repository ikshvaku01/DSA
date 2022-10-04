# DATA TYPES IN C++

* Types are fundamental to any program. They tell us what our data
mean and what operations we can perform on those data.

* C++ has extensive support for types. The language defines several
primitive types (characters, integers, floating-point numbers, etc.)
and provides mechanisms that let us define our own data types.
The library uses these mechanisms to define more complicated types
such as variable-length character strings, vectors, and so on.

## Data Types can be categorised into 3 types :

1. Built-in Data Types (Primitives)
2. Derived Data Types
3. User-defined Data Types

![](https://simplesnippets.tech/wp-content/uploads/2018/03/c-datatypes.jpg)

### Primitive Built-in Types
C++ defines a set of primitive types that include the `arithmetic types` and a special
type named `void`. The arithmetic types represent characters, integers, boolean
values, and floating-point numbers. The void type has no associated values and
can be used in only a few circumstances, most commonly as the return type for
functions that do not return a value.

#### Arithmetic Types


|   DATA TYPE   |      MEANING      |    SIZE     |
| :-----------: | :---------------: | :---------: |
|     bool      |      boolean      |  undefined  |
|     char      |     character     |   8-bits    |
|    wchar_t    |     wide char     |   16-bits   |
|   char16_t    |   unicode char    |   16-bits   |
|   char32_t    |   unicode char    |   32-bits   |
|     short     |   short integer   |   16-bits   |
|      int      |      integer      |   16-bits   |
|     long      |   long-integer    |   32-bits   |
|   long long   | very-long integer |   64-bits   |
| unsigned char | single-precision  |   32-bits   |
|     float     | single-precision floating-point |   6-bits   |
|    double     | double-precision floating point | 10 bits |
|  long double  | extended-precision floating-point| 16 bits|



#### Note : Number of bits each data type takes also depends on compiler and can change based on a system being 32-bit or 64-bit.

At the most ground level even alphabets and characters are just numbers, and these numeric values to alphabets were assigned by American Standard Code for Information Interchange ASCII. Under this system A  = 65, B = 66.....Z = 90.   a = 97, b = 98... z = 122, Numeric 0 = 48 and 9 = 57.

In 8-bit system the minimum and maximum number that we can store is 8-1 = Numbers stored in 7 bits as first bit is for signed bit. So, 0000000 to 1111111 = 127 is the numbers we can store in 8 bit system which is equal to 2^7. So if we change the sign then we can have another 128 negative numbers as well. So we can store total 255 numbers in 8-bit ranging from -128 to 127.

Nowadays, we have 64-bits machines, before that there were 32-bits and 16-bits machines before that.
Mostly, in languages like C/C++ the size of integer depends upon the bit size of the machine.
If machine is 16-bits then the integer by default takes 2 bytes (1 Byte = 8 bits), if machine is 64 bits then integer takes 8 bytes and so on.
It is only applicable for integers, float always takes 4 bytes and char always takes 1 byte only, it is only the size of integer that depeneds on the bit-size of the machine.

Say an integer has 16 bits which means it will be 2^16  = 65536. So it will range from 0-65535.
But out of these 1 bit is reserved as sign bit and remaining  15 bits are used to store a number. So 2^15 = 32768.
So, in positive sign we can store numbers from 0 to 32767. Including positive and negative final range of an int of 16 bits will be -32768 to 32767.

Sign bit is used to store the negative number. Say we want to store 10. Then 4 bits from right in order of writing from left to right would be 1010 in 16 bits it changes to 0000000000001010 for negative 10 first the binary form is complemented that is inversion of 0's and 1's with respect to positive version of the number so we get 1111111111110101 and this is called 1's complement. Then 1 is added at the rightmost bit giving us 1111111111110110 and this is called 2's complement of number. In any language the negative number is stored in the 2's complement form. Binary number is complemented called 1's complement and then added +1 to get 2's complement to get negative of original number we complemented, leading to MSB or leading bit becoming 1 for negative.



## SIZE DATA TYPES :

```cpp
#include <iostream>
using namespace std;
int main()
{
    char x;
    int a;
    float b;
    long c;
    double d;
    long double e;
    cout<<"Size of char is : "<<sizeof(x)<<" bytes."<<endl;
    cout<<"Size of int is : "<<sizeof(a)<<" bytes."<<endl;
    cout<<"Size of float is : "<<sizeof(b)<<" bytes."<<endl;
    cout<<"Size of long is : "<<sizeof(c)<<" bytes."<<endl;
    cout<<"Size of double is : "<<sizeof(d)<<" bytes."<<endl;
    cout<<"Size of long double is : "<<sizeof(e)<<" bytes."<<endl;
    
    return 0;
}
```
