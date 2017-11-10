#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object g;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp186;
    ilptmp186 = ILP_Integer2ILP (1);

    {
      ILP_Object x1 = ilptmp186;
      {
	ILP_Object ilptmp187;
	{
	  ILP_Object ilptmp188;
	  ilptmp188 = ILP_Integer2ILP (59);
	  ilptmp187 = (g = ilptmp188);
	}
	ilptmp187 = g;
	return ilptmp187;
      }

    }
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
