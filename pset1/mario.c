#include<cs50.h>
#include<stdio.h>
int main (void)
{
   int height,i,j,k;
   do
   {
     printf("\n");
     printf("Height : ");
     height= GetInt();
   }
   while((height<0) || (height>23));
   if(height==0)
     {
      exit(0);
     }
   for(i=1;i<height+1;i++)
    {
     for(j=1; j<height+1-i; j++)
       {
         printf(" ");
       }
     for(k=1; k<i+2;k++)
       {
         printf("#");
       }
     printf("\n");
   }
   return 0;
}
