//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{   
public:

    int median(vector<vector<int>> &arr, int row, int col)
    {
    
    vector<int> ans;
    
    int count = 0;
    
    int total = row*col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while (count < total)
    {
        // code for creating the ans array 
        
        //Printing starting row
        
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;
        
        
        //Printing middle row
       
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;
        
        
        //Printing ending row
       
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;
    }
    
    sort(ans.begin(),ans.end());
    
    int n = ans.size();
    
    int start = 0;
    
    int end = n-1;
    
    int mid = start+(end-start)/2; 
    
    return ans[mid];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends
