#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object twice;
ILP_Object deuxfois;

/* Global prototypes */
ILP_Object ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__twice (ILP_Closure ilp_useless, ILP_Object f2, ILP_Object x3);

/* Global functions */

ILP_Object
ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp277;
    ILP_Object ilptmp278;
    ilptmp277 = ILP_Integer2ILP (2);
    ilptmp278 = x1;
    return ILP_Times (ilptmp277, ilptmp278);
  }
}

struct ILP_Closure deuxfois_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__deuxfois,
    1,
    {NULL}}}
};

ILP_Object
ilp__twice (ILP_Closure ilp_useless, ILP_Object f2, ILP_Object x3)
{
  {
    ILP_Object ilptmp279;
    ILP_Object ilptmp280;
    ilptmp279 = f2;
    {
      ILP_Object ilptmp281;
      ILP_Object ilptmp282;
      ilptmp281 = f2;
      ilptmp282 = x3;
      ilptmp280 = ILP_invoke (ilptmp281, 1, ilptmp282);
    }
    return ILP_invoke (ilptmp279, 1, ilptmp280);
  }
}

struct ILP_Closure twice_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__twice,
    2,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp283;
    ILP_Object ilptmp284;
    {
      ILP_Object ilptmp285;
      ILP_Object ilptmp286;
      ilptmp285 = (ILP_Object) & deuxfois_closure_object;
      ilptmp286 = ILP_Integer2ILP (1500);
      ilptmp283 = ilp__twice (NULL, ilptmp285, ilptmp286);
    }
    ilptmp284 = ILP_Integer2ILP (6);
    return ILP_Minus (ilptmp283, ilptmp284);
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
