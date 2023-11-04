#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x;
    scanf("%lf",&x);
    //ceil will increase the value of the float
    int ans = ceil(x);
    //floor will give the same value
    int ans =floor(x);
    //in round it will increase if value is .5 or more and it will decrese the value if value is (.01- .49) 
    int ans = round(x);
    float y;
    scanf("%f",&y);
    //it will take float value and return a float value and it will give a squre of a value.
    float ans=sqrt(y);
    //it will work with float value and it do a power b.
    
    float a,b;
    scanf("%f %f",&a,&b);

    //if want to work with int just pow(a*1.0,b*1.0)
    
    float ans = pow(a,b);

    //abs it will give you postive num;
    int aaa;
    scanf("%d",&aaa);
    int ans = abs(aaa);
    printf("%d",ans);


    
    return 0;
}