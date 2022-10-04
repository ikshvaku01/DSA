# BROKENPHONE

Date: October 4, 2022 18:58
Difficulty: #0000-1000BeginnerLevel
Status: Done
Tags: #Basic Programming Concepts
Website: #Codechef


# ***Broken Phone***

# **Problem**

Uttu broke his phone. He can get it repaired by spending *X* rupees or he can buy a new phone by spending *Y* rupees. Uttu wants to spend as little money as possible. Find out if it is better to get the phone repaired or to buy a new phone.

### **Input Format**

- The first line contains a single integer *T*— the number of test cases. Then the test cases follow.
- The first and only line of each test case contains two space-separated integers *X* and *Y* — the cost of getting the phone repaired and the cost of buying a new phone.


### **Output Format**

For each test case,

- output REPAIR if it is better to get the phone repaired.
- output NEW PHONE if it is better to buy a new phone.
- output ANY if both the options have the same price.

You may print each character of REPAIR, NEW PHONE and ANY in uppercase or lowercase (for example, any, ANy, Any will be considered identical).

### **Constraints**

- 1 ≤ X,Y  ≤10^4
- 1≤T≤1000

### **Sample 1:**

Input :
```
3
100 1000
10000 5000
3000 3000
```

Output :
```
REPAIR
NEW PHONE
ANY
```

### **Explanation:**

**Test case 1:**  It is better to get the phone repaired since 100<1000

**Test case 2:** It is better to buy a new phone since 10000>5000

**Test case 3:** Uttu can choose either of the two options since 3000 =3000

- CODE :
    
    ```
    #include <iostream>
    using namespace std;

  int main() 
   {
	   int T;
     cin>>T;
	   while(T--)
	   {
	     int X,Y;
	     cin>>X>>Y;
	     if(X<Y)
	      cout<<"REPAIR"<<endl;
	     else if(X>Y)
	      cout<<"NEW PHONE"<<endl;
	     else
	      cout<<"ANY"<<endl;
	    }
	   return 0;
   }

    ```
### CODE REPO LINK : 
[CHECK THE CODE IN REPOSITORY](./COMPETITIVE%20CODING/CODECHEF/0000-1000%20Beginner%20Level/BROKENPHONE.cpp)
