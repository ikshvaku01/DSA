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
