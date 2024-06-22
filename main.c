/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000

Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100

Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2^-2 = (1/2)^2 = 1/4 = 0.25

*/


#include <stdio.h>

double poww(double num, int exponent){
    if(exponent < 0){
	num = 1/num;
	exponent = exponent * - 1;
    }
    double num2 = num;
    if(exponent == 0){
	return 1;
    }
    for(int i = 1; i < exponent; i++){
	num = num2 * num;
    }
    return num;
}

int main(){
    int num = 2;

    printf("%f", poww(num, -2)); 

    return 0;
}
