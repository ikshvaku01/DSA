//Integer to Roman
#include<iostream>
using namespace std;
class Solution
{
    public:
    string intToRoman(int num)
    {
        string a[10] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };
        string b[10] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
        string c[10] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
        string d[4]  = { "","M","MM","MMM" };
        return d[num / 1000] + c[(num / 100) % 10] + b[(num / 10) % 10] + a[num % 10];
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution a;
    int nu;
    cin >> nu;
    cout << a.intToRoman(nu);
    return 0;
}