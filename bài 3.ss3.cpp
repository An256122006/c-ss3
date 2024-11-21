#include <stdio.h>
int main()
{
	int r;
	float pi=3.14, chu_vi,dien_tich;
	printf ("moi nhap gí tr? ban kinh:");
	scanf ("%d",&r);
	chu_vi = 2*pi*r;
	printf ("chu vi hinh tron la:%.2f\n",chu_vi);
	dien_tich = pi*r*r;
	printf ("dien tich hinh tron la:%.2f\n",dien_tich);
	return 0; 
 } 
