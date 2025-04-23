#include <math.h>

int armstrong(int n) {
    int len = 0, temp = n, sum = 0, rem;
    while (temp != 0) {
        temp /= 10;
        len++;
    }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, len);
        temp /= 10;
    }
    return (sum == n);
}

int palindrome(int n){
	int rem,temp,rev=0;
	temp=n;
	while (temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp/=10;
	}
	return(rev==n);
	
}

int factorial(int n){
	int factorial=1;
   for (int i=n;i>0 ; i--){
       factorial*=i;
   }
   
}

int leap_year(int a) {
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        return 1;
    }
    return 0;
}




