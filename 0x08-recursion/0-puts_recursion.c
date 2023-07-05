
void _puts_recursion(char *s)
{
   int i;
   i=0;
   while(*(s+i))
   {
       printf("%c", *(s+i));
       i++;
   }
   printf("\n");
}
