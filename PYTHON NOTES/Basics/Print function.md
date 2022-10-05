# Print function

Lets learn about print function

Lets display a string Hello world.

```print('Hello World')```


Inside '' (single qoutes) you can give any string to print. You can use "" (double quotes) python will consider that too.

Lets print a variable 

```
>>> a = 1
>>> print(a)
1


```
Now lets print multiple variables at a time

```
>>> a = 1
>>> b = 2
>>> print(a,b)
1 2

```

we can also print values assigned to variables like this

```

>>> a, b, _=1,2,3
>>> print(a,b)
1 2
```

Note the number of _ and number of remaining values must be equal. Otherwise 'too many values unpack error' is thrown 

```
>>> a, b, _=1,2,3,4
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
ValueError: too many values to unpack (expected 3)

```

now lets assign variables with same value

```
>>> a = b = c =1
>>> print(a,b,c)
1 1 1
```
Now lets find datatype of above variable a for that we can use type() function

```
>>> print(type(a))
<class 'int'>
```

We got datatype of variable as int. Now lets try to print different datatype for that i am assigning b with a floating point value

```
>>> b = 3.14
>>> print(type(b))
<class 'float'>

```

Now lets print a boolean type

```
>>> c = True
>>> print(type(c))
<class 'bool'>

```
###### Next
[Block Indentation](./Block%20Indentation.md)

###### Previous
[Python Variables and Constants](./Python%20Variables%20and%20Constants.md)