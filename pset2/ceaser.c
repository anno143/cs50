#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main ( int argc, string argv[] )
{
    if(argc==1)
    {
        printf("%s",argv[0]);
        return 1;
    }
    else if (argc==2)
    {
    string test1="abcdefghijklmnopqrstuvwxyz";
    string test2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int key = atoi(argv[1]);
    string plan_text= GetString();
    int cipher_text,j,m;
    for ( int i=0, n= strlen( plan_text ); i<n; i++)
    {
        if (  isalpha (plan_text[i]) && islower (plan_text[i]) )
        {
            for(j=0, m=strlen(test1);j< m; j++)
            {
                if(test1[j]==plan_text[i])
                {
                     cipher_text= (j+key)%26;
                     int c=test1[cipher_text];
                     printf("%c",c);
                }
            }
        }
        else if (  isalpha (plan_text[i]) && isupper (plan_text[i]) )
        {
            for(j=0, m=strlen(test2);j< m; j++)
            {
                if(test2[j]==plan_text[i])
                {
                     cipher_text= (j+key)%26;
                     int c=test2[cipher_text];
                     printf("%c",c);
                }
            }
        }
        else if ( ispunct (plan_text[i])  || isblank (plan_text[i])   || isdigit (plan_text[i])  )
            printf("%c",plan_text[i]);
        else if (plan_text[i]=='\0' || plan_text[i]=='\n')
            printf("\n");
    }
    }
    else 
        return 1;
    printf("\n");
    
    return 0;
}
