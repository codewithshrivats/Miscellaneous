#include<stdio.h> 
 int main() 
{ 
     int s[4][3],i,j,sum,max,p; 
  for(i=0;i<4;i++) 
 {  
     printf("\nEnter marks for student no. %d:-",i+1); 
       for(j=0;j<3;j++) 
  {   
     printf("\nenter marks for subject %d: ",j+1);   
      scanf("%d",&s[i][j]); 
  } 
   }  
   printf("\n");  for(i=0;i<4;i++) 
 {  
     sum=0; 
      for(j=0;j<3;j++)
       max=s[i][0];
          p=0;   
  {    if(max<s[i][j]) 
   {     max=s[i][j];    
    p=j;    } 
       sum+=s[i][j]; 
   //printf("\t%d",s[i][j]); 
  } 
    printf("\nTotal: %d",sum);  
     printf("\nMAX: %d",max); 
       printf("\n"); 
 }  
} 
