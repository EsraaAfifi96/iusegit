#include <math.h>
using namespace std;

#define PI 3.14159265

float _tan (float num1)
{
	float result =tan(num1*PI/180);

	return result;
}

float subtract(float num1, float num2)
{
	float result = num1-num2 ;
	return result;
}


float _sin(float rate)
{
    float result,r;
    r=rate/180;
    int i=r;
    if (i-r==0)
    {
        result=0;
    }
    else
    {
        result = sin ((rate*PI)/180);
    }
    return result;
}


<<<<<<< HEAD
double _log(double x)
{
    return (log10(x));
}

double _log(double base, double x) {
    return (double)(log(x) / log(base));
}

double powerfunction(double base, double power){

	double f = base;
	for (int i = 1; i < power; i++)
		f *= base;
	return f;
}


float factorial(float n)
{

    float result=1;


     for (float i =1;i<=n;i++){
         result*=i;}

    return result;
}
