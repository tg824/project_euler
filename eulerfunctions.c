#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    
   printf("%d\n", fib_sum_below_four_mil()); 
    return 0;
}

//Problem one: Sum multiples of 3 and 5 below 1000
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

//Problem two: By considering terms in the fibonacci sequence whose values do nt exceed four million, find the sum of even-valued terms
//Dear god this is slow
int fib_sum_below_four_mil()
{
    int fib_counter = 0;
    int sum = 0;
    for(;;)
    {
        int fib_number = iterative_fib(fib_counter);
        if( fib_number > 4000000 )
            return sum;
        else
        {
            if( fib_number % 2 == 0)
            {
                sum +=fib_number;
                fib_counter++;
            }
            else   
                fib_counter++;
        }   
    }
}

//Making an iterative fibonacci function, because oddly enough, a recursive one takes a bit of time
int iterative_fib(int n)
{
    int n_minus_one=1;
    int n_minus_two=1;
    int sum;
    int i = 2;

    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n == 2)
        return 1;
    else{
        for( ; i < n; i++) {
            sum = n_minus_one + n_minus_two;
            n_minus_two = n_minus_one;
            n_minus_one = sum;
        }
        return sum;
    }
}


//General fibonnaci function
int fib(unsigned int n)
{
    return n < 2 ? n : fib(n-1) + fib(n-2);
}
        

