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
    ILP_Object ilptmp661;
    ilptmp661 = ILP_Integer2ILP (4);

    {
      ILP_Object a1 = ilptmp661;
      {
	ILP_Object ilptmp662;
	ilptmp662 = ILP_Integer2ILP (5);

	{
	  ILP_Object b2 = ilptmp662;
	  {
	    ILP_Object ilptmp663;
	    ilptmp663 = ILP_Integer2ILP (6);

	    {
	      ILP_Object c3 = ilptmp663;
	      {
		ILP_Object ilptmp664;
		{
		  ILP_Object ilptmp665;
		  ILP_Object ilptmp666;
		  {
		    ILP_Object ilptmp667;
		    ILP_Object ilptmp668;
		    ilptmp667 = b2;
		    ilptmp668 = b2;
		    ilptmp665 = ILP_Times (ilptmp667, ilptmp668);
		  }
		  {
		    ILP_Object ilptmp669;
		    ILP_Object ilptmp670;
		    {
		      ILP_Object ilptmp671;
		      ILP_Object ilptmp672;
		      ilptmp671 = ILP_Integer2ILP (4);
		      ilptmp672 = a1;
		      ilptmp669 = ILP_Times (ilptmp671, ilptmp672);
		    }
		    ilptmp670 = c3;
		    ilptmp666 = ILP_Times (ilptmp669, ilptmp670);
		  }
		  ilptmp664 = ILP_Minus (ilptmp665, ilptmp666);
		}

		{
		  ILP_Object d4 = ilptmp664;
		  {
		    ILP_Object ilptmp673;
		    {
		      ILP_Object ilptmp674;
		      ILP_Object ilptmp675;
		      ilptmp674 = d4;
		      ilptmp675 = ILP_Integer2ILP (0);
		      ilptmp673 = ILP_LessThan (ilptmp674, ilptmp675);
		    }
		    if (ILP_isEquivalentToTrue (ilptmp673))
		      {
			{
			  ILP_Object ilptmp676;
			  ilptmp676 = ILP_String2ILP ("discri neg");
			  return ILP_print (ilptmp676);
			}

		      }
		    else
		      {
			{
			  ILP_Object ilptmp677;
			  {
			    ILP_Object ilptmp678;
			    ILP_Object ilptmp679;
			    ilptmp678 = d4;
			    ilptmp679 = ILP_Integer2ILP (0);
			    ilptmp677 = ILP_Equal (ilptmp678, ilptmp679);
			  }
			  if (ILP_isEquivalentToTrue (ilptmp677))
			    {
			      {
				ILP_Object ilptmp680;
				ilptmp680 = ILP_String2ILP ("discri nul");
				return ILP_print (ilptmp680);
			      }

			    }
			  else
			    {
			      {
				ILP_Object ilptmp681;
				ilptmp681 = ILP_String2ILP ("discri pos");
				return ILP_print (ilptmp681);
			      }

			    }
			}

		      }
		  }

		}
	      }

	    }
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
