#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object f;

/* Global prototypes */
ILP_Object ilp__f (ILP_Closure ilp_useless, ILP_Object x1);

/* Global functions */

ILP_Object
ilp__f (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp401;
    {
      ILP_Object ilptmp402;
      {
	ILP_Object ilptmp403;
	ILP_Object ilptmp404;
	ilptmp403 = ILP_Integer2ILP (2);
	ilptmp404 = x1;
	ilptmp402 = ILP_Times (ilptmp403, ilptmp404);
      }
      ilptmp401 = (x1 = ilptmp402);
    }
    ilptmp401 = unless;
    {
      ILP_Object ilptmp405;
      ILP_Object ilptmp406;
      ilptmp405 = x1;
      ilptmp406 = ILP_Integer2ILP (74);
      ilptmp401 = ILP_LessThan (ilptmp405, ilptmp406);
    }
    return ilptmp401;
  }
}

struct ILP_Closure f_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f,
    1,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp407;
    ilptmp407 = ILP_Integer2ILP (77);
    return ilp__f (NULL, ilptmp407);
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
