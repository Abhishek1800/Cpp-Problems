//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{

private:

    void answer(int index, vector<string>&result, string str)
    {

        if(index == str.size())
        {

            result.push_back(str);

            return;

        }

        for(int i=index; i<str.size(); i++)
        {

            if(i>index && str[i]==str[i-1]) continue;

            swap(str[index], str[i]);

            answer(index+1, result, str);

            swap(str[index], str[i]);

        }

    }

public:

    vector<string>find_permutation(string Str)
    {

     vector<string>result;

     answer(0, result, Str);

     sort(result.begin(), result.end());

     return result;

 }

};

/*
class Solution
{

         vector<string> ans;
         set<string> str;

public:

     void permute(string a, int left, int right)
     {
         if( left == right)
         {
            str.insert(a);
             return;
         }

         for(int i = left; i<=right; i++)
         {
             swap(a[left], a[i]);
             
             permute(a, left+1, right);
             
             swap(a[left], a[i]);
         }
     }

vector<string>find_permutation(string s)
{

     permute(s, 0, s.size()-1);

     for(string it : str)
     {

         ans.push_back(it);

     }

   sort(ans.begin(), ans.end());

   return ans;

 }

};
*/


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
