#include<stdio.h>
int recprime(int);
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	recprime(num)==1?printf("%d is a prime number",num):printf("%d is not a prime number",num);
}
int recprime(num)
{
	static int i=1;
	i++;
	if(num%i==0)
	return 0;
	else if(i<=num/2)
	return recprime(num);
	return 1;
}
