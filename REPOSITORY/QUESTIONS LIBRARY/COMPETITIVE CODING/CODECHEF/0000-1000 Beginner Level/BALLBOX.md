# BALLBOX

Date: October 4, 2022 19:06
Difficulty: #0000-1000BeginnerLevel
Status: Done
Tags: #Basic maths #mathematics
Website: #Codechef


# ***Balls and Boxes***

# **Problem**

You have *N* balls and *K* boxes. You want to divide the *N* balls into *K* boxes such that:

- Each box contains ≥ 1
- No two boxes contain the same number of balls.

Determine if it is possible to do so.


### **Input Format**

The only line of input contains two space separated integers *X* and *Y* - the threshold limit and the rate at which Chef is currently working at.

### **Output Format**

If Chef is prone to errors print YES, otherwise print NO.

- The first line contains a single integer *T* — the number of test cases. Then the test cases follow.
- The first and only line of each test case contains two space-separated integers *N* and *K* — the number of balls and the number of boxes respectively.


### **Constraints**

- 1 ≤ T ≤10^5
- 1 ≤ N ≤10^9
- 1 ≤ K ≤10^4

### **Sample 1:**

Input :
```
4
3 4
30 3
2 2
1 1
```

Output :
```
NO
YES
NO
YES
```

### **Explanation:**

**Test case 1:**  It is not possible to divide the *3* balls into *4* boxes such that each box contains ≥1 balls.

**Test case 2:** One way to divide the *30* balls into *3* boxes is the following:[5,9,6]

**Test case 3:**  It is not possible to divide the *2* balls into *2* boxes such that no two boxes contain the same number of balls.

**Test case 4:** We can divide *1* ball into *1* box.

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
	     int N,K;
	     cin>>N>>K;
	     if(N>=(K*(K+1)/2))
	      cout<<"YES"<<endl;
	     else
	      cout<<"NO"<<endl;
	 }
	return 0;
  } 
    ```
### CODE REPO LINK : 
[CHECK THE CODE IN REPOSITORY](./COMPETITIVE%20CODING/CODECHEF/0000-1000%20Beginner%20Level/BALLBOX.CPP)
