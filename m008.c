/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  char *t;
  int i, x, n, k, l, h;
  n=strlen(s);
  strcpy(t, s);
  printf("string lenght: %d\n", n);
  for(i=0; s[i]!=0; i++)
  {
    if(s[i]==' ')
    {
      x=i;
    }
    else
    {
      continue;
    }
  }
  for(k=x+1; k<=n; k++)
  {
    if((s[k]>='a')&&(s[k]<='z'))
    {
      s[k]=s[k]-32;
    }
  }
  k=0;
  h=x;
  while(x<n)
  {
    s[k]=s[x];
    k++;
    x++;
  }
  s[k-1]=',';
  s[k]=' ';
  l=0;
  while(l<h)
  {
    s[k+1]=t[l];
    l++;
    k++;
  }
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
