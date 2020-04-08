#ifndef _UCLIBC_LINUXTHREADS_PORSE_PTHREAD_H
#define _UCLIBC_LINUXTHREADS_PORSE_PTHREAD_H

#include "bits/types.h"

#define _PORSE_PURE_HEADER
#define _PORSE_CLOCK_ID_TYPE __clockid_t
#include "klee/runtime/pthread.h"

struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);		  /* Function to call.  */
  void *__arg;				  /* Its argument.  */
  int __canceltype;			  /* Saved cancellation type. */
  struct _pthread_cleanup_buffer *__prev; /* Chaining of cleanup functions.  */
};

#define __pthread_mutex_init pthread_mutex_init
#define __pthread_mutex_lock pthread_mutex_lock
#define __pthread_mutex_trylock pthread_mutex_trylock
#define __pthread_mutex_unlock pthread_mutex_unlock

#endif // _UCLIBC_LINUXTHREADS_PORSE_PTHREAD_H