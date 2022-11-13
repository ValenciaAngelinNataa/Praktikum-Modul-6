#include <stdio.h>
int MaxBilangan(int a1, int a2, int a3, int a4){
if (a1>a2 && a1>a3 && a1>a4){
return a1;}
else if(a2>a1 && a2>a3 && a2>a4){
return a2;}
else if (a3>a1 && a3>a2 && a3>a4){
return a3;}
else{
return a4;}}

int main(){
int a1, a2, a3, a4;
scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
int hasil = MaxBilangan(a1, a2, a3, a4);
printf("%d", hasil);
return 0;
}
