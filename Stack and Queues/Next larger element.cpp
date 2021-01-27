/*Given an array arr[ ] of size N having distinct elements, 
the task is to find the next greater element for each element of the array in order of their appearance in the array.
If there does not exist next greater of current element, then next greater element for current element is -1.
*/

vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]<arr[i]){
            arr[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
       arr[s.top()]=-1;
        s.pop();
    }
    return arr;
}
