#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0){
        if(b==0){
            if(c==0) printf("VSN");
            else printf("VN");
        }
        else{
            float x=(float)-c/b;
            printf("%.2f",x);
        }
    }
    else{
        int del=b*b-4*a*c;
        if(del==0)printf("x1=x2=%.2f",(float)-b/(2*a));
        else if(del<0)printf("VN");
        else printf("x1=%.2f x2=%.2f",(-b-sqrt(del))/(2*a),(-b+sqrt(del))/(2*a));
    }
}
