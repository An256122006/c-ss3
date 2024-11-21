#include <stdio.h>
int main()
{
	
	int a, so_dao_nguoc, nghin, tram, chuc, don_vi; 
	printf ("moi nhap s? cos 4 chu so:");
    scanf ("%d",&a);
    if (a>1000 && a<9999){
	nghin = a/1000;
	tram = (a/100)%10;
	chuc = (a/10)%10;
	don_vi = a%10;
	so_dao_nguoc = don_vi*1000 + chuc*100 + tram*10 + nghin;
	printf ("so dao nguoc cac so la:%d",so_dao_nguoc);
} 
else {
	printf ("so khong hop le"); 
} 
return 0; 
}
