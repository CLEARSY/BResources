#ifndef _CTX_h
#define _CTX_h

#include <stdint.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */
typedef enum
{
    CTX__e0,
    CTX__e1,
    CTX__e2,
    CTX__e3
    
} CTX__STATUS;
#define CTX__STATUS__max 4

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
#define CTX__S0 CTX__e0
/* Array and record constants */

extern void CTX__INITIALISATION(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _CTX_h */
