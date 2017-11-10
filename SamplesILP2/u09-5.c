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
    ILP_Object ilptmp1;
    {
      ILP_Object ilptmp2;
      ilptmp2 = ILP_Integer2ILP (0);

      {
	ILP_Object i1 = ilptmp2;
	while (1)
	  {
	    ILP_Object ilptmp3;
	    {
	      ILP_Object ilptmp4;
	      ILP_Object ilptmp5;
	      ilptmp4 = i1;
	      ilptmp5 = ILP_Integer2ILP (10);
	      ilptmp3 = ILP_LessThan (ilptmp4, ilptmp5);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp3))
	      {
		{
		  ILP_Object ilptmp6;
		  {
		    ILP_Object ilptmp7;
		    ILP_Object ilptmp8;
		    ilptmp7 = i1;
		    ilptmp8 = ILP_Integer2ILP (1);
		    ilptmp6 = ILP_Plus (ilptmp7, ilptmp8);
		  }
		  (void) (i1 = ilptmp6);
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp1 = ILP_FALSE;

      }
    }
    {
      ILP_Object ilptmp9;
      {
	ILP_Object ilptmp10;
	ILP_Object ilptmp11;
	ilptmp10 = i;
	ilptmp11 = ILP_Integer2ILP (5);
	ilptmp9 = ILP_GreaterThan (ilptmp10, ilptmp11);
      }
      if (ILP_isEquivalentToTrue (ilptmp9))
	{
	  ilptmp1 = break;

	}
      else
	{
	  ilptmp1 = ILP_FALSE;

	}
    }
    return ilptmp1;
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
