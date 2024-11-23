/*
    Roll No: 21
    Student Name: Sayyed Adil Dastagir 
    Program Title: Program to print nth Fibonacci Number
    
    Task Given By:
        -Roll No: 33
        -Student Name: Hasnain shaikh
*/
#include <stdio.h>

//function to print nth fibonacci number

int fib(int n){
    
    //base condition
    if(n <= 1){
        return n;
    }
    int lastNum = fib(n-1);
    int secLast = fib(n-2);
    
    return lastNum + secLast;
}

int main()
{
    int x, fibNum;

    printf("\t\t\tPrint Nth Fibonacci Number:\n\n\n");
    
    printf("Enter Number: ");
    scanf("%d", &x);
    
    //calling funtion to find fibonacci number
    fibNum = fib(x);
    printf("%dth Fibonacci number is : %d", x, fibNum);
    

    return 0;
}