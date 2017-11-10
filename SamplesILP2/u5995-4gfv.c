#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object g;
ILP_Object deuxfois;

/* Global prototypes */
ILP_Object ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1);

/* Global functions */

ILP_Object
ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp295;
    ILP_Object ilptmp296;
    ilptmp295 = ILP_Integer2ILP (2);
    ilptmp296 = x1;
    return ILP_Times (ilptmp295, ilptmp296);
  }
}

struct ILP_Closure deuxfois_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__deuxfois,
    1,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp297;
    {
      ILP_Object ilptmp298;
      ilptmp298 = (ILP_Object) & deuxfois_closure_object;

      {
	ILP_Object f2 = ilptmp298;
	{
	  ILP_Object ilptmp299;
	  ilptmp299 = f2;
	  ilptmp297 = (g = ilptmp299);
	}

      }
    }
    {
      ILP_Object ilptmp300;
      ILP_Object ilptmp301;
      {
	ILP_Object ilptmp302;
	ilptmp302 = ILP_Integer2ILP (3000);
	ilptmp300 = ILP_invoke (g, 1, ilptmp302);
      }
      ilptmp301 = ILP_Integer2ILP (5);
      ilptmp297 = ILP_Minus (ilptmp300, ilptmp301);
    }
    return ilptmp297;
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
