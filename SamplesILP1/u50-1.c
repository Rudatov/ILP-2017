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
    ILP_Object ilptmp682;
    {
      ILP_Object ilptmp683;
      ilptmp683 = ILP_String2ILP ("Un, ");
      ilptmp682 = ILP_print (ilptmp683);
    }
    {
      ILP_Object ilptmp684;
      ilptmp684 = ILP_String2ILP ("deux et ");
      ilptmp682 = ILP_print (ilptmp684);
    }
    {
      ILP_Object ilptmp685;
      ilptmp685 = ILP_String2ILP ("TROIS");
      ilptmp682 = ILP_print (ilptmp685);
    }
    return ilptmp682;
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
