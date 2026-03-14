Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.🥰
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int n;//n này là ngày
scanf("%d",&n);
int nam=n/365;//373ngày/365=1năm
n%=365;//ví dụ 373 chia 365= dư 8 ngày
int tuan=n/7;//8 ngày/7(1 tuần)=1 tuần
n%=7;//8 chia dư 7=dư 1 ngày
printf("%d %d %d",nam,tuan,n);
return 0;
}
