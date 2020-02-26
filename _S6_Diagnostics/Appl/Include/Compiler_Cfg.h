
/* disable the following warning: warning C4214: nonstandard extension used : bit field types other than int */
#pragma warning( disable : 4214 )

/* disable the following warning: warning C4127: conditional expression is constant */
#pragma warning( disable : 4127 )

/* make the following warning an error: 'warning C4668: 'XXXXXXX' is not defined as a preprocessor macro, replacing with '0' for '#if/#elif' '  */
#pragma warning( error : 4668 )

/* make the following warning an error: 'warning C4013: 'XXXXXX' undefined; assuming extern returning int'  */
#pragma warning( error : 4013 )

/* make the following warning an error: 'warning C4221: nonstandard extension used : 'XXXXX' : cannot be initialized using address of automatic variable 'YYYYY' */
#pragma warning( error : 4221 )

/* make the following warning an error: warning C4204: nonstandard extension used : non-constant aggregate initializer */
#pragma warning( error : 4204 )

/* make the following warning an error: warning C4113: 'XXXXXX' differs in parameter lists from 'YYYYYY' */
#pragma warning( error : 4113 )

/* make the following warning an error: warning C4133: incompatible types - from 'XXXXXX' to 'YYYYYY' */
#pragma warning( error : 4133 )


#define CDD_PDURUPPER_CODE
#define CDD_PDURUPPER_APPL_DATA



#include "Rte_Compiler_Cfg.h"
#include "_Compiler_Cfg.h"

