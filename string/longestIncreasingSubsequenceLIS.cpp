
#include<bits/stdc++.h>
using namespace std;
int lis(int *ar, int n) {
    int *dp=new int[n];
    dp[0]=1;
    for(int i=1;i<n;i++){
        dp[i]=1;
        for(int j=i-1;j>=0;j--){
            if(ar[j]<ar[i]) dp[i]=max(dp[i],dp[j]+1); 
        }
    }  
    return *max_element(dp,dp+n);  
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    cout<<lis(ar,n);
 return 0;
}
