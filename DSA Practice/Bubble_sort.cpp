#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the array length:-\n";
    cin>>n;
    int arr[n];
    cout<<"Enter your array elements:-\n";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your unsorted array:-\n";
    for(j=0;j<n;j++)
        cout<<arr[j]<<ends;
    cout<<endl;
    // Sorting process
    int x=1;
    while(x<=n-1){
        for(i=0;i<n-x;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        x++;
    }
    // features
    cout<<"the array is sorted:-\n";
    for( i=0;i<n;i++){
        cout<<arr[i]<<ends;
    }
}
