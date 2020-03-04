#include<stdio.h>  
#include<stdlib.h>  


//递归  
int fib(int n)  
{  
    if (n == 0)  
        return 0;  
    else if (n == 1)  
        return 1;  
    return fib(n - 1) + fib(n - 2);  
}  



//非递归  
int fib(int n)  
{  
    int num1 = 0;  
    int num2 = 1;  
    for (int i = 0; i < n; i++)  
    {  
        num1 = num1 + num2;          
        num2 = num1 - num2;             
    }  
    return num1;  
}  



//test  
int main()  
{  
    int n = 0;  
    scanf("%d", &n);  
    int ret = fib(n);  
    printf("%d\n", ret);  
    system("pause");  
    return 0;  
}  
