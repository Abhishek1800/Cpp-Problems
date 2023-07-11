#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Pair
{
int max;
int min;
};

Pair getMinMax(int array[],int n)
{
    struct Pair minmax;
    int i;
        if(n==1)
        {
            minmax.max=array[0];
            minmax.min=array[0];
            return minmax;
        }
        if(array[0]>array[1])
        {
            minmax.max=array[0];
            minmax.min=array[1];
        }
        else
        {
            minmax.max = array[1];
            minmax.min = array[0];
        }
        for(i=2;i<n;i++)
        {
            if(array[i]>minmax.max)
                minmax.max=array[i];

            else if(array[i]<minmax.min)
                minmax.min=array[i];
        }
        return minmax;
    }
int main()
{
    int array[]={100,374,64,98,3,345,22,0};
    int array_size=8;
    struct Pair minmax=getMinMax(array,array_size);

    cout<<"Minimum element in the array is: "<<minmax.min<<endl;
    cout<<"Maximum element in the array is: "<<minmax.max<<endl;

    return 0;

}
