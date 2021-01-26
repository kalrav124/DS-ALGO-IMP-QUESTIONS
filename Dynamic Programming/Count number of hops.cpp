//A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top. As the answer will be large find the answer modulo 1000000007.


// function to count number of ways to reach top of the stair
long long countWays(int n){
    
    long long count[n+1]; 
  
    count[0]  = 1,  count[1] = 1,  count[2] = 2; 
  
    // Fill the count array in bottom up manner 
    for (int i=3; i<=n; i++) {
       count[i] = count[i-1] + count[i-2] + count[i-3]; 
       count[i]=count[i]%1000000007;
    }
    return count[n];
    
}
