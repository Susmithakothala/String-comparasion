# include < stdio .h >
# include < string .h >
main ()
{
char str1 [] = " abcd ", str2 [] = " abcd ";
int result ;
result = strcmp ( str1 , str2 );
if( result ==0)
printf ("Two strings are equals ");
else
printf ("Two strings are not equal ");
}
