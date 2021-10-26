#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array length : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(a,n);
    printf("sorted array :");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
    

int selectionsort(int arr[],int n){
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
  
