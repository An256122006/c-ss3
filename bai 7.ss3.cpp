#include <stdio.h> 
int main()
{
	int a, tong, nghin, tram, chuc, don_vi; 
	printf ("moi nhap s? cos 4 chu so:");
    scanf ("%d",&a);
    if (a>1000 && a<9999){
	nghin = a/1000;
	tram = (a/100)%10;
	chuc = (a/10)%10;
	don_vi = a%10;
	tong = nghin + chuc + tram + don_vi;
	printf ("tong cac so la:%d",tong);
} else {
	printf ("so khong hop le"); 
} 
	return 0; 
 } 
