#ifndef _LIB_h
#define _LIB_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "CTX.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void LIB__INITIALISATION(void);

/* Clause OPERATIONS */

extern void LIB__lib_next(CTX__STATUS p1, CTX__STATUS *vv);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _LIB_h */
