#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object dou_ble;

/* Global prototypes */
ILP_Object ilp__dou_ble (ILP_Closure ilp_useless, ILP_Object x1);

/* Global functions */

ILP_Object
ilp__dou_ble (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp130;
    ILP_Object ilptmp131;
    ilptmp130 = ILP_Integer2ILP (2);
    ilptmp131 = x1;
    return ILP_Times (ilptmp130, ilptmp131);
  }
}

struct ILP_Closure dou_ble_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__dou_ble,
    1,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp132;
    {
      ILP_Object ilptmp133;
      ILP_Object ilptmp134;
      ilptmp133 = ILP_Integer2ILP (52);
      ilptmp134 = ILP_Integer2ILP (3);
      ilptmp132 = ILP_Plus (ilptmp133, ilptmp134);
    }
    return ilp__dou_ble (NULL, ilptmp132);
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
