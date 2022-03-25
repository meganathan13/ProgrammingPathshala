#include<bits/stdc++.h>
using namespace std;
int main(){
	int  n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	
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
	int h3=0;
	int ans=0;
	for(int i=1;i<n-1;i++){
	  int height1=pmax[i-1];
	  int height2=smax[i+1];
	  h3=min(height1,height2);
	  if(h3>arr[i]){
	  	ans+=(h3-arr[i]);
	  }  
	}
	cout << ans;
}