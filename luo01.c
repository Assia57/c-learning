#include <stdio.h>
int main(){
    double t;
    int n;
    scanf("%lf %d",&t,&n);
    double drink=t/n;
    int cup=2*n;
    printf("%.3f\n",drink);
    printf("%d\n",cup);
    return 0; 
}