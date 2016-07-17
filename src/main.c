#include <stdio.h>
#include <stdlib.h>

#if HAVE_CONIFG_H
#	include <config.h>
#endif

#if HAVE_PTHREAD_H
#	include <pthread.h>
#endif


static void* print_it(void* data)
{
	printf("Hello from %s!\n", (const char*)data);
	return (void*)0;
}


int main(int argc, char* argv[])
{
#if ASYNC_EXEC
	pthread_t tid;
	pthread_create(&tid, 0, print_it, argv[0]);
	pthread_join(tid, 0);
#else
	print_it(argv[0]);
#endif

	return EXIT_SUCCESS;
}
