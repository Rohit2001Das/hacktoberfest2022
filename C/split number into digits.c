#include<stdio.h>

int main()
{
    int num,mod;
    scanf("%d", &num);

    //Write your code here
    while(num>0){
        mod = num%10;
        printf("%d\n",mod);
     num = num/10;
    }
   

    return 0;
}
