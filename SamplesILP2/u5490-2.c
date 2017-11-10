#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object man_3agle;

/* Global prototypes */
ILP_Object ilp__man_3agle (ILP_Closure ilp_useless, ILP_Object n1);

/* Global functions */

ILP_Object
ilp__man_3agle (ILP_Closure ilp_useless, ILP_Object n1)
{
  {
    ILP_Object ilptmp110;
    ILP_Object ilptmp111;
    ilptmp110 = n1;
    ilptmp111 = ILP_Integer2ILP (2);
    return ILP_Divide (ilptmp110, ilptmp111);
  }
}

struct ILP_Closure man_3agle_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__man_3agle,
    1,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp112;
    {
      ILP_Object ilptmp113;
      ILP_Object ilptmp114;
      ilptmp113 = ILP_Integer2ILP (2);
      ilptmp114 = ILP_Integer2ILP (5490);
      ilptmp112 = ILP_Times (ilptmp113, ilptmp114);
    }
    return ilp__man_3agle (NULL, ilptmp112);
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
