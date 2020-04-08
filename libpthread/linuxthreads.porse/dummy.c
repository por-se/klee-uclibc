#include <pthread.h>
#include <time.h>

#include "libc-symbols.h"

void __pthread_initialize_minimal(void);
void __pthread_initialize_minimal(void) {
  // stub
}

static int __dummy_pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr) {
  return 0;
}
libc_hidden_proto(pthread_mutex_init)
weak_alias(__dummy_pthread_mutex_init, pthread_mutex_init)
libc_hidden_weak(pthread_mutex_init)

static int __dummy_pthread_mutex_lock(pthread_mutex_t *mutex) {
  return 0;
}
libc_hidden_proto(pthread_mutex_lock)
weak_alias(__dummy_pthread_mutex_lock, pthread_mutex_lock)
libc_hidden_weak(pthread_mutex_lock)

static int __dummy_pthread_mutex_trylock(pthread_mutex_t *mutex) {
  return 0;
}
libc_hidden_proto(pthread_mutex_trylock)
weak_alias(__dummy_pthread_mutex_trylock, pthread_mutex_trylock)
libc_hidden_weak(pthread_mutex_trylock)

static int __dummy_pthread_mutex_unlock(pthread_mutex_t *mutex) {
  return 0;
}
libc_hidden_proto(pthread_mutex_unlock)
weak_alias(__dummy_pthread_mutex_unlock, pthread_mutex_unlock)
libc_hidden_weak(pthread_mutex_unlock)