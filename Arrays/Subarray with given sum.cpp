#include<bits/stdc++.h>
using namespace std;
void SubarrayOfSum(int arr[],int n,int sum){
        int curr_sum,start=0,i;bool flag=false;
        for(i=0;i<n;i++){
            curr_sum +=arr[i];
        
            while (curr_sum > sum && start < i) 
            { 
                curr_sum = curr_sum - arr[start]; 
                start++; 
            } 
            if (curr_sum == sum) 
            { 
               cout<<(start+1)<<" "<<(i+1)<<"\n";
               flag=true;
               break;
            } 
        }
        if(flag==false) cout<<-1<<"\n";
    }
int main(){
    int t,n,k;cin>>t;
    while(t--){
        cin>>n>>k;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        SubarrayOfSum(arr,n,k);
    }
}
