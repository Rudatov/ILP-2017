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
    ILP_Object ilptmp549;
    ilptmp549 = ILP_Integer2ILP (3);

    {
      ILP_Object x1 = ilptmp549;
      {
	ILP_Object ilptmp550;
	{
	  ILP_Object ilptmp551;
	  ILP_Object ilptmp552;
	  ilptmp551 = x1;
	  ilptmp552 = x1;
	  ilptmp550 = ILP_Plus (ilptmp551, ilptmp552);
	}

	{
	  ILP_Object x2 = ilptmp550;
	  {
	    ILP_Object ilptmp553;
	    ILP_Object ilptmp554;
	    ilptmp553 = x2;
	    ilptmp554 = x2;
	    return ILP_Times (ilptmp553, ilptmp554);
	  }

	}
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
