#include<bits/stdc++.h>
using namespace std;
int main(){
	int  n;
	cin >> n;
	int arr[n];
	for(int i=0;i<5;i++){
	    cin >> arr[i];
	}
	int p,q,r;
	cin >> p;
	cin >> q;
	cin >> r;
	int pmax[n];
	int smax[n];
	int temp;
	pmax[0]=arr[0];
	for(int i=1;i<n;i++){
	    pmax[i]=max(pmax[i-1],arr[i]);
	}
	smax[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
	    smax[i]=max(smax[i+1],arr[i]);
	}
	int ans=INT_MIN;
	for(int i=1;i<n-1;i++){
	    temp=(p*pmax[i-1]+q*arr[i]+r*smax[i+1]);
	    ans=max(temp,ans);
	}
	cout << ans;
}