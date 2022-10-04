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
