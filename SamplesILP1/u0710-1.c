#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp415;
    ILP_Object ilptmp416;
    ilptmp415 = ILP_FALSE;
    {
      ILP_Object ilptmp417;
      ILP_Object ilptmp418;
      ilptmp417 = ILP_Integer2ILP (710);
      ilptmp418 = ILP_Integer2ILP (2);
      ilptmp416 = ILP_Or (ilptmp417, ilptmp418);
    }
    return ILP_Or (ilptmp415, ilptmp416);
  }

}

static ILP_Object
ilp_caught_program ()
{
  struct ILP_catcher *current_catcher = ILP_current_catcher;
  struct ILP_catcher new_catcher;

  if (0 == setjmp (new_catcher._jmp_buf))
    {
      ILP_establish_catcher (&new_catcher);
      return ilp_program ();
    };
  return ILP_current_exception;
}

int
main (int argc, char *argv[])
{
  ILP_START_GC;
  ILP_print (ilp_caught_program ());
  ILP_newline ();
  return EXIT_SUCCESS;
}
