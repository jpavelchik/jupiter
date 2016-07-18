#if HAVE_CONIFG_H
#	include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include "jupcommon.h"


#if HAVE_PTHREAD_H
#	include <pthread.h>
#endif


static void* print_it(void* data)
{
	printf("Hello from %s!\n", (const char*)data);
	return (void*)0;
}


int print_routine(const char* name)
{
#if ASYNC_EXEC
	pthread_t tid;
	pthread_create(&tid, 0, print_it, (void*)name);
	pthread_join(tid, 0);
#else
	print_it((void*)name);
#endif

	return 0;
}
