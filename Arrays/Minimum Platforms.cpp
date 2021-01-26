

/*
Given arrival and departure times of all trains that reach a railway station, the task is to find the minimum number of platforms required for the railway station 
so that no train waits.

Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00}
dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00}
Output: 3
*/



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
