#include<iostream>
#include<string.h>
using namespace std;

#include<bits/stdc++.h>

class Solution 
{
public:
       bool isstring(string a1)
       {
           string a2=a1;
           
           reverse(a1.begin(),a1.end());
           
           if(a1==a2)
           {
               return true;
               
           }
           return false;
           
       }
       int PalinArray(int a[], int n)
       {
           for(int i=0;i<n;i++)
           {
               string c=to_string(a[i]);
               
               if(isstring(c)==false)
               {
                   return 0;
                   
               }
           }
           return 1;
       }
};

/*
#include<bits/stdc++.h>

class Solution 
{
public:
     int PalinArray(int a[], int n)
     {
       for(int i=0;i<n;i++)
        {
           int ans=0;
         
           int temp=a[i];
         
           while(temp>0)
            {
              int r=temp%10;
             
              temp/=10;
             
              ans=(ans*10)+r;
            }
         
         if(ans!=a[i])
         return 0;
     }
     return 1;
    }
};
*/

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
