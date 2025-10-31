#include<stdio.h>
int main(){
    
    int n,a=0;
    printf("enter the number: ");
    scanf("%d",&n);
    
    for (int i=2;i<=n / 2; i++){
        if(n%i==0){
        a=1;
        break;
    }
}

if (n<=1)
printf("%d not a prime number", n);
else if(a==0)
printf("%d is a prime number",n);
else
printf("%d is not a prime number",n);

return 0;
}
