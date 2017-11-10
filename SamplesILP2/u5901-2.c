#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object pseudosequence;
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__pseudosequence (ILP_Closure ilp_useless,
				ILP_Object one2, ILP_Object two3);

/* Global functions */

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp198;
    ILP_Object ilptmp199;
    ilptmp198 = ILP_Integer2ILP (2);
    ilptmp199 = x1;
    return ILP_Times (ilptmp198, ilptmp199);
  }
}

struct ILP_Closure foo_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__foo,
    1,
    {NULL}}}
};

ILP_Object
ilp__pseudosequence (ILP_Closure ilp_useless,
		     ILP_Object one2, ILP_Object two3)
{
  return two3;
}

struct ILP_Closure pseudosequence_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__pseudosequence,
    2,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp200;
    ilptmp200 = ILP_Integer2ILP (11);

    {
      ILP_Object y4 = ilptmp200;
      {
	ILP_Object ilptmp201;
	{
	  ILP_Object ilptmp202;
	  ILP_Object ilptmp203;
	  {
	    ILP_Object ilptmp204;
	    {
	      ILP_Object ilptmp205;
	      ILP_Object ilptmp206;
	      ilptmp205 = y4;
	      ilptmp206 = ILP_Integer2ILP (1);
	      ilptmp204 = ILP_Plus (ilptmp205, ilptmp206);
	    }
	    ilptmp202 = (y4 = ilptmp204);
	  }
	  ilptmp203 = y4;
	  ilptmp201 = ilp__pseudosequence (NULL, ilptmp202, ilptmp203);
	}
	return ilp__foo (NULL, ilptmp201);
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
