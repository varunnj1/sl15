/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "pal.h"


void
str_prog_1(char *host)
{
	CLIENT *clnt;
	struct Output  *result_1;
	struct Input  doopreation_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, STR_PROG, STR_VER, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = doopreation_1(&doopreation_1_arg, clnt);
	if (result_1 == (struct Output *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	str_prog_1 (host);
exit (0);
}