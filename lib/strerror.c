#include	<stdio.h>

//extern const char	*sys_errlist[];
extern int	sys_nerr;

char *
strerror(int error)
{
	static char	mesg[30];

//	if (error >= 0 && error <= sys_nerr)
		return(strerror(error));

	sprintf(mesg, "Unknown error (%d)", error);
	return(mesg);
}
