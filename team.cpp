#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int mat[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    int rowcnt=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<3;j++){
            if(mat[i][j]==1) cnt++;
        }
        if(cnt>=2) rowcnt++;
    }

    cout<< rowcnt;


}