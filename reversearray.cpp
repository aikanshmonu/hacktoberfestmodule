
#include<iostream>
using namespace std;

int * reverseArray(int *arr,int size);

int main()
{
    int arr[] = {1,2,3,4,5};
    int *a;
    int size = sizeof(arr)/sizeof(arr[0]);
    a = reverseArray(arr,size);
    for (int i = 0;i<size;i++){
        cout<<*(a+i)<<endl;
    }
    return 0;
}

int * reverseArray(int *arr,int size)
{
    for(int i=0; i<size/2;i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    return arr;
}
