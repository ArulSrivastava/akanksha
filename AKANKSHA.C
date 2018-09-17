#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,filter;
scanf("%d",&n);
 char PN[n],FR[n],FC[n];
int MR[n],CC[n],SC[n],DC[n],RC[n];
for(i=0;i<n;i++)
{
printf("enter the plan name");
scanf("%s",&PN[i]);
printf("\n monthly rental");
scanf("%f",&MR[i]);
printf("\nplans with free internet");
scanf("%s",&FI[i]);
printf("\nplans with  free calls");
scanf("%s",&FC[i]);
printf("\n plans with free SMS's");
scanf("%s",&FS[i]);
prinf("\ncall charges");
scanf("%f",&CC[i]);
printf("\n SMS charges");
scanf("%f",&SC[i]);
printf("\n data charges");
scanf("%f",&DC[i]);
printf("\n roaming charges");
scanf("%f",&RC[i]);
}
for(i=0;i<n;i++)
{
printf("%s",PN[i]);
printf("\n");

}
printf("show all the plans with monthly rental less than");
scanf("%f",&filter);
for(i=0;i<n;i++)
{
if(MR[i]<filter)
{
printf("%s",PN[i]);
}
}
printf("show all the plans with free internet");
printf("%s",&FI[i]);
}
printf("show all the plans with free calls");
printf("%s",&FC[i]);

getch();
}