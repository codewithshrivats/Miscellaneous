//EXPERIMENT 02

#include <stdio.h>
#include <stdlib.h>
typedef struct readings
{
int P1;
int P2;
float x1;
float x2;
} Reading;
typedef struct support
{
float Rb;
float Ra;
float Error_Rb;
float Error_Ra;
} Support;
int main()
{
int i;
int n;
int L = 1;
printf("The length of the simply supported beam(L) is %d metres\n\n",L);
printf("Enter the total number of readings: ");
scanf("%d",&n);
Reading value[n];
Support Ana_arr[n];
Support Exp_arr[n];
printf("\n\n");
for(i=0;i<n;i++)
{
printf("Reading number #%d\n",i+1);
printf("Enter reading for Load P1: ");
scanf("%d",&value[i].P1);
printf("Enter reading for Load P2: ");
scanf("%d",&value[i].P2);
printf("Enter the reading for distance X1: ");
scanf("%f",&value[i].x1);
printf("Enter the reading for distance X2: ");
scanf("%f",&value[i].x2);
printf("\n");
Ana_arr[i].Rb = (value[i].P1*value[i].x1 + value[i].P2*value[i].x2)/L;
Ana_arr[i].Ra = (value[i].P1 + value[i].P2) - Ana_arr[i].Rb;
printf("Enter the experimental reading of Ra: ");
scanf("%f",&Exp_arr[i].Ra);
printf("Enter the experimental reading of Rb: ");
scanf("%f",&Exp_arr[i].Rb);
printf("\n");
printf("Experimental value of Ra = %.2f\n",Exp_arr[i].Ra);
printf("Analytical value of Ra = %.2f\n",Ana_arr[i].Ra);
printf("Experimental value of Rb = %.2f\n",Exp_arr[i].Rb);
printf("Analytical value of Ra = %.2f\n",Ana_arr[i].Rb);
printf("\n");
Ana_arr[i].Error_Ra = (Ana_arr[i].Ra - Exp_arr[i].Ra) * 100 / Ana_arr[i].Ra;
Ana_arr[i].Error_Rb = (Ana_arr[i].Rb - Exp_arr[i].Rb) * 100 / Ana_arr[i].Rb;
if (Ana_arr[i].Error_Ra < 0)
{
Ana_arr[i].Error_Ra = Ana_arr[i].Error_Ra * -1;
}
if (Ana_arr[i].Error_Rb < 0)
{
Ana_arr[i].Error_Rb = Ana_arr[i].Error_Rb * -1;
}
printf("Percentage error in Ra is = %.2f\n",Ana_arr[i].Error_Ra);
printf("Percentage error in Rb is = %.2f\n",Ana_arr[i].Error_Rb);
printf("\n\n");
}
return 0;
}