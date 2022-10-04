# PALL01

Date: September 13, 2022 20:30
Difficulty: #0000-1000BeginnerLevel
Status: Done
Tags: #Algorithms, #BasicMaths, #DataStructures, #Implementation, #Mathematics, #String
Website: #Codechef

# **The Block Game**

# **Problem**

The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers *palindrome*.

Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not.

### **Input**

The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

### **Output**

For each input output "wins" if the number is a palindrome and "loses" if not, in a new line.

### **Constraints**

1<=T<=20

1<=N<=20000

### **Sample 1:**

### Input :
`3
`331
`666
`343`

### Output :
`loses
`wins
`wins`

- CODE :
    
    ```cpp
    #include<iostream>
    using namespace std;
    int checkPalindrome(string str)
    {
        for (int i = 0; i < (str.length()) / 2; i++) 
        {
            if (str[i] != str[str.length() - i - 1])
                return false;
        }
        return true;
    }
    
    int main() 
    {
    	
    	int k;
    	cin>>k;
    	while(k--)
    	{
    	    string s;
    	    cin>>s;
    	    (checkPalindrome(s) == true) ? cout << "wins\n" : cout<<"loses\n";
    	}
    	return 0;
    }
    ```

### CODE REPO LINK : 
[CHECK THE CODE IN REPOSITORY](./COMPETITIVE%20CODING/CODECHEF/0000-1000%20Beginner%20Level/PALL01.cpp)