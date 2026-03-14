Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó. Chú ý tháng 2 của năm nhuận có 29 ngày.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int t,n;
scanf("%d %d",&t,&n);
if(t>=1&&t<=12&&n>0){//ngày tháng hợp lệ
if(t==1||t==3||t==5||t==7||t==8||t==10||t==12){
printf("31");
}
else if(t==4||t==6||t==9||t==11){
printf("30");
}
else{
if(n%400==0||(n%4==0&&n%100!=0)){
printf("29");
}
else{
printf("28");
}
}
}
else{
printf("INVALID\n");
}
return 0;
}
