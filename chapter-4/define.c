#if SYSTEM == SYSV
	#define HDR <stdio.h>
#elif SYSTEM == BSD
	#define HDR "bsd.h"
#elif SYSTEM == MSDOS
	#define HDR "msdos.h"
#else 
	#define HDR "default.h"
#endif
#include HDR
void main()
{
	printf("stdio.h");
}
