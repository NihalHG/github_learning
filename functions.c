#include<stdio.h>
int isprime(int);
int iseven(int);
int reverse(int);
int ispalindrome(int);
int numberofdigits(int);
int digitsum(int);
int main(){
    int n,choice,x;
    
    while(1){
        printf("\n\nEnter the number:\n");
        scanf("%d",&n);
        printf("Enter your choice: 1 - check wheter number is prime or not ,\n" 
            "2 - even or odd ,\n"
            "3-reverse the number,\n"
            "4-palindrome or not,\n"
            "5-find number of digits,\n"
            "6-sum of digits and enter -1 to stop\n");
        scanf("%d",&choice);
        if(n==-1){
            printf("\n\nThank you\n");
            break;
        }
        if(choice==1){
            if(isprime(n))
              printf("The number %d is prime number.\n",n);
            else
              printf("The number %d is not a prime number.\n",n);  
        }
        else if(choice==2){
            if(iseven(n))
                 printf("The number %d is even number.\n",n);
            else
                 printf("THe number %d is odd number.\n",n);     
        }
        else if(choice==3){
            x=reverse(n);
            printf("The number %d after reversing= %d\n",n,x);
        }
        else if(choice==4){
            if(ispalindrome(n))
              printf("The number %d is a  palindrome.\n",n);
            else
              printf("The number %d is not a palindrome.\n",n);  
        }
        else if(choice==5){
            x=numberofdigits(n);
            printf("The number of digits in %d is : %d\n",n,x);
        }
        else if(choice==6){
            x=digitsum(n);
            printf("The sum of digits of %d is : %d \n");
        }
        else
            printf("wrong input");
    }        

         return 0;
}
int isprime(int a){
    if(a<2)
      return 0;
    int r;  
    for(r=2;r<=a/2;r++){
        if(a%r==0){
            return 0;
        }
    }
    return 1;  
}

int iseven(int a){
    if(a%2==0)
       return 1;
    return 0;   
}

int reverse(int a){
    int sum=0,y,r;
    y=a;
    while(y!=0){
        r=y%10;
        y=y/10;
        sum=sum*10+r;
    }
    return sum;
}

int ispalindrome(int a){
   int x;
   x=reverse(a);
   if(x==a)
    return 1;
   return 0;
}

int numberofdigits(int a){
    int digits=0,x;
    x=a;
    if(x==0)
      return 1;
    while(x!=0){
          digits++;
          x=x/10; }
    return digits;      
}

int digitsum(int a){
    int x,sum=0;
    x=a;
    while(x!=0){
        sum=sum+x%10;
        x=x/10;
    }
    return sum;
}