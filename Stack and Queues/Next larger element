
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
