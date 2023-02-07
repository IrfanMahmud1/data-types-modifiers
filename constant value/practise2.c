#include<stdio.h>
#define greater(a,b) if(a>b) \
                                printf("%d is greater than %d",a,b);\
                                else \
                                    printf("%d is less than %d",a,b) ;
int main()
{
    greater(9,3);
    return 0;
}
