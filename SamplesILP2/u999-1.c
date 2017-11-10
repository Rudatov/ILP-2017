#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object break;
ILP_Object i;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp397;
    {
      ILP_Object ilptmp398;
      ilptmp398 = ILP_Integer2ILP (0);

      {
	ILP_Object i1 = ilptmp398;
	while (1)
	  {
	    ILP_Object ilptmp399;
	    {
	      ILP_Object ilptmp400;
	      ILP_Object ilptmp401;
	      ilptmp400 = i1;
	      ilptmp401 = ILP_Integer2ILP (10);
	      ilptmp399 = ILP_LessThan (ilptmp400, ilptmp401);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp399))
	      {
		{
		  ILP_Object ilptmp402;
		  {
		    ILP_Object ilptmp403;
		    ILP_Object ilptmp404;
		    ilptmp403 = i1;
		    ilptmp404 = ILP_Integer2ILP (1);
		    ilptmp402 = ILP_Plus (ilptmp403, ilptmp404);
		  }
		  (void) (i1 = ilptmp402);
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp397 = ILP_FALSE;

      }
    }
    {
      ILP_Object ilptmp405;
      {
	ILP_Object ilptmp406;
	ILP_Object ilptmp407;
	ilptmp406 = i;
	ilptmp407 = ILP_Integer2ILP (5);
	ilptmp405 = ILP_GreaterThan (ilptmp406, ilptmp407);
      }
      if (ILP_isEquivalentToTrue (ilptmp405))
	{
	  ilptmp397 = break;

	}
      else
	{
	  ilptmp397 = ILP_FALSE;

	}
    }
    return ilptmp397;
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
