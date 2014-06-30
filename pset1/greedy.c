#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main (void)
{
    float dollars;
    int coins=0;
    int remainder=0;
    do
    { 
        printf("O hai!  How much change is owed? \n");   
        dollars = GetFloat();
    }
    while(dollars<=0);
    int cents = (int)round(dollars*100.0);
    while(cents>0)
    {
        if(cents>=25)
        {
            remainder=cents-25;
            coins++;
            cents=remainder;
        }
        else if(cents>=10 && cents<25)
        {
            remainder=cents-10;
            coins++;
            cents=remainder;
        }
        else if(cents>=5 && cents<10)
        {
            remainder=cents-5;
            coins++;
            cents=remainder;
        }
        else if(cents>=1 &&cents <5)
        {
            remainder=cents-1;
            coins++;
            cents=remainder;
        }
    }
    printf("%d\n",coins);
    return 0;
}
