#include <stdio.h>
int main(){
    int s,v;
    scanf("%d %d",&s,&v);
    int t1=(s+v-1)/v;
    int t2=t1+10;
    int t=480-t2;
    if(t<0){
        t+=1440;
    }
    int hh=t/60;
    int mm=t%60;
    printf("%02d:%02d",hh,mm);
    return 0;


}