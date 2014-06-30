/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"

// swap two numbers

void swap (int* a, int* b );

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // If n is not positive return false
    if(n<0)
        return false;
    // soring given array
    sort(values, n);
    // applying binary search
    int mid_index = n/2;
    if( value == values[mid_index] )
        return true;
    else if ( value < values[mid_index] )
    {
        for( int i = 0; i< mid_index; i ++ )
            if ( value == values[i] )
                return true;
    }
    else if ( value > values[mid_index] )
    {
        for( int i = mid_index +1 ; i<= n; i ++ )
            if ( value == values[i] )
                return true;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // Selection sort
    for( int i = 0; i <= n-1; i++)
    {
        int min =i;
        for( int j= i+1; j<=n; j++ )
            if( values[j]<values[min])
                min = j;
        if( min != i )
            swap( &values[min] , &values[i] );
    }
    return;
}

// Swaping array elements

void swap (int* a, int* b )
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
