#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object fr3;

/* Global prototypes */
ILP_Object ilp__f1 (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__f2 (ILP_Closure ilp_useless, ILP_Object x2, ILP_Object y3);
ILP_Object ilp__f3 (ILP_Closure ilp_useless, ILP_Object x4);
ILP_Object ilp__fr1 (ILP_Closure ilp_useless, ILP_Object x5);
ILP_Object ilp__fr2 (ILP_Closure ilp_useless, ILP_Object x6);
ILP_Object ilp__fr3 (ILP_Closure ilp_useless, ILP_Object x7);

/* Global functions */

ILP_Object
ilp__f1 (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp382;
    {
      ILP_Object ilptmp383;
      ILP_Object ilptmp384;
      ilptmp383 = x1;
      ilptmp384 = ILP_Integer2ILP (74);
      ilptmp382 = ILP_LessThan (ilptmp383, ilptmp384);
    }
    if (ILP_isEquivalentToTrue (ilptmp382))
      {
	{
	  ILP_Object ilptmp385;
	  ILP_Object ilptmp386;
	  ilptmp385 = ILP_Integer2ILP (2);
	  ilptmp386 = x1;
	  return ILP_Times (ilptmp385, ilptmp386);
	}

      }
    else
      {
	return x1;

      }
  }
}

struct ILP_Closure f1_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f1,
    1,
    {NULL}}}
};

ILP_Object
ilp__f2 (ILP_Closure ilp_useless, ILP_Object x2, ILP_Object y3)
{
  {
    ILP_Object ilptmp387;
    {
      ILP_Object ilptmp388;
      ilptmp388 = x2;
      ilptmp387 = ilp__f1 (NULL, ilptmp388);
    }
    return ilp__f1 (NULL, ilptmp387);
  }
}

struct ILP_Closure f2_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f2,
    2,
    {NULL}}}
};

ILP_Object
ilp__f3 (ILP_Closure ilp_useless, ILP_Object x4)
{
  {
    ILP_Object ilptmp389;
    ILP_Object ilptmp390;
    {
      ILP_Object ilptmp391;
      ilptmp391 = x4;
      ilptmp389 = ilp__f1 (NULL, ilptmp391);
    }
    {
      ILP_Object ilptmp392;
      ILP_Object ilptmp393;
      ilptmp392 = x4;
      ilptmp393 = x4;
      ilptmp390 = ilp__f2 (NULL, ilptmp392, ilptmp393);
    }
    return ilp__f2 (NULL, ilptmp389, ilptmp390);
  }
}

struct ILP_Closure f3_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f3,
    1,
    {NULL}}}
};

ILP_Object
ilp__fr1 (ILP_Closure ilp_useless, ILP_Object x5)
{
  {
    ILP_Object ilptmp394;
    ilptmp394 = x5;
    return ilp__fr2 (NULL, ilptmp394);
  }
}

struct ILP_Closure fr1_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__fr1,
    1,
    {NULL}}}
};

ILP_Object
ilp__fr2 (ILP_Closure ilp_useless, ILP_Object x6)
{
  {
    ILP_Object ilptmp395;
    {
      ILP_Object ilptmp396;
      ilptmp396 = x6;
      ilptmp395 = ilp__fr3 (NULL, ilptmp396);
    }
    return ilp__fr3 (NULL, ilptmp395);
  }
}

struct ILP_Closure fr2_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__fr2,
    1,
    {NULL}}}
};

ILP_Object
ilp__fr3 (ILP_Closure ilp_useless, ILP_Object x7)
{
  {
    ILP_Object ilptmp397;
    {
      ILP_Object ilptmp398;
      {
	ILP_Object ilptmp399;
	ilptmp399 = x7;
	ilptmp398 = ilp__f3 (NULL, ilptmp399);
      }
      ilptmp397 = ilp__f1 (NULL, ilptmp398);
    }
    return ilp__f3 (NULL, ilptmp397);
  }
}

struct ILP_Closure fr3_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__fr3,
    1,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp400;
    ilptmp400 = ILP_Integer2ILP (74);
    return ilp__fr3 (NULL, ilptmp400);
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
