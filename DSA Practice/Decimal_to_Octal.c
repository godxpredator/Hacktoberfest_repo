#include<stdio.h>
int c=1,bin=0,rem;
//function to convert number to octal
int choctal(int num){
        if(num>0){
           rem=num%8; 
           bin+=rem*c;
           c*=10;
           choctal(num/8);
        }
    return bin;
}
//main method
void main(){
    int n,res;
    printf("Enter a Decimal number:-\n");
    scanf("%d\n",&n);
    res=choctal(n);
    printf("Octal number is:-\n%d",res);
    printf("Thank You");
}
