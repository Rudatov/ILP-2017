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
    ILP_Object ilptmp36;
    ilptmp36 = ILP_Integer2ILP (49);

    {
      ILP_Object x1 = ilptmp36;
      {
	ILP_Object ilptmp37;
	{
	  ILP_Object ilptmp38;
	  ilptmp38 = x1;
	  ilptmp37 = ILP_print (ilptmp38);
	}
	{
	  ILP_Object ilptmp39;
	  {
	    ILP_Object ilptmp40;
	    ILP_Object ilptmp41;
	    ilptmp40 = x1;
	    ilptmp41 = ILP_Integer2ILP (1);
	    ilptmp39 = ILP_Plus (ilptmp40, ilptmp41);
	  }
	  ilptmp37 = (x1 = ilptmp39);
	}
	{
	  ILP_Object ilptmp42;
	  ilptmp42 = x1;
	  ilptmp37 = ILP_print (ilptmp42);
	}
	{
	  ILP_Object ilptmp43;
	  {
	    ILP_Object ilptmp44;
	    ILP_Object ilptmp45;
	    ilptmp44 = x1;
	    ilptmp45 = ILP_Integer2ILP (1);
	    ilptmp43 = ILP_Plus (ilptmp44, ilptmp45);
	  }
	  ilptmp37 = (x1 = ilptmp43);
	}
	{
	  ILP_Object ilptmp46;
	  ilptmp46 = x1;
	  ilptmp37 = ILP_print (ilptmp46);
	}
	ilptmp37 = x1;
	return ilptmp37;
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
