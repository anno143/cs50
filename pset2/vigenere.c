#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main ( int argc, string argv[] )
{
   if(argc!=2 )
    {
        printf("%s",argv[0]);
        return 1;
    }
    for( int j=0 ; j <argc ; j++)
        for ( int i = 0, n = strlen(argv[j]); i < n; i++ )
            if ( isdigit(argv[j][i]))
            {
                printf("%s",argv[0]);
                return 1;
            }
    string key;
    key=argv[1];
    string test1="abcdefghijklmnopqrstuvwxyz";
    string test2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string plan_text= GetString();
    int cipher_text,j,m,c,p,q,f;
    int keylenght= strlen(key);
    for ( int i=0,z=0, n= strlen( plan_text ); (i<n) && (z<n) ; i++)
    {
        
        if ( isalpha (plan_text[i]) && islower (plan_text[i]) )
        {
            for(j=0, m=strlen(test1);j< m; j++) 
                if(test1[j]==plan_text[i]) {
                    p=j;  break;}     
            f=(z%keylenght);
            if (islower (key[f]) ) {
               for(j=0, m=strlen(test1);j< m; j++)
                   if ( test1[j]==key[f]) {
                       q=j; break; } }
            else if (isupper (key[f]) ) {
               for(j=0, m=strlen(test1);j< m; j++)
                   if ( test2[j]==key[f]) {
                       q=j; break; } }    
            z++;      
            cipher_text= (p+q)%26;
            c=test1[cipher_text];
            printf("%c",c); 
         }
         else if (  isalpha (plan_text[i]) && isupper (plan_text[i]) )
         {
            for(j=0, m=strlen(test1);j< m; j++) {
                if(test2[j]==plan_text[i]) {
                    p=j; break;} }
            f=(z%keylenght);
            if (islower (key[f]) ) {
               for(j=0, m=strlen(test1);j< m; j++)
                   if ( test1[j]==key[f]) {
                     q=j; break; } }
            else if (isupper (key[f]) ) {
               for(j=0, m=strlen(test1);j< m; j++)
                   if ( test2[j]==key[f]) {
                     q=j; break; } }    
            z++;
            cipher_text= (p+q)%26;
            c=test2[cipher_text];
         
            printf("%c",c); 
         }
         else if ( ispunct (plan_text[i])  || isblank (plan_text[i])   || isdigit (plan_text[i])  )
               printf("%c",plan_text[i]);
         else if (plan_text[i]=='\0' || plan_text[i]=='\n')
               printf("\n");
    }
    printf("\n");
    return 0;
}
