#include<iostream>
using namespace std;
int main ()
{
    int arr[5], n, i,j,temp;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
 
