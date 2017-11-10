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
    ILP_Object ilptmp55;
    ilptmp55 = ILP_Integer2ILP (50);

    {
      ILP_Object x1 = ilptmp55;
      {
	ILP_Object ilptmp56;
	while (1)
	  {
	    ILP_Object ilptmp57;
	    {
	      ILP_Object ilptmp58;
	      ILP_Object ilptmp59;
	      ilptmp58 = x1;
	      ilptmp59 = ILP_Integer2ILP (52);
	      ilptmp57 = ILP_LessThan (ilptmp58, ilptmp59);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp57))
	      {
		{
		  ILP_Object ilptmp60;
		  {
		    ILP_Object ilptmp61;
		    ILP_Object ilptmp62;
		    ilptmp61 = x1;
		    ilptmp62 = ILP_Integer2ILP (1);
		    ilptmp60 = ILP_Plus (ilptmp61, ilptmp62);
		  }
		  (void) (x1 = ilptmp60);
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp56 = ILP_FALSE;
	ilptmp56 = x1;
	return ilptmp56;
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
