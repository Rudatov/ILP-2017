#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object deuxfois;

/* Global prototypes */
ILP_Object ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1);

/* Global functions */

ILP_Object
ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp244;
    ILP_Object ilptmp245;
    ilptmp244 = ILP_Integer2ILP (2);
    ilptmp245 = x1;
    return ILP_Times (ilptmp244, ilptmp245);
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
    ILP_Object ilptmp246;
    ilptmp246 = (ILP_Object) & deuxfois_closure_object;

    {
      ILP_Object f2 = ilptmp246;
      {
	ILP_Object ilptmp247;
	ILP_Object ilptmp248;
	{
	  ILP_Object ilptmp249;
	  ILP_Object ilptmp250;
	  ilptmp249 = f2;
	  ilptmp250 = ILP_Integer2ILP (3000);
	  ilptmp247 = ILP_invoke (ilptmp249, 1, ilptmp250);
	}
	ilptmp248 = ILP_Integer2ILP (8);
	return ILP_Minus (ilptmp247, ilptmp248);
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
