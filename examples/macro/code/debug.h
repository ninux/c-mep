#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG
#define _dbginfo() printf("<DEBUG>: "		\
			  "build information:"	\
			  "\n\t Date\t%s"	\
			  "\n\t Time\t%s "	\
			  "\n\t GCC\t%s"	\
			  "\n\t C rev\t%i\n",	\
			  __DATE__,		\
			  __TIME__,		\
			  __VERSION__,		\
			  __STDC_VERSION__)
#else
#define _dbginfo()
#endif

#ifdef DEBUG
#define _dbgmsg(MESSAGE, ...) printf("<DEBUG>: " MESSAGE "\n", ##__VA_ARGS__)
#else
#define _dbgmsg(MESSAGE, ...)
#endif

#endif /* DEBUG_H */
