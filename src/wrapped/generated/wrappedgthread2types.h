/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedgthread2TYPES_H_
#define __wrappedgthread2TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(g_thread_init, vFp_t) \
	GO(g_thread_init_with_errorcheck_mutexes, vFp_t)

#endif // __wrappedgthread2TYPES_H_