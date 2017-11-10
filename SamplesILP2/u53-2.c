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
    ILP_Object ilptmp81;
    ilptmp81 = ILP_Integer2ILP (5);

    {
      ILP_Object x1 = ilptmp81;
      {
	ILP_Object ilptmp82;
	while (1)
	  {
	    ILP_Object ilptmp83;
	    {
	      ILP_Object ilptmp84;
	      ILP_Object ilptmp85;
	      ilptmp84 = x1;
	      ilptmp85 = ILP_Integer2ILP (53);
	      ilptmp83 = ILP_LessThan (ilptmp84, ilptmp85);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp83))
	      {
		{
		  ILP_Object ilptmp86;
		  {
		    ILP_Object ilptmp87;
		    ilptmp87 = x1;
		    ilptmp86 = ILP_print (ilptmp87);
		  }
		  {
		    ILP_Object ilptmp88;
		    {
		      ILP_Object ilptmp89;
		      ILP_Object ilptmp90;
		      ilptmp89 = ILP_Integer2ILP (2);
		      ilptmp90 = x1;
		      ilptmp88 = ILP_Times (ilptmp89, ilptmp90);
		    }
		    ilptmp86 = (x1 = ilptmp88);
		  }
		  while (1)
		    {
		      ILP_Object ilptmp91;
		      {
			ILP_Object ilptmp92;
			ILP_Object ilptmp93;
			ilptmp92 = x1;
			ilptmp93 = ILP_Integer2ILP (53);
			ilptmp91 = ILP_GreaterThan (ilptmp92, ilptmp93);
		      }
		      if (ILP_isEquivalentToTrue (ilptmp91))
			{
			  {
			    ILP_Object ilptmp94;
			    {
			      ILP_Object ilptmp95;
			      ilptmp95 = x1;
			      ilptmp94 = ILP_print (ilptmp95);
			    }
			    {
			      ILP_Object ilptmp96;
			      {
				ILP_Object ilptmp97;
				ILP_Object ilptmp98;
				ilptmp97 = x1;
				ilptmp98 = ILP_Integer2ILP (3);
				ilptmp96 = ILP_Minus (ilptmp97, ilptmp98);
			      }
			      ilptmp94 = (x1 = ilptmp96);
			    }
			    (void) ilptmp94;
			  }

			}
		      else
			{
			  break;

			}
		    }
		  ilptmp86 = ILP_FALSE;
		  (void) ilptmp86;
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp82 = ILP_FALSE;
	ilptmp82 = x1;
	return ilptmp82;
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
