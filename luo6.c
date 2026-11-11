/*#include <stdio.h>
int main(){
    int A=2;
    int U=4;
    printf("%d %d",A+U,(10-(A+U)));
    return 0;
}*/

/*#include<stdio.h>
int main (){
    int x=14/4;
    int s=4*x;
    int n=14-s;
    printf("%d %d %d",x,s,n);
    return 0;
}*/


/*#include <stdio.h>
int main(){
    double d=500/3;
    printf("%.6f",d);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int l1=260;
    int l2=220;
    int v1=12;
    int v2=20;
    int l=l1+l2;
    int v=v1+v2;
    int t;
    printf("%d",t=l/v);
    return 0;
}*/


/*#include <stdio.h>
#include <math.h>
int main(){
    int l=9;
    int d=6;
    int area;
    area=sqrt(l*l+d*d);
    printf("%d",area);
    return 0;
}*/


/*#include <stdio.h>
int main(){
    int n=100;
    int x=10;
    int one=n+x;//用定义了的变量名
    printf("%d\n",one);//不建议在printf中直接赋值
    int y=20; 
    int two=one-20;
    printf("%d\n",two);
    int three=0;
    printf("%d\n",three);
    return 0;
}

#include <stdio.h>//变量更新版

int main() {
    int balance = 100; // 初始余额

    // 1. 存了 10 元
    balance = balance + 10; // 也可以简写为 balance += 10;
    printf("%d\n", balance);

    // 2. 花掉 20 元
    balance = balance - 20; // 也可以简写为 balance -= 20;
    printf("%d\n", balance);

    // 3. 全部取出
    balance = 0; // 或者写成 balance = balance - balance;
    printf("%d\n", balance);

    return 0;
}*/

#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
    int a,b,c; 
    int max=a;
	printf("请输入三个整数:");
    scanf("%d%d%d",&a,&b,&c);
    if(b>max){
        printf("从小到大排列为:%d,%d,%d",b,a,c);
    }
    if(c>max){

        printf("从小到大排列为:%d,%d,%d",c,a,b);
    }
	  /*********End**********/ 
       return 0;
	}
