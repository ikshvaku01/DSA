# SPEEDTEST

Date: September 9, 2022 20:00
Difficulty: #0000-1000BeginnerLevel
Status: Done
Tags: #BasicMaths , #BasicProgramming , #Mathematics
Website: #Codechef

# **Speed Limit Test**

# **Problem**

Alice is driving from her home to her office which is A kilometers away and will take her X hours to reach. Bob is driving from his home to his office which is B kilometers away and will take him Y hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print `EQUAL`.

### **Input Format**

- The first line will contain *T*, the number of test cases. Then the test cases follow.
- Each test case consists of a single line of input, containing four integers *A*,*X*,*B*, and *Y*, the distances and and the times taken by Alice and Bob respectively.

### **Output Format**

For each test case, if Alice is faster, print `ALICE`. Else if Bob is faster, print `BOB`. If both are equal, print `EQUAL`.

You may print each character of the string in uppercase or lowercase (for example, the strings `equal`, `equAL`, `EquAl`, and `EQUAL` will all be treated as identical).

### **Constraints**

- 1≤*T*≤1000
- 1≤*A*,*X*,*B*,*Y*≤1000

### **Sample 1:**

Input : 
`3
`20 6 20 5
`10 3 20 6
`9 1 1 1`

Output : 
`Bob
`Equal
`Alice`

### **Explanation:**

**Test case 1:** Since Bob travels the distance between his office and house in 5 hours, whereas Alice travels the same distance of 20 kms in 6 hours, `BOB` is faster.

**Test case 2:** Since Alice travels the distance of 10 km between her office and house in 3 hours and Bob travels a distance of 20 km in 6 hours, they have equal speeds.

**Test case 3:** Since Alice travels the distance of 9 km between her office and house in 1 hour and Bob travels only a distance of 1 km in the same time, `ALICE` is faster.

- CODE :
    
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int t; 
        cin>>t;
    	while(t--)
    	{
    	    float a,x,b,y;
    	    cin>>a>>x>>b>>y;
    	    float alice_speed=a/x;
    	    float bob_speed=b/y;
    	    (alice_speed>bob_speed) ? cout<<"Alice\n" : (bob_speed>alice_speed) ? cout<<"Bob\n" : cout<<"Equal\n";
    	}
        return 0;
    }
    ```

### CODE REPO LINK : 
[CHECK THE CODE IN REPOSITORY](./COMPETITIVE%20CODING/CODECHEF/0000-1000%20Beginner%20Level/SPEEDTEST.cpp)