#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	long long int p,q,r;
	cin >> n >> p >> q >>r ;
	long long int arr[n];
	for(int i=0;i<n;i++){
	cin >> arr[i];
	}
	
	
	long long int pmax[n];
	pmax[0]=p*arr[0];
	for(int i=1;i<n;i++){
	pmax[i]=max(pmax[i-1],p*arr[i]);
	}
	long long int smax[n];
	smax[n-1]=r*arr[n-1];
	for(int i=n-2;i>=0;i--){
	smax[i]=max(smax[i+1],r*arr[i]);
	}
	long long int sum=LLONG_MIN;
	long long int num=LLONG_MIN;
	for(int i=0;i<n;i++){
	  sum=(pmax[i]+q*arr[i]+smax[i]);
	  num=max(sum,num);
	}
	cout << num;
}
