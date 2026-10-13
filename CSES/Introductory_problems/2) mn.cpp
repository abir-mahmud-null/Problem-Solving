#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); // speeds up the code
	cin.tie(nullptr);					  // speeds up the code must memorize it is free time
	long long n;
	cin>>n;
	
	long long sum1 = n*(n+1)/2;
	long long sum2 = 0;
	
	for(long long i=0;i<n-1;i++){
		long long x;
		cin>>x;
		sum2 += x;
		}
		
		cout<<sum1-sum2<<"\n";
		return 0;
	}
