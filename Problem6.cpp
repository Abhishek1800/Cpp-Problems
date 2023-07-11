#include <bits/stdc++.h>
using namespace std;

/* Function prints union of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
void printUnion(int arr1[], int arr2[], int m, int n)
{
   int i = 0, j = 0;
   while (i < m && j < n) {
     if (arr1[i] < arr2[j])
      cout << arr1[i++] << " ";

     else if (arr2[j] < arr1[i])
       cout << arr2[j++] << " ";

     else {
       cout << arr2[j++] << " ";
       i++;
     }
  }

  /* Print remaining elements of the larger array */
  while (i < m)
   cout << arr1[i++] << " ";

  while (j < n)
   cout << arr2[j++] << " ";
}

void printIntersection(int arr1[], int arr2[], int m, int n)
{
   int i = 0, j = 0;
   while (i < m && j < n) {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else /* if arr1[i] == arr2[j] */
    {
       cout << arr2[j] << " ";
       i++;
       j++;
     }
 }
}
/* Driver program to test above function */
   int main()
 {
    int m, n;
    cin>>m;

   int arr1[m];

   for(int i=0; i<m; i++)
    cin>>arr1[i];

   cin>>n;

   int arr2[n];

   for(int i=0; i<n; i++)
    cin>>arr2[i];

   // Function calling
   cout<<"Union : ";
   printUnion(arr1, arr2, m, n);


   cout<<"\nInteraction ";
   printIntersection(arr1, arr2, m, n);

   return 0;
}
