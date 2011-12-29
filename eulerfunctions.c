#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    printf("%d\n", sum_below_one_thousand());
}

//Problem one
int sum_below_one_thousand()
{
    int i = 0;
    int sum = 0;
    for(;i < 1000; i++)
    {
        if( i % 3 == 0 || i % 5 == 0 )
            sum += i;
    }

    return sum;

}

