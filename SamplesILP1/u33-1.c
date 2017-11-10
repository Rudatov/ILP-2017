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
    ILP_Object ilptmp603;
    ilptmp603 = ILP_Integer2ILP (33);

    {
      ILP_Object u1 = ilptmp603;
      {
	ILP_Object ilptmp604;
	ilptmp604 = ILP_String2ILP ("foobar");
	{
	  ILP_Object ilptmp605;
	  ILP_Object ilptmp606;
	  ilptmp605 = u1;
	  ilptmp606 = ILP_Integer2ILP (22);
	  ilptmp604 = ILP_Plus (ilptmp605, ilptmp606);
	}
	return ilptmp604;
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
