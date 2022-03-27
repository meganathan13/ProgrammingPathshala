#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int arr[n+1];
	for(int i=1;i<=n;i++){
	  cin >> arr[i];
	}
	int l, r;
	int psum[n+1];
	psum[0]=0;
	for(int i=1;i<=n;i++){
		psum[i]=psum[i-1]+arr[i];
	}
	int sum=0;
	int total=0;
	while(m--){
		cin >> l >> r;
		sum=psum[r] - psum[l-1];
        if(sum >0){
        	total+=sum;
        }
	}
	
	cout << total;
}