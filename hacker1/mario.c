#include<cs50.h>
#include<stdio.h>
int main (void)
{
   int height,i,j,k,l;
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
   for(i=1;i<=height;i++)
    {
     for(j=1; j<=height-i; j++)
       {
         printf(" ");
       }
     for(k=1; k<i+1;k++)
       {
         printf("#");
       }
     printf("   ");
     for(l=1; l<i+1;l++)
       {
         printf("#");
       }
     printf("\n");
   }
   return 0;
}
