#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp645;
    {
      ILP_Object ilptmp646;
      ilptmp646 = ILP_String2ILP ("Un, ");
      ilptmp645 = ILP_print (ilptmp646);
    }
    {
      ILP_Object ilptmp647;
      ilptmp647 = ILP_String2ILP ("deux et ");
      ilptmp645 = ILP_print (ilptmp647);
    }
    {
      ILP_Object ilptmp648;
      ilptmp648 = ILP_String2ILP ("trois.");
      ilptmp645 = ILP_print (ilptmp648);
    }
    return ilptmp645;
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
