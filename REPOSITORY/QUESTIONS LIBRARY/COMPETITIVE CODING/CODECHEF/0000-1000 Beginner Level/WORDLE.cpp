#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    string s,q;
    cin>>t;
    while(t--)
    {
        cin>>s>>q;
        for(int i=0;i<5;i++)
        {
            (s[i]!=q[i]) ? cout<<"B" : cout<<"G" ;
        }
        cout<<"\n";
    }
    return 0;
}