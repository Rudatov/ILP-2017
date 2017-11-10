#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x1, ILP_Object y2);

/* Global functions */

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x1, ILP_Object y2)
{
  {
    ILP_Object ilptmp323;
    ILP_Object ilptmp324;
    ilptmp323 = x1;
    ilptmp324 = y2;
    return ILP_Plus (ilptmp323, ilptmp324);
  }
}

struct ILP_Closure foo_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__foo,
    2,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp325;
    ILP_Object ilptmp326;
    {
      ILP_Object ilptmp327;
      ilptmp327 = ILP_TRUE;
      if (ILP_isEquivalentToTrue (ilptmp327))
	{
	  ilptmp325 = ILP_Integer2ILP (8);

	}
      else
	{
	  ilptmp325 = ILP_Integer2ILP (1);

	}
    }
    {
      ILP_Object ilptmp328;
      ilptmp328 = ILP_Integer2ILP (8);

      {
	ILP_Object x3 = ilptmp328;
	{
	  ILP_Object ilptmp329;
	  ILP_Object ilptmp330;
	  ilptmp329 = x3;
	  ilptmp330 = x3;
	  ilptmp326 = ILP_Times (ilptmp329, ilptmp330);
	}

      }
    }
    return ilp__foo (NULL, ilptmp325, ilptmp326);
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
