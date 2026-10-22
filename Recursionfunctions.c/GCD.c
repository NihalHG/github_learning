#include<stdio.h>
int gcd(int a,int b){
    if(a%b==0)
      return b;
    return gcd(b,a%b);  
}
int main(){
    int x,y,GCD;
    printf("Enter the two numbers :\n");
    scanf("%d %d",&x,&y);
    GCD=gcd(x,y);
    printf("The GCD of numbers %d and %d is : %d",x,y,GCD);
    return 0;

}
