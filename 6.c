#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if ((d==b)&&(b==c))
        printf("%d",a);
    else {
        if ((a==c)&&(c==d))
            printf("%d",b);
        else {
            if ((a==b)&&(b==d))
                printf("%d",c);
            else {
                if ((a==b)&&(b==c))
                    printf("%d",d);
                else 
                    printf("error");
            }
        }
    }
}