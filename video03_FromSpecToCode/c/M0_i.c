/* WARNING if type checker is not performed, translation could contain errors ! */

#include "M0.h"

/* Clause SEES */
#include "CTX.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static CTX__STATUS M0__status;
/* Clause LOCAL_OPERATIONS */

static void M0__next(CTX__STATUS p1, CTX__STATUS *vv);
/* Clause INITIALISATION */
void M0__INITIALISATION(void)
{
    
    M0__status = CTX__S0;
}

/* Clause OPERATIONS */

void M0__next(CTX__STATUS p1, CTX__STATUS *vv)
{
    if(p1 == CTX__e0)
    {
        (*vv) = CTX__e1;
    }
    else if(p1 == CTX__e1)
    {
        (*vv) = CTX__e2;
    }
    else if(p1 == CTX__e2)
    {
        (*vv) = CTX__e3;
    }
    else if(p1 == CTX__e3)
    {
        (*vv) = CTX__e0;
    }
}

void M0__operate(void)
{
    M0__next(M0__status, &M0__status);
}

