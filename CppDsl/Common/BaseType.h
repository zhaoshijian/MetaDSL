#ifndef __BASETYPE_H__
#define __BASETYPE_H__

#include <assert.h>
#include <math.h>
#include <memory.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#if defined(__WINDOWS__)
	#include <winsock2.h>
	#include <ws2tcpip.h>
	#include <windows.h>
	#include <WinBase.h>

#elif defined(__LINUX__)
	#include <pthread.h>
	#include <unistd.h>
	#include <errno.h>
	#include <signal.h>
	#include <sys/ioctl.h>
	#include <sys/poll.h>
	#include <sys/types.h>
	#include <sys/time.h>
	#include <sys/socket.h>
	#include <sys/uio.h>
	#include <sys/un.h>
	#include <netinet/in.h>
	#include <netinet/tcp.h>
	#include <arpa/inet.h>
	#include <netdb.h>
	#include <net/if.h>
	#include <limits.h>
	
	#define TRUE			1
	#define FALSE			0

#endif

#define INVALID_ID		-1
#define MyAssert(x)

#endif //__BASETYPE_H__