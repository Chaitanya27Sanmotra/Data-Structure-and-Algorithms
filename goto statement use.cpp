
#include <stdio.h>
int main()
{
  if (0) //Replace 1 with 0 and see the magic
  {
    lael_1: printf("Hello ");
    
    // Jump to the else statement after 
    // executing the above statement
    goto lael_2;
  }
  else
  {
    // Jump to 'if block statement' if 
    // the Boolean condition becomes false
    goto lael_1;

    lael_2: printf("Geeks");
  }
  return 0;
}

