# CBSPEED

Date: October 4, 2022 13:58
Difficulty: #0000-1000BeginnerLevel
Status: Done
Tags: #Basic Programming Concepts
Website: #Codechef


# ***Chef and Brain Speed***

# **Problem**

In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of *X* bits per second above which his calculations are prone to errors. If Chef is currently working at *Y* bits per second, is he prone to errors?

If Chef is prone to errors print YES, otherwise print NO.

### **Input Format**

The only line of input contains two space separated integers *X* and *Y* - the threshold limit and the rate at which Chef is currently working at.

### **Output Format**

If Chef is prone to errors print YES, otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

### **Constraints**

- 1 ≤ X,Y  ≤100

### **Sample 1:**

Input :
```
7 9

6 6

31 53 

53 8
```

Output :
```
YES

NO

YES

NO
```

### **Explanation:**

**Test case 1:** Chef's current brain speed of *9* bps is greater than the threshold of *7* bps, hence Chef is prone to errors.

**Test case 2:** Chef's current brain speed of *6* bps is not greater than the threshold of *6* bps, hence Chef is not prone to errors.

**Test case 3:** Chef's current brain speed of *53* bps is greater than the threshold of *31* bps, hence Chef is prone to errors.

**Test case 4:** Chef's current brain speed of *8* bps is not greater than the threshold of *53* bps, hence Chef is not prone to errors.

- CODE :
    
    ```
    #include <iostream>
    using namespace std;

   int main() 
    {
    	int x,y;
    	cin>>x>>y;
	    if(x>=y)
	     cout<<"NO"<<endl;
	    else
	     cout<<"YES"<<endl;
	    return 0;
    }
    
    ```
### CODE REPO LINK : 
[CHECK THE CODE IN REPOSITORY](./COMPETITIVE%20CODING/CODECHEF/0000-1000%20Beginner%20Level/CBSPEED.cpp)
