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
    ILP_Object ilptmp307;
    {
      ILP_Object ilptmp308;
      {
	ILP_Object ilptmp309;
	ILP_Object ilptmp310;
	ilptmp309 = ILP_Integer2ILP (1);
	ilptmp310 = ILP_Integer2ILP (1);
	ilptmp308 = ILP_Equal (ilptmp309, ilptmp310);
      }
      if (ILP_isEquivalentToTrue (ilptmp308))
	{
	  ilptmp307 = ILP_TRUE;

	}
      else
	{
	  ilptmp307 = ILP_FALSE;

	}
    }
    if (ILP_isEquivalentToTrue (ilptmp307))
      {
	return ILP_Integer2ILP (3);

      }
    else
      {
	return ILP_Integer2ILP (4);

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
