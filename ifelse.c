#include <stdio.h>
int main(){
    int score=85;
    if (score>=90){
        printf("优秀\n");
    }else if (score>=60){
        printf("及格\n");
    }else{
        printf("不及格\n");
    }
    return 0;
}