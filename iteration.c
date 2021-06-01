#include <stdio.h>
#include <cmath>

int main()
{
int n = 1;
double x = 1;
double F_zero = 1;
double prevF = 1;
double result_for_four = 0;


	printf("Enter x..\n");
	scanf("%lf",&x);

F_zero = x;
printf("Enter n..\n");
scanf("%i",&n);
for(int k = 0;k<=n;k++){
if(k == 0){
	prevF = F_zero; 
}
else{
	prevF = prevF*(2*k-1)*(2*k-1)*x*x/(2*k*(2*k+1));
}
printf("F%i = %lf\n",k,prevF);
result_for_four += prevF;
}
printf("result = %lf\n",result_for_four);
return 0;
}
