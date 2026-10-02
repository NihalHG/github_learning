#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    if(b != 0) {
        printf("Division: %.2f\n", (float)a / b);
    } else {
        printf("Division: Cannot divide by zero\n");
    }
<<<<<<< HEAD
    printf("exponentiation: %.2f\n", pow(a, b));
    
=======
    printf("Modulus: %d\n", a % b);
 
>>>>>>> main
    return 0;
}