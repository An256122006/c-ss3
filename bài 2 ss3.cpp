#include <stdio.h>
int main() {
	int Celsius;
	float Fahrenheit; 
	printf ("moi nhap giá tri nhiet do :");
	scanf ("%d", &Celsius);
	Fahrenheit = ((9/5)*Celsius)+32;
	printf ("Fahrenheit là = %f",Fahrenheit);
	return 0; 
} 
