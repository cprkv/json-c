#pragma once

#include <stdint.h>

/* Enable RDRAND Hardware RNG Hash Seed */
/* #undef ENABLE_RDRAND */

/* Override json_c_get_random_seed() with custom code */
/* #undef OVERRIDE_GET_RANDOM_SEED */

/* Enable partial threading support */
/* #undef ENABLE_THREADING */

/* Define if .gnu.warning accepts long strings. */
/* #undef HAS_GNU_WARNING_LONG */

/* Define to 1 if you have the <dlfcn.h> header file. */
#if __has_include(<dlfcn.h>)
#define HAVE_DLFCN_H 1
#endif


/* Define to 1 if you have the <endian.h> header file. */
#if __has_include(<endian.h>)
#define HAVE_ENDIAN_H 1
#endif


/* Define to 1 if you have the <fcntl.h> header file. */
#if __has_include(<fcntl.h>)
#define HAVE_FCNTL_H 1
#endif


#if __has_include(<io.h>)
#define HAVE_IO_H 1
#endif


/* Define to 1 if you have the <inttypes.h> header file. */
#if __has_include(<inttypes.h>)
#define HAVE_INTTYPES_H 1
#endif


/* Define to 1 if you have the <limits.h> header file. */
#if __has_include(<limits.h>)
#define HAVE_LIMITS_H 1
#endif


/* Define to 1 if you have the <locale.h> header file. */
#if __has_include(<locale.h>)
#define HAVE_LOCALE_H 1
#endif


/* Define to 1 if you have the <memory.h> header file. */
#if __has_include(<memory.h>)
#define HAVE_MEMORY_H 1
#endif


/* Define to 1 if you have the <stdarg.h> header file. */
#if __has_include(<stdarg.h>)
#define HAVE_STDARG_H 1
#endif


/* Define to 1 if you have the <stdint.h> header file. */
#if __has_include(<stdint.h>)
#define HAVE_STDINT_H 1
#endif


/* Define to 1 if you have the <stdlib.h> header file. */
#if __has_include(<stdlib.h>)
#define HAVE_STDLIB_H 1
#endif


/* Define to 1 if you have the <strings.h> header file. */
#if __has_include(<strings.h>)
#define HAVE_STRINGS_H 1
#endif


/* Define to 1 if you have the <string.h> header file. */
#if __has_include(<string.h>)
#define HAVE_STRING_H 1
#endif


/* Define to 1 if you have the <syslog.h> header file. */
#if __has_include(<syslog.h>)
#define HAVE_SYSLOG_H 1
#endif


/* Define to 1 if you have the <sys/cdefs.h> header file. */
#if __has_include(<sys/cdefs.h>)
#define HAVE_SYS_CDEFS_H 1
#endif


/* Define to 1 if you have the <sys/param.h> header file. */
#if __has_include(<sys/param.h>)
#define HAVE_SYS_PARAM_H 1
#endif


/* Define to 1 if you have the <sys/resource.h> header file. */
#if __has_include(<sys/resource.h>)
#define HAVE_SYS_RESOURCE_H 1
#endif


/* Define to 1 if you have the <sys/stat.h> header file. */
#if __has_include(<sys/stat.h>)
#define HAVE_SYS_STAT_H 1
#endif


/* Define to 1 if you have the <sys/types.h> header file. */
#if __has_include(<sys/types.h>)
#define HAVE_SYS_TYPES_H 1 1
#endif


/* Define to 1 if you have the <unistd.h> header file. */
#if __has_include(<unistd.h>)
#define HAVE_UNISTD_H 1
#endif


/* Define to 1 if you have the <xlocale.h> header file. */
#if __has_include(<xlocale.h>)
#define HAVE_XLOCALE_H 1
#endif


/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Has atomic builtins */
/* #undef HAVE_ATOMIC_BUILTINS */

/* Define to 1 if you have the declaration of `INFINITY', and to 0 if you
   don't. */
#define HAVE_DECL_INFINITY

/* Define to 1 if you have the declaration of `isinf', and to 0 if you don't.
   */
#define HAVE_DECL_ISINF

/* Define to 1 if you have the declaration of `isnan', and to 0 if you don't.
   */
#define HAVE_DECL_ISNAN

/* Define to 1 if you have the declaration of `nan', and to 0 if you don't. */
#define HAVE_DECL_NAN

/* Define to 1 if you have the declaration of `_finite', and to 0 if you
   don't. */
#define HAVE_DECL__FINITE

/* Define to 1 if you have the declaration of `_isnan', and to 0 if you don't.
   */
#define HAVE_DECL__ISNAN

/* Define to 1 if you have the `open' function. */
/* #undef HAVE_OPEN */

/* Define to 1 if you have the `realloc' function. */
#define HAVE_REALLOC

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF


/* Define to 1 if you have the `strcasecmp' function. */
/* #undef HAVE_STRCASECMP */

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR

/* Define to 1 if you have the `strncasecmp' function. */
/* #undef HAVE_STRNCASECMP */

/* Define to 1 if you have the `uselocale' function. */
/* #undef HAVE_USELOCALE */

/* Define to 1 if you have the `vasprintf' function. */
/* #undef HAVE_VASPRINTF */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF

/* Define to 1 if you have the `vsyslog' function. */
/* #undef HAVE_VSYSLOG */

/* Define if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Have __thread */
/* #undef HAVE___THREAD */

/* Public define for json_inttypes.h */
/* #undef JSON_C_HAVE_INTTYPES_H */

/* Name of package */
#define PACKAGE "json-c"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "json-c@googlegroups.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "json-c"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "json-c 0.15."

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "json-c"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/json-c/json-c"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.15."

/* The number of bytes in type int */
#define SIZEOF_INT sizeof(int)

/* The number of bytes in type int64_t */
#define SIZEOF_INT64_T sizeof(int64_t)

/* The number of bytes in type long */
#define SIZEOF_LONG sizeof(long)

/* The number of bytes in type long long */
#define SIZEOF_LONG_LONG sizeof(long long)

/* The number of bytes in type size_t */
#define SIZEOF_SIZE_T sizeof(size_t)

/* The number of bytes in type ssize_t */
#define SIZEOF_SSIZE_T sizeof(ssize_t)

/* Specifier for __thread */
#define SPEC___THREAD __declspec;(;thread;)

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS

/* Version number of package */
#define VERSION "0.15."

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

#ifdef _WIN32
#define jsonc_os_read _read
#define jsonc_os_open _open
#else
#define jsonc_os_read read
#define jsonc_os_open open
#endif
