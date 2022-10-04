# CWIREFRAME

Date: September 9, 2022 15:15
Difficulty: #0000-1000BeginnerLevel
Status: Done
Tags: #BasicMaths, #BasicProgramming, #Mathematics
Website: #Codechef

# ***Chef and Wire Frames***

# **Problem**

Chef has a rectangular plate of length N cm and width M *cm*. He wants to make a wireframe around the plate. The wireframe costs X rupees per cm.

Determine the cost Chef needs to incur to buy the wireframe.

### **Input Format**

- First line will contain *T*, the number of test cases. Then the test cases follow.
- Each test case consists of a single line of input, containing three space-separated integers *N*,*M*, and *X* — the length of the plate, width of the plate, and the cost of frame per cm.

### **Output Format**

For each test case, output in a single line, the price Chef needs to pay for the wireframe.

### **Constraints**

- 1 ≤ T  ≤1000
- 1 ≤*N*,*M*,*X*≤1000

### **Sample 1:**

Input :
`3
`10 10 10
`23 3 12
`1000 1000 1000`

Output :
`400
`624
`4000000`

### **Explanation:**

**Test case 1:** The total length of the frame is 2 * 10 + 2 * 10 = 40 cms. Since the cost is 1010 per cm, the total cost would be 10⋅40=400.

**Test case 2:** The total length of the frame is 2⋅23+2⋅3=52 cms. Since the cost is 1212 per cm, the total cost would be 52⋅12=624.

**Test case 3:** The total length of the frame is 2⋅1000+2⋅1000=4000 cms. Since the cost is 1000 per cm, the total cost would be 4000⋅1000=4000000.

- CODE :
    
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;
    
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int k,n,m,x;
        cin>>k;
        while(k--)
        {
            cin>>n>>m>>x;
            cout<<(2*n+2*m)*x<<endl;
        }
        return 0;
    }
    ```


### CODE REPO LINK : 
[CHECK THE CODE IN REPOSITORY](./COMPETITIVE%20CODING/CODECHEF/0000-1000%20Beginner%20Level/CWIREFRAME.cpp)