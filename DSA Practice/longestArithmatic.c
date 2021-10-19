#include<stdio.h>
void main(){
    int try;
    scanf("%d",&try);
    int x=0;
    while(++x<=try){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int pd=arr[0]-arr[1];
        int currlen=2;
        int reslen=2;
        for(int j=1;j<n-1;j++){
            if(arr[j]-arr[j+1]==pd){
                currlen++;
            }else{
                currlen=2;
                pd=arr[j]-arr[j+1];
            }
            if(currlen>reslen){
                reslen=currlen;
            }
        }
        printf("X is equal to %d : reslen is equal to %d",x,reslen);

    }
}
