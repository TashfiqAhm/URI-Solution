#include<stdio.h>
#include<math.h>
int main()

{
    int x,y;
    float z;

    scanf("%d %d",&x,&y);

    if(x==1)
    z= 4.0 *y;
    if(x==2)
    z= 4.5 *y;
    if(x==3)
    z= 5.0 *y;
    if(x==4)
    z= 2.0 * y;
    if(x==5)
        z=1.5 * y;

    printf("Total: R$ %.2f\n",z);
        return 0;
}
