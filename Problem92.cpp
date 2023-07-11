//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

vector<int> find(int arr[], int n , int k )

{

    vector<int> result;

     int start =0;
     int end = n-1;
     int mid = start + (end-start)/2;
     int ans = -1;

     // First Occurance

    while(start<=end)
    {
        if(arr[mid] == k)
        {
          ans = mid;
          end = mid -1;
        }
        
        if(arr[mid] > k)
        {
           end = mid - 1;
        } 

        if(arr[mid] < k)
        {
           start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    result.push_back(ans);

    // last occurence

     start =0;
     end = n-1;
     mid = start + (end-start)/2;
     ans = -1;

     while(start<=end)
     {
        if(arr[mid] == k)
        {
          ans = mid;
          start = mid+1;
        }

        if(arr[mid] > k)
        {
           end = mid - 1;
        } 

        if(arr[mid] < k)
        {
           start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    result.push_back(ans);

    return result;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
