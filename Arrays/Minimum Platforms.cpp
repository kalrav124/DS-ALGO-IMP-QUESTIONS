int findPlatform(int arr[], int dep[], int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int platform_needed=1,finalResult=1;
    int i=1,j=0;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            platform_needed++;
            i++;
        }
        if(arr[i]>dep[j]){
            platform_needed--;
            j++;
        }
        if(finalResult<platform_needed){
            finalResult=platform_needed;
        }
    }
    return finalResult;
}
