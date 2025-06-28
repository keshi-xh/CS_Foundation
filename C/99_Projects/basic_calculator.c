#include <stdio.h>


int main(void)
{
    float number_one = 0;
    float number_two = 0;
    char operator;
    float result;
    int error1 ;
    int error2;
    int error3;
    int operators[] = {'+','-','*','/'};
    printf("Enter the 1st number\n");
    error1 = scanf(" %f",&number_one);
    if (error1 == 1)
    {
        printf("Enter the 2nd number\n");
    }
    error2 = scanf(" %f",&number_two);
    if (error2 == 1)
    {
        printf("Enter the operator\n");
    }
    error3 = scanf(" %c",&operator);
    
    
    
    // printf("%f \n%f \n%c\n",number_one,number_two,operator);
    if(error1 == 1 & error2 ==1  & error3 == 1)
    {
        if (operator == '+')
        {
            result = number_one + number_two;
            printf("The answer is %.2f",result);
        }
        if (operator == '-')
        {
            result = number_one - number_two;
            printf("The answer is %.2f",result);
        }
        if (operator == '*')
        {
            result = number_one * number_two;
            printf("The answer is %.2f",result);
        }
        if (operator == '%' & number_two != 0)
        {
            result = (int)number_one % (int)number_two;
            printf("The answer is %.2f",result);
        }
        if (operator == '/' & number_two != 0)
        {
            result = number_one / number_two;
            printf("The answer is %.2f",result);
        }
        else if (number_two == 0)
        {
            printf("divisible by zero is not possible");
        }
    }
    else
    {
        printf("Invalid Input\n");
        main();
    }
}










