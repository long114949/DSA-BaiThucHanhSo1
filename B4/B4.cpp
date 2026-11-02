#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a,d=b;
    while(a*b!=0){
        if(a>b)a%=b;
        else b%=a;
    }
    printf("%d",c*d/(a+b));
}
