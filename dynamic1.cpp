/*To determine the maximum height,time of flight and horizontal range of a projectile motion*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(int)
{
float u,g=9.8,theta,T,R,h,H,rtheta;
clrscr();
printf("Enter the velocity:");
scanf("%f",&u);
printf("\nEnter angle of prijection:");
scanf("%f",&theta);
rtheta=3.1415*theta/180;
H=u*u/(2*g);
T=2*u*sin(rtheta)/g;
R=u*u*sin(2*rtheta);
h=H*pow(sin(rtheta),2);
printf("\n*************************THE RESULT*************************\n");
printf("\nThe maximum height is:%fm\n",H);
printf("\nThe time of flight is:%fs\n",T);
printf("\nThe horizontal range is:%fm\n",R);
printf("\nThe maximum vertical height for angle %f is:%fm\n",theta,h);
getch();
return;
}
