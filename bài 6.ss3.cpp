#include <stdio.h>
int main()
{
	int length, height;
	float acreage; 
	printf ("moi nhap chieu dai :");
	scanf ("%d", &length);
	printf ("moi nhap chieu cao :");
	scanf ("%d",&height);
	acreage = 0.5*length*height;
	printf ("dien t�ch h?nh tam gi�c : %.2f",acreage); 
return 0; 
 } 
