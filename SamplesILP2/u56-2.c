#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object odd;

/* Global prototypes */
ILP_Object ilp__odd (ILP_Closure ilp_useless, ILP_Object n1);
ILP_Object ilp__even (ILP_Closure ilp_useless, ILP_Object n2);

/* Global functions */

ILP_Object
ilp__odd (ILP_Closure ilp_useless, ILP_Object n1)
{
  {
    ILP_Object ilptmp155;
    {
      ILP_Object ilptmp156;
      ILP_Object ilptmp157;
      ilptmp156 = n1;
      ilptmp157 = ILP_Integer2ILP (0);
      ilptmp155 = ILP_Equal (ilptmp156, ilptmp157);
    }
    if (ILP_isEquivalentToTrue (ilptmp155))
      {
	return ILP_FALSE;

      }
    else
      {
	{
	  ILP_Object ilptmp158;
	  {
	    ILP_Object ilptmp159;
	    ILP_Object ilptmp160;
	    ilptmp159 = n1;
	    ilptmp160 = ILP_Integer2ILP (1);
	    ilptmp158 = ILP_Equal (ilptmp159, ilptmp160);
	  }
	  if (ILP_isEquivalentToTrue (ilptmp158))
	    {
	      return ILP_TRUE;

	    }
	  else
	    {
	      {
		ILP_Object ilptmp161;
		{
		  ILP_Object ilptmp162;
		  ILP_Object ilptmp163;
		  ilptmp162 = n1;
		  ilptmp163 = ILP_Integer2ILP (1);
		  ilptmp161 = ILP_Minus (ilptmp162, ilptmp163);
		}
		return ilp__even (NULL, ilptmp161);
	      }

	    }
	}

      }
  }
}

struct ILP_Closure odd_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__odd,
    1,
    {NULL}}}
};

ILP_Object
ilp__even (ILP_Closure ilp_useless, ILP_Object n2)
{
  {
    ILP_Object ilptmp164;
    {
      ILP_Object ilptmp165;
      ILP_Object ilptmp166;
      ilptmp165 = n2;
      ilptmp166 = ILP_Integer2ILP (0);
      ilptmp164 = ILP_Equal (ilptmp165, ilptmp166);
    }
    if (ILP_isEquivalentToTrue (ilptmp164))
      {
	return ILP_TRUE;

      }
    else
      {
	{
	  ILP_Object ilptmp167;
	  {
	    ILP_Object ilptmp168;
	    ILP_Object ilptmp169;
	    ilptmp168 = n2;
	    ilptmp169 = ILP_Integer2ILP (1);
	    ilptmp167 = ILP_Equal (ilptmp168, ilptmp169);
	  }
	  if (ILP_isEquivalentToTrue (ilptmp167))
	    {
	      return ILP_FALSE;

	    }
	  else
	    {
	      {
		ILP_Object ilptmp170;
		{
		  ILP_Object ilptmp171;
		  ILP_Object ilptmp172;
		  ilptmp171 = n2;
		  ilptmp172 = ILP_Integer2ILP (1);
		  ilptmp170 = ILP_Minus (ilptmp171, ilptmp172);
		}
		return ilp__odd (NULL, ilptmp170);
	      }

	    }
	}

      }
  }
}

struct ILP_Closure even_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__even,
    1,
    {NULL}}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp173;
    {
      ILP_Object ilptmp174;
      ilptmp174 = ILP_Integer2ILP (56);
      ilptmp173 = ilp__odd (NULL, ilptmp174);
    }
    return ILP_Not (ilptmp173);
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
