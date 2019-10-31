#include <stdio.h>
#include <conio.h>
int main()
{
int uas,uts,nilaiakhir;
char indeks;
printf("==============================================================================\n");
printf("============================MENGHITUNG NILAI AKHIR============================\n");
printf("============================Nama  :Deazain Putri Irawan=======================\n");
printf("                            NPM   : 1914370112\n");
printf("==============================================================================\n");
printf("Masukkan Nilai uts:");
scanf("%d", &uts);
printf("Masukkan Nilai uas:");
scanf("%d",&uas);
nilaiakhir=( uts*40/100+ uas*60/100);
printf("Nilai Akhir Anda:%d\n\n",nilaiakhir);
if(nilaiakhir >=0){
if(nilaiakhir >=40){
if(nilaiakhir >=50){
if(nilaiakhir >=60){
if(nilaiakhir >=70){
indeks='A';

printf("Status Kelulusan : Selamat Anda LULUS\n");
}
else{
indeks ='B';

printf("Status Kelulusan : Selamat Anda LULUS\n");
}
}
else{
indeks ='C';
printf("Status Kelulusan : TIDAK LULUS\n");
}
}
else{
indeks ='D';
printf("Status Kelulusan : TIDAK LULUS\n");
}
}
else{
indeks='E';
printf("Status Kelulusan : TIDAK LULUS\n");
}
}
printf("Grade nilai anda =%c",indeks);
getch();

return 0;
}
