#include<stdio.h>

int getSum(int num, int sum){
    
    if(num == 0)
        return sum;

    sum += num % 10;

    return getSum(num/10, sum);
}
int main ()
{
    int num, sum = 0;
    num = 6789;
    printf("The number is: %d\n",num);   
    printf("Sum: %d\n",getSum(num, sum));
 
    return 0;

}
