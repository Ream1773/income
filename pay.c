#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float work_hours;
    printf("Please enter the number of hours you have worked this week: \n");
    scanf("%f", &work_hours);
    float tax;
    float pay_rate;
    float net_pay;
    float sum;
    float overtime;
    float over_pay_rate;
    float over_sum;
    if(work_hours <= 40)
    {
        pay_rate = 12.0;
        sum = (pay_rate * work_hours);
    }
    else if(work_hours > 40)
    {
        pay_rate = (12.0);
        overtime = (work_hours - 40.0);
        fabs(overtime);
        over_pay_rate = (pay_rate * 1.5);
        sum = (40.0 * pay_rate);
        over_sum = (over_pay_rate * overtime + sum);
        
    }

    if(sum <= 300.0)
    {
        tax = (sum * 0.15);
    }
    else if(sum > 300.0 && sum < 450.0)
    {
        tax = (sum * 0.2);
    }
    else if(sum > 450.0)
    {
        tax =  (sum * 0.25);
    }
    float gross_pay = sum;
    net_pay = (gross_pay - tax);
    if(work_hours <= 40)
    {
        printf("In the %f hours you have worked, your gross pay should be: %2f and your net pay should be: %2f\n", work_hours, gross_pay, net_pay);
    }
    else if(work_hours > 40)
    {
        printf("In the %f hours you have worked, your gross pay should be: %2f and your net pay should be %2f\n", work_hours, over_sum, (over_sum - tax));
    }
    return 0;

}