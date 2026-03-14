hãy tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy🥰🥰

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int x1,x2,y1,y2;
scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
double kp=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
printf("%.2lf\n",kp);
return 0;
}
