
// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    int global_max=INT_MIN,max_ending_here=0;
    for(int i=0;i<n;i++){
        max_ending_here+=arr[i];
        if(global_max<max_ending_here) {
            global_max=max_ending_here;
        }
        if(max_ending_here<0) max_ending_here=0;
    }
    return global_max;
    
}
