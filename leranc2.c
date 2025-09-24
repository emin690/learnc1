#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three number.\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b)&&(a>c)){
            printf("the biggest number is %d\n",a);

    }
    else if((b>a)&&(b>c)){
        printf("The biggest number is %d\n",b);
    }
    else {
        printf("The biggest number is %d\n",c);

    }
    float average =(a+b+c)/3.0;
    printf("Average is %.2f\n",average);
    return 0;
}

