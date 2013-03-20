/* Tiago de Almeida
 * tiago@almeida.inf.br
 *
 * Library of useful macros.
 */

/* Used to error messages. Sends the message to stderr. */
#define error(msg, ...)\
do{\
	fprintf(stderr, "Error: " msg "\n", ##__VA_ARGS__);\
	fflush(stderr);\
} while(0)
