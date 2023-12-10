#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    int kth=arr[s-1];
    for(int i=0;i<n;i++ ){
        if(arr[i]>0 && arr[i]>=kth){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<endl;

    return 0;
}