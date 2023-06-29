// EXPERIMENT 04:- Belt Friction

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14

typedef struct C1
{
    float T1;
    float T2;
    float Log;
    float Angle_contact;
    float Coff_fric;
    float Mean_fric;
} Case1;

typedef struct C2
{
    float T1;
    float T2;
    float Log;
    float Angle_contact;
    float Coff_fric;
    float Mean_fric;
} Case2;

int main()
{
    int i;
    int n;
    float mean = 0;
    printf("Enter the total number of reading to be observed: ");
    scanf("%d",&n);
    Case1 C1_reading[n];
    Case2 C2_reading[n];
    
    printf("\nCASE 01\n");
    
    for (i=0;i<n;i++)
    {
        printf("Reading #%d\n",i+1);
        C1_reading[i].Angle_contact = Pi;
        printf("Angle of contact is Pi\n");
        printf("Enter tension on tight slide (T1): ");
        scanf("%f",&C1_reading[i].T1);
        printf("Enter tension on slack side(T2): ");
        scanf("%f",&C1_reading[i].T2);
        C1_reading[i].Log = log(C1_reading[i].T2 / C1_reading[i].T1);
        C1_reading[i].Coff_fric = C1_reading[i].Log / C1_reading[i].Angle_contact;
        printf("log(T2/T1) = %.4f\n",C1_reading[i].Log);
        printf("Cofficient of static friction = %.3f\n\n",C1_reading[i].Coff_fric);
        mean = mean + C1_reading[i].Coff_fric;
    }
    printf("Mean of Cofficient of static friction is: %.3f",mean/n);
    
    printf("\n\nCASE 02\n");
    mean = 0;
    for (i=0;i<n;i++)
    {
        printf("Reading #%d\n",i+1);
        C2_reading[i].T1 = 10;
        printf("Tension on tight slide (T1) = %.2f N\n",C2_reading[i].T1);
        printf("Enter tension on slack slide (T2): ");
        scanf("%f",&C2_reading[i].T2);
        printf("Enter the angle of contact: ");
        scanf("%f",&C2_reading[i].Angle_contact);
        C2_reading[i].Log = log(C2_reading[i].T2 / C2_reading[i].T1);
        C2_reading[i].Coff_fric = C2_reading[i].Log / C2_reading[i].Angle_contact;
        printf("log(T2/T1) = %.4f\n",C2_reading[i].Log);
        printf("Cofficient of static friction = %.3f\n\n",C2_reading[i].Coff_fric);
        mean = mean + C2_reading[i].Coff_fric;
    }
    printf("Mean of Cofficient of static friction is: %f\n\n",mean/n);
    
    return 0;
}