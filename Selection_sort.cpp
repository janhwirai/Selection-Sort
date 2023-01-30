#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//In every iteration we are traversing the array and selecting the smallest number

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

class Solution{
    public:
        void selectionSort(int arr[],int n){
            for (int i = 0; i < n; i++)
            {
                int min_index=i;
                for (int j = i; j < n; j++)
                {
                    if(arr[j] < arr[min_index]){
                        min_index=j;
                    }
                }
                swap(&arr[i] , &arr[min_index]);
                
            }
            
        }
};

int main(){
    cout<<"Enter the size of array:- ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:- ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Solution s;
    s.selectionSort(arr,n);
    cout<<"The sorted array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}