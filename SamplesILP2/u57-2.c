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
    ILP_Object ilptmp179;
    ILP_Object ilptmp180;
    ilptmp179 = ILP_Integer2ILP (51);
    ilptmp180 = ILP_Integer2ILP (6);

    {
      ILP_Object x1 = ilptmp179;
      ILP_Object y2 = ilptmp180;
      {
	ILP_Object ilptmp181;
	ILP_Object ilptmp182;
	ilptmp181 = x1;
	ilptmp182 = y2;
	return ILP_Plus (ilptmp181, ilptmp182);
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
