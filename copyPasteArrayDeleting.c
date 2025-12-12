#include <stdio.h>
 
int main ()
{
   int  arr[ 100 ] , location,position , c , n ;
 
   printf ( "enter number of array\n " ) ;
   scanf ( "%d" , & n ) ;
 
   printf ( "%d please enter elements\n " , n ) ;
 
   for ( c = 0 ; c < n ; c ++ )
   {
 	  scanf ( "%d" ,& arr[c] ) ;
   }
 
   printf ( "enter the delete number \n " ) ;
   scanf ( "% d" ,&position ) ;
 
   if(position>=n+1)
   {
    	printf ( "wrong number. \n " ) ;
   }
   else
	{
    	for ( c = location - 1 ; c < n - 1 ; c ++ )
    	{
		arr[ c ] =  arr[ c + 1 ] ;
    	printf( "last form of the array: \n " ) ;  	
		}
        
    	for( c = 0 ; c < n - 1 ; c ++ )
    	{
    	printf( "%d\n " , arr[ c ] ) ;
		}
   }
 
   return 0 ;
}
