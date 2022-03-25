#include<bits/stdc++.h>
using namespace std;
int main(){
	int  n;
	cin >> n;
	int arr[n];
	int idx;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
    cin >> idx;
    for(int i=1;i<n;i++){
    	arr[i]=max(arr[i-1],arr[i]); 
    }
    cout << arr[idx];
}