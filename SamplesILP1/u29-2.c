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
    ILP_Object ilptmp565;
    ILP_Object ilptmp566;
    ilptmp565 = ILP_Integer2ILP (11);
    ilptmp566 = ILP_Integer2ILP (22);

    {
      ILP_Object x1 = ilptmp565;
      ILP_Object y2 = ilptmp566;
      {
	ILP_Object ilptmp567;
	ILP_Object ilptmp568;
	{
	  ILP_Object ilptmp569;
	  ILP_Object ilptmp570;
	  ilptmp569 = x1;
	  ilptmp570 = y2;
	  ilptmp567 = ILP_Plus (ilptmp569, ilptmp570);
	}
	{
	  ILP_Object ilptmp571;
	  ILP_Object ilptmp572;
	  ilptmp571 = x1;
	  ilptmp572 = y2;
	  ilptmp568 = ILP_Times (ilptmp571, ilptmp572);
	}

	{
	  ILP_Object x3 = ilptmp567;
	  ILP_Object y4 = ilptmp568;
	  {
	    ILP_Object ilptmp573;
	    ILP_Object ilptmp574;
	    ilptmp573 = x3;
	    ilptmp574 = y4;
	    return ILP_Times (ilptmp573, ilptmp574);
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
