#include <stdio.h>
#include <cmath>

double mix(int n, double x, int i, double F_prev)
{
long double F;
long double sum = 0;
if (i == 0) F = x;
else F = F_prev*(2*i-1)*(2*i-1)*x*x/(2*i*(2*i+1));

F_prev = F;
if (i <= n) {
	sum = mix(n, x, i + 1, F_prev) + F;
	printf("F%i = %LF\n", i, F);
}
return sum;
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
printf("Na mix:\n");
printf("result = %lf\n", mix(n, x, 0, 0));
return 0;
}
