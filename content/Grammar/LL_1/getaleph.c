#include	"par.h"
#define	ACC	'\''
#define	NL	'\n'

char *inp, *accpnt;
char buff[100];

process()	{
	char ch;

	inp = buff;
	for (;;)
		switch (ch = getc(ifile))	{
		case EOS:
			exit(0);
		case NL:
			inp = buff;
			break;
		case ' ':
		case '\t':
			*inp++ = ch;
			break;
		case ACC:
			prime();
			break;
		default:
			skipnl();
			break;
		}
}

prime()	{
	char ch;

	accpnt = inp;
	*inp++ = ACC;
	while ( (ch = getc(ifile)) >= 'a' && ch <= 'z')
		*inp++ = ch;
	if (ch EQ ACC)
		bold();
	else
	if (ch NE NL)
		skipnl();
	else
		inp = buff;
}

bold()	{

	*inp++ = ACC;
	*inp++ = EOS;
	if	(buffeq(accpnt, "'action'")
		|| buffeq(accpnt, "'predicate'")
		|| buffeq(accpnt, "'function'")
		|| buffeq(accpnt, "'question'")
	)
		rule();
	else
		skipnl();
}

rule()	{

	copy_buff();
	while (copy_line()) {}
	inp = buff;
}

copy_buff()	{
	for (inp = buff; *inp; inp++)
		putchar(*inp);
}

copy_line()	{
	char ch;
	char dl;

	dl = 1;
	while ( (ch = getchar1()) && ch NE NL)	{
		putchar(ch);
		if (ch EQ '.')
			dl = -dl;
		if (ch EQ '$')
			dl = 1 - dl;
	}
	putchar(NL);
	return dl EQ 0 || dl EQ 1;
}

skipnl()	{
	char ch;

	while ( (ch = getchar1()) && ch NE NL) {}
	inp = buff;
}

buffeq(s1, s2)
char *s1, *s2;	{

	while (*s1++ EQ *s2)
		if (*s2++ EQ 0)
			return 1;
	return 0;
}
