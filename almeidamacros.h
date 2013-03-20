/* Tiago de Almeida
 * tiago@almeida.inf.br
 *
 * Library of useful macros.
 */

/* Used for error messages. Sends the message to stderr. */
#define error(msg, ...)\
do{\
	fprintf(stderr, "Error: " msg "\n", ##__VA_ARGS__);\
	fflush(stderr);\
} while(0)

/* Macro used for verbose messages. Sends the message to stdout. */
#define verbose(msg, ...)\
do{\
	fprintf(stdout, " - " msg "\n", ##__VA_ARGS__);\
	fflush(stdout);\
} while(0)
