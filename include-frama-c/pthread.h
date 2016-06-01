/* Stubs for analyzing programs using the POSIX threads library 
   Redefining useful parts of pthread.h */

#ifndef _FRAMAC_PTHREAD_H_
#define _FRAMAC_PTHREAD_H_

typedef int   pthread_t;
typedef int   pthread_attr_t;
typedef int   pthread_mutex_t;
typedef int   pthread_mutexattr_t;

#define PTHREAD_MUTEX_INITIALIZER 1

int       pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg);
int       pthread_cancel(pthread_t thread);
int       pthread_join(pthread_t thread, void **thread_return);
void      pthread_exit(void *thread_return);
pthread_t pthread_self(void);


int    pthread_mutex_init (pthread_mutex_t * mutex , pthread_mutexattr_t * attr );
int    pthread_mutex_lock (pthread_mutex_t * mutex );
int    pthread_mutex_unlock (pthread_mutex_t * mutex );
int    pthread_mutex_destroy(pthread_mutex_t *mutex);


int    pthread_setcancelstate(int state, int *oldstate);
int    pthread_setcanceltype(int type, int *oldtype);
void   pthread_testcancel(void);

#endif
