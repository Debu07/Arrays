// A leader is the element in array which is greater than all the 
// elements from its right. Rightmost element is always a leader.
#include <iostream>
using namespace std;

int main()
{
    int arr[]={7,10,4,10,6,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int leader=arr[n-1];
    cout<<leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>leader){
            leader=arr[i];
        cout<<arr[i]<<" ";
        }
    }
    return 0;
}
