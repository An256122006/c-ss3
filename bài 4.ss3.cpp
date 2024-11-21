#include <stdio.h>
int main(){
   float toan, van, anh, diemtb; 
   printf ("moi nhap diem toan:");
   scanf ("%f",&toan);
   printf ("moi nhap diem van:");
   scanf ("%f",&van);
   printf ("moi nhap diem anh:");
   scanf ("%f",&anh); 
   diemtb = (toan + van + anh) / 3;
   printf ("diem trung binh là :%.2f",diemtb); 
return 0; 
}
