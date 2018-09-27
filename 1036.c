#include<stdio.h>
#include<math.h>
int main()


{
    float a,b,c,d,e,f,g,h;


    scanf("%f %f %f",&a,&b,&c);

    if((b*b-4*a*c)<0 || a==0)

        printf("Impossivel calcular\n");

    else
    {
        d = sqrt(b*b-4*a*c);

        e= (-b + d)/(2*a);
        f= (-b - d)/(2*a);

        printf("R1 = %.5f\n",e);
        printf("R2 = %.5f\n",f);



    }

    return 0;

}
