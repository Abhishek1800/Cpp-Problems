//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int a, int b, int c)
    {
        if((a>c and a<b)||(a>b and a<c))
        {
            return a;
        }
        
        else if((c>a and c<b)||(c>b and c<a))
        {
            return c;
        }
        else
        {
        return b;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}
// } Driver Code Ends
