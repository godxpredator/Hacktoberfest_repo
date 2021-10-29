#include <iostream>
using namespace std;

void d_b(char x,int n){
if(n==0)
return;
if(x=='b')
d_b(x,n/2);
cout<<n%2;
}

void d_o(char x,int n){
if (n==0)
return;
if(x=='o')
d_o(x,n/8);
cout<<n%8;
}

void d_h(char x,int n){
char ch=(n%16-10)+65;
if (n==0)
return;
if(x=='h'){
d_h(x,n/16);
if(n%16<10)
cout<<n%16;
if(n%16>=10){
cout<<ch;}
}
}


int main(){
char x;
int n;
cout<<"Enter the number and b,o,h to convert decimal to binary,octal,hexadecimal respectively: ";
cin>>n>>x;
switch(x){
case 'b': d_b(x,n);
break;
case 'o': d_o(x,n);
break;
case 'h': d_h(x,n);
break;
}
return 0;
}
