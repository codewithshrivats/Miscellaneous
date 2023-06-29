#include<stdio.h>
#include<stdlib.h>
struct bankdetails
{
int id;
char contact[10];
int sal;
char name[25],bankname[50],branchname[50];
}employees[5];
int main()
{
int n;
printf("Enter the number of employees: ");
scanf("%d",&n);
FILE *fptr;
fptr=fopen("BANK.txt","a+");
printf("* BANK EMPLOYEE INFORMATION * \n");
for(int i=0; i<n; i++)
{
printf("Employee %d:- \n",i+1);
printf("Name: \n");
scanf("%s",employees[i].name);
fprintf(fptr,"\nName: %s",employees[i].name);
printf("Id: \n");
scanf("%d",&employees[i].id);
fprintf(fptr,"\nID: %d",employees[i].id);
printf("Bank Name: \n");
scanf("%s",employees[i].bankname);
fprintf(fptr,"\nBank Name: %s",employees[i].bankname);
printf("Branch Name: \n");
scanf("%s",employees[i].branchname);
fprintf(fptr,"\nBranch name:%s",employees[i].branchname);
printf("Salary: \n");
scanf("%d",&employees[i].sal);
fprintf(fptr,"\n salary:%d",employees[i].sal);
printf("Contact: \n");
scanf("%s",employees[i].contact);
fprintf(fptr,"\nContact:%s",employees[i].contact);
printf("\n");
}
fclose(fptr);
}
