//Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N. Find the missing element.

/*
  N = 10
  A[] = {1,2,3,4,5,6,7,8,10}
  Output: 9
  
  XOR has certain properties 
    Assume a1 ^ a2 ^ a3 ^ …^ an = a and a1 ^ a2 ^ a3 ^ …^ an-1 = b
    Then a ^ b = an
*/

int MissingNumber(vector<int>& array, int n) {
   int x1=0,x2=0;
   for(int i=0;i<n-1;i++){
       x1=x1^array[i];
   }
   for(int i=1;i<=n;i++){
       x2=x2^i;
   }
   return (x1^x2);
}
