#include <stdio.h>
int main() {
	int Celsius;
	float Fahrenheit; 
	printf ("moi nhap gi� tri nhiet do :");
	scanf ("%d", &Celsius);
	Fahrenheit = ((9/5)*Celsius)+32;
	printf ("Fahrenheit l� = %f",Fahrenheit);
	return 0; 
} 
