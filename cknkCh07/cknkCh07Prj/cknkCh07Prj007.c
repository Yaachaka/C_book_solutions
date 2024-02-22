/**
 * file: cknkCh07Prj007.c
 * Author: Yaachaka
 */

#include <stdio.h>

int main(void)
{
    // Variable declarations
    int num1, denom1, num2, denom2, result_num, result_denom;
    char c_operator;

    printf("Enter two fractions separated by a basic arithmetic operator (+, -, *, /) sign: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &c_operator, &num2, &denom2);

    switch(c_operator)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The sum is ");
            break;
        case '-':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The difference is ");
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("The product is ");
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            printf("The result of division is ");
            break;
        
    }    // switch statement
    
    printf("%d/%d\n", result_num, result_denom);

    return 0;
}
