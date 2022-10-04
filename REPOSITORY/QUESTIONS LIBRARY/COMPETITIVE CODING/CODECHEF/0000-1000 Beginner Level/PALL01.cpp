#include <iostream>
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