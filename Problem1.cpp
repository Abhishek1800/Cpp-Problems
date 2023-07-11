#include <bits/stdc++.h>
using namespace std;

void revereseArray(int array[], int start, int end)
{
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}
void printArray(int array[], int size)
{
   for (int i = 0; i < size; i++)
   cout << array[i] << " "<<endl;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    revereseArray(array, 0, n-1);
    cout << "Reverse of array is:-" << endl;
    printArray(array, n);
    return 0;
}
