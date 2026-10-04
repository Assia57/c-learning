/*#include <stdio.h>
int main(){
    int t1;
    int m1;
    scanf("%d %d",&t1,&m1);
    int t2=t1/100*60+t1%100+m1;
    printf("%d",t2/60*100+t2%60);
    return 0;
}*/

#include <stdio.h>
int main(){
    int t1,m1;
    scanf("%d %d",&t1,&m1);
    int total_minutes=(t1/100)*60+(t1%100)+m1;
    int end_hour=total_minutes/60;
    int end_minute=total_minutes%60;
    printf("%d\n",end_hour*100+end_minute);
    return 0;
}