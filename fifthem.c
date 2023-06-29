// EXPERIMENT 01:- Law of Polygon Forces

#include<stdio.h>
#include<math.h>

struct Force
{
    float F1,F2,F3,F4;
    float Q1,Q2,Q3,Q4;
}Fp[10];

int main()
{
   int i,num,reading;
   float O1,O2,O3,O4,O5; //theta = O
   float x1_cos,x2_cos,x3_cos,x4_cos;  //cos functions
   float y1_sin,y2_sin,y3_sin,y4_sin;  //sin functions
   float F,Fx_sum ,Fy_sum ,R,Fx,Fy;    //Fx and Fy values
   printf("Enter no of reading :");
   scanf("%d",&reading);
   for(i=0;i<reading;i++)
   {
        printf("-------------------------------------------\n\n");
        printf("Entering info for Reading No : %d \n\n",i+1);
        printf("Enter Load F1 : ");    //Where F1, F2, F3, F4 are Force loads
        scanf("%f",&Fp[i].F1);
        printf("Enter Load F2 : ");
        scanf("%f",&Fp[i].F2);
        printf("Enter Load F3 : ");
        scanf("%f",&Fp[i].F3);
        printf("Enter Load F4 : ");
        scanf("%f",&Fp[i].F4);

        printf("\nEnter Force angle ( Q1 ) : ");  //where Q1, Q2, Q3, Q4 are force angles
        scanf("%f",&Fp[i].Q1);
        printf("Enter Force angle ( Q2 ) : ");
        scanf("%f",&Fp[i].Q2);
        printf("Enter Force angle ( Q3 ) : ");
        scanf("%f",&Fp[i].Q3);
        printf("Enter Force angle ( Q4 ) : ");
        scanf("%f",&Fp[i].Q4);

        O1 = Fp[i].Q1*3.142/180;
        O2 = Fp[i].Q2*3.142/180;
        O3 = Fp[i].Q3*3.142/180;
        O4 = Fp[i].Q4*3.142/180;
        
        x1_cos = Fp[i].F1 * cos(O1);
        x2_cos = Fp[i].F2 * cos(O2);
        x3_cos = Fp[i].F3 * cos(O3);
        x4_cos = Fp[i].F4 * cos(O4);
        Fx_sum = x1_cos + x2_cos + x3_cos + x4_cos;

        printf("\nThe Summation of Fx = %.4f \n ",Fx_sum);

        y1_sin = Fp[i].F1 * sin(O1);
        y2_sin = Fp[i].F2 * sin(O2);
        y3_sin = Fp[i].F3 * sin(O3);
        y4_sin = Fp[i].F4 * sin(O4);
        Fy_sum = y1_sin + y2_sin + y3_sin + y4_sin;

        printf("\nThe Summation of Fy = %.4f \n",Fy_sum);

        Fx = Fx_sum * Fx_sum;
        Fy = Fy_sum * Fy_sum;
        F = Fx + Fy;
        R = sqrt(F);
        printf("\nThe Resultant Force is = %.4f \n",R);
        if(Fx_sum > 0 && Fy_sum > 0)
        {
            printf("\nFx = %.4f ,Fy = %.4f \n",Fx_sum,Fy_sum);
            printf("\nFx_sum and Fy_sum lies in 1st quadrant \n");
        }
        if(Fx_sum < 0 && Fy_sum > 0)
        {
            printf("\nFx = %.4f ,Fy = %.4f \n",Fx_sum,Fy_sum);
            printf("\nFx_sum and Fy_sum lies in 2nd quadrant \n");
        }
        if(Fx_sum < 0 && Fy_sum < 0)
        {
            printf("\nFx = %.4f ,Fy = %.4f \n",Fx_sum,Fy_sum);
            printf("\nFx_sum and Fy_sum lies in 3rd quadrant \n");
        }
        if(Fx_sum > 0 && Fy_sum < 0)
        {
            printf("\nFx = %.4f ,Fy = %.4f \n",Fx_sum,Fy_sum);
            printf("\nFx_sum and Fy_sum lies in 4th quadrant \n");
        }
   }
}