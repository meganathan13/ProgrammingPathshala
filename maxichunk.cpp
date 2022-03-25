#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int pmax[n];
    pmax[0]=arr[0];
    for(int i=1;i<n;i++){
        pmax[i]=max(arr[i],pmax[i-1]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==pmax[i]){
            count++;
        }
    }
    cout << count;
}