#include <stdio.h>
int main(){
    int sum,i,num;
    sum=0;
    num=0;
    while (num!=40)
{
    printf("请输入第%d个数字：",num+1);
    scanf("%d",&i);
    sum=sum+i;
    num++;
}
     printf("%d\n",sum);
     return 0;
}