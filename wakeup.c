#include <stdio.h>
#include <cmath>

double wakeup(double x, double F_prev, double sum, int n, int i){
double F = F_prev*(2*i-1)*(2*i-1)*x*x/(2*i*(2*i+1));
double result;
if(i==1) printf("F0 = %lf\n",F_prev);
printf("F%i = %lf\n",i,F);
sum += F;
if(i == n) result = sum;
else {
	i++;
	result = wakeup(x, F, sum, n, i);
}
return result;
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
printf("Na pod\'eme:\n");
result_two = wakeup(x,F_zero,F_zero,n,1);
printf("result = %lf\n",result_two);
return 0;
