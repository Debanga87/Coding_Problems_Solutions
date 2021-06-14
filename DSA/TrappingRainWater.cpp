//Contributed by Debanga Bhuyan, B.Tech NIT Silchar

// Trapping Rain Water problem using auxiliary arrays

#include<bits/stdc++.h>
using namespace std;

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
    /*int L[n],R[n],temp=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
        L[i]=temp;
    }
    temp=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>temp){
            temp=arr[i];
        }
        R[i]=temp;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+min(L[i],R[i])-arr[i];
    }
    return ans;*/
    //two pointer efficient approach;
    int sum=0,left_max=0,right_max=0;
    int low=0,high=n-1;
    while(low<=high){
        if(arr[low]<arr[high]){
            if(arr[low]>left_max){
                left_max=arr[low];
            }else{
                sum+=left_max-arr[low];
            }
            low++;
        }else{
            if(arr[high]>right_max){
                right_max=arr[high];
            }else{
                sum+=right_max-arr[high];
            }
            high--;
        }
    }
    return sum;
}

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
