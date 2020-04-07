#ifndef	_NEOEXIT_H
#define	_NEOEXIT_H 1
#include <sysexits.h>

#define NX_OK		200	// Exit okay, task complete generic
#define NX_CREATED	201	// Exit okay, and resource created
#define NX_ACCEPTED	202	// Exit okay, input accepted
// #define NX_INFO	203
#define NX_NOCONTENT	204	// Exit okay, task complete with no output
// #define NX_RESET	205
// #define NX_PARTIAL	206
// #define NX_MULTI	207
// #define NX_REPORTED	208
// #define NX_IMUSED	209

#define NX_BADREQ	400	// Fail, bad request/syntax
#define NX_UNAUTH	401	// Fail, not authorized
#define NX_PAYREQ	402	// Fail, license not activated
#define	NX_FORBID	403	// Fail, action forbidden
#define	NX_NOTFOUND	404	// Fail, something was not found
// #define NX_MTHDALLW	405
// #define NX_NOTACCEPT	406
// #define NX_PROXYAUTH	407
#define NX_REQTIME	408	// Fail, program timed out
#define NX_CONFLICT	409	// Fail, conflict
#define NX_GONE		410	// Fail, something was removed
// #define NX_LENGTHREQ	411
#define NX_PRECONFAIL	412	// Fail, precondition not met
#define NX_PAYLOADLRG	413	// Fail, input exceeds size limit
// #define NX_URILONG	414
// #define NX_MEDIA	415
// #define NX_RANGE	416
#define NX_FAILEXPECT	417	// Fail, input was not what was expected
#define	NX_TEAPOT	418	// Fail, coffee parameters passed to teapot
// #define NX_MISDIRREQ	421
#define NX_UNPROCESS	422	// Fail, input could not be processed
#define NX_LOCKED	423	// Fail, something was locked
#define NX_FAILDEP	424	// Fail, missing dependency
#define NX_EARLY	425	// Fail, request at wrong time
#define NX_UPGRADE	426	// Fail, client version must upgrade
// #define NX_PRECONREQ	428
#define NX_TOOMANY	429	// Fail, too many requests for a time
// #define NX_REQHEAD	431
#define NX_LEGAL	451	// Fail, halted for legal reasons

#define NX_INTERNAL	500	// Fail, generic internal error
#define NX_NOIMPLEMENT	501	// Fail, function not implemented
// #define NX_GATEWAY	502
#define NX_UNAVAIL	503	// Fail, program or system unavailable
// #define NX_TIMEOUT	504
// #define NX_VERSION	505
// #define NX_NEGOTIATE	506
#define NX_STORAGE	507	// Fail, not enough storage space
#define NX_LOOP		508	// Fail, loop condition detected
// #define NX_EXTEND	510
// #define NX_NETAUTH	511