#include <stdio.h>
#include <cmath>

double spusk(double x,int n,double &sum){
double F = 0;
if(n == 0){
	F = x;
}else{
	F = spusk(x,n-1,sum)*(2*n-1)*(2*n-1)*x*x/(2*n*(2*n+1)); }
	printf("F%i = %lf\n",n,F);
	sum += F;
return F;
}

int main()
{
int n = 1;
double x = 1;
double F_zero = 1;
double prevF = 1;
double result = 0;
double result_two = 0;
double result_three = 0;

printf("Enter x..\n");
scanf("%lf",&x);

F_zero = x;
printf("Enter n..\n");
scanf("%i",&n);
printf("Na spuske:\n");
spusk(x,n,result);
printf("result = %lf\n",result);
return 0;
}
