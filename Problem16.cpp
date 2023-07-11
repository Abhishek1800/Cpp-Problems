class Solution
{
public:

long long int count_merge(long long arr[],long long int l,long long int m,long long int r)
{
        long int n1=m-l+1;
        long int n2=r-m;
        long int left[n1];
        long int right[n2];
        
        for(int i=0;i<n1;i++)
        {
            left[i]=arr[l+i];
        }
        
        for(int i=0;i<n2;i++)
        {
            right[i]=arr[m+1+i];
        }
        
        long long res=0;
        int i=0,j=0,k=l;
        
        while(i<n1 && j<n2)
        {
            if(left[i]<=right[j])
            {
                arr[k]=left[i];
                i++;
            }
            
            else
            {
                arr[k]=right[j];
                j++;
                res+=n1-i;
            }
            k++;
        }
        
        while(i<n1)
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        
        while(j<n2)
        {
            arr[k]=right[j];
            j++;
            k++;
        }
        return res;
    }
    
    long long int countInv(long long arr[],long int l,long int r)
    {
        long long int res=0;
        if(l<r)
        {
            long long int m=(l+r)/2;
            res+=countInv(arr,l,m);
            res+=countInv(arr,m+1,r);
            res+=count_merge(arr,l,m,r);
        }
        return res;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int ans=countInv(arr,0,N-1);
        return ans;
    }
};
