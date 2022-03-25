#include<bits/stdc++.h>
using namespace std;
int main(){
	int  n;
	int l,r;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
    cin >> l;
    cin >> r;
    for(int i=1;i<n;i++){
    	arr[i]=arr[i-1]+arr[i];
       
    }
     if(l==0){
        	cout << arr[r];
        }
        else{
            cout << arr[r]-arr[l-1];
        }
}