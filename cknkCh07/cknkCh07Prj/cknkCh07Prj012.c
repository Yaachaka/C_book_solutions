/**
 * file: cknkCh07Prj012.c
 * Author: Yaachaka
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float f_value, f_num;
    bool b_flag;
    char c_operator;

    b_flag = false;
    printf("Enter an expression: ");

    scanf("%f", &f_value);

    while((c_operator = getchar()) != '\n')
    {
        scanf("%f", &f_num);
        switch(c_operator)
        {
            case '+':
                f_value += f_num;
                break;
            case '-':
                f_value -= f_num;
                break;
            case '*':
                f_value *= f_num;
                break;
            case '/':
                if(f_num != 0)
                {
                    f_value /= f_num;
                }
                else
                {
                    printf("Divide by zero situation.\n");
                    b_flag = true;
                }
                break;
        }    // switch statement
    }    // while loop: getting operands and operators

    if(b_flag == false)
        printf("Value of expression: %.2f\n", f_value);

    return 0;
}
