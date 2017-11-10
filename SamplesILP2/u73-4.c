#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object f3;

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
    ILP_Object ilptmp347;
    ILP_Object ilptmp348;
    ilptmp347 = ILP_Integer2ILP (2);
    ilptmp348 = x1;
    return ILP_Times (ilptmp347, ilptmp348);
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
    ILP_Object ilptmp349;
    {
      ILP_Object ilptmp350;
      ilptmp350 = x2;
      ilptmp349 = ilp__f1 (NULL, ilptmp350);
    }
    return ilp__f1 (NULL, ilptmp349);
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
    ILP_Object ilptmp351;
    ILP_Object ilptmp352;
    {
      ILP_Object ilptmp353;
      ilptmp353 = x4;
      ilptmp351 = ilp__f1 (NULL, ilptmp353);
    }
    {
      ILP_Object ilptmp354;
      ILP_Object ilptmp355;
      ilptmp354 = x4;
      ilptmp355 = x4;
      ilptmp352 = ilp__f2 (NULL, ilptmp354, ilptmp355);
    }
    return ilp__f2 (NULL, ilptmp351, ilptmp352);
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
    ILP_Object ilptmp356;
    ilptmp356 = x5;
    return ilp__fr2 (NULL, ilptmp356);
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
    ILP_Object ilptmp357;
    {
      ILP_Object ilptmp358;
      ilptmp358 = x6;
      ilptmp357 = ilp__fr3 (NULL, ilptmp358);
    }
    return ilp__fr3 (NULL, ilptmp357);
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
    ILP_Object ilptmp359;
    {
      ILP_Object ilptmp360;
      {
	ILP_Object ilptmp361;
	ilptmp361 = x7;
	ilptmp360 = ilp__fr3 (NULL, ilptmp361);
      }
      ilptmp359 = ilp__fr1 (NULL, ilptmp360);
    }
    return ilp__f3 (NULL, ilptmp359);
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
    ILP_Object ilptmp362;
    ilptmp362 = ILP_Integer2ILP (73);
    return ilp__f3 (NULL, ilptmp362);
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
