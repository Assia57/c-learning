#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    printf("请输入同学数量:");
    scanf("%d",&a);
    printf("请输入苹果数量:");
    scanf("%d",&b);
    printf("总共需要%d个苹果\n",a*b);
    return 0;
}