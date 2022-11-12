# include "stdio.h"
# define U(x) x
# define NLSTATE yyprevious=YYNEWLINE
# define BEGIN yybgin = yysvec + 1 +
# define INITIAL 0
# define YYLERR yysvec
# define YYSTATE (yyestate-yysvec-1)
# define YYOPTIM 1
# define YYLMAX 200
# define output(c) putc(c,yyout)
# define input() (((yytchar=yysptr>yysbuf?U(*--yysptr):getc(yyin))==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
# define unput(c) {yytchar= (c);if(yytchar=='\n')yylineno--;*yysptr++=yytchar;}
# define yymore() (yymorfg=1)
# define ECHO fprintf(yyout, "%s",yytext)
# define REJECT { nstr = yyreject(); goto yyfussy;}
int yyleng; extern char yytext[];
int yymorfg;
extern char *yysptr, yysbuf[];
int yytchar;
FILE *yyin ={stdin}, *yyout ={stdout};
extern int yylineno;
struct yysvf { 
	struct yywork *yystoff;
	struct yysvf *yyother;
	int *yystops;};
struct yysvf *yyestate;
extern struct yysvf yysvec[], *yybgin;
# define h1 2
# define h2 4
# define h3 6
# define grammar 8
	char sect_name[128];
# define YYNEWLINE 10
yylex(){
int nstr; extern int yyprevious;
while((nstr = yylook()) >= 0)
yyfussy: switch(nstr){
case 0:
if(yywrap()) return(0); break;
case 1:
	{BEGIN h1;}
break;
case 2:
{BEGIN h2;}
break;
case 3:
{BEGIN h3;}
break;
case 4:
{
		strcpy(sect_name, &yytext[1]);
		BEGIN INITIAL;
	}
break;
case 5:
	{BEGIN grammar;}
break;
case 6:
	{BEGIN INITIAL;}
break;
case 7:
{
		printf("\\*<%s\\*>: %s!\n", yytext, sect_name);
	}
break;
case 8:
{
		printf("\\*<%s\\*>: %s%%\n", yytext, sect_name);
	}
break;
case 9:
{
		printf("%s: %s#\n", yytext, sect_name);
	}
break;
case 10:
{}
break;
case 11:
{}
break;
case -1:
break;
default:
fprintf(yyout,"bad switch yylook %d",nstr);
} return(0); }
/* end of yylex */
int yyvstop[] ={
0,

10,
0,

11,
0,

10,
0,

10,
0,

10,
0,

10,
0,

10,
0,

10,
-4,
0,

10,
-7,
-8,
0,

2,
0,

3,
0,

-4,
0,

4,
0,

-7,
-8,
0,

8,
0,

7,
0,

6,
0,

1,
0,

9,
0,

5,
0,
0};
# define YYTYPE char
struct yywork { YYTYPE verify, advance; } yycrank[] ={
0,0,	0,0,	1,11,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	1,12,	
44,45,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	16,24,	0,0,	0,0,	
0,0,	0,0,	0,0,	17,26,	
0,0,	1,11,	16,24,	1,11,	
0,0,	3,16,	4,16,	5,17,	
17,26,	6,17,	7,18,	8,18,	
13,20,	1,11,	1,11,	39,41,	
2,14,	45,46,	4,14,	14,21,	
46,47,	6,14,	0,0,	8,14,	
16,24,	37,37,	16,25,	0,0,	
44,44,	0,0,	17,26,	20,33,	
17,27,	21,34,	10,14,	41,43,	
16,24,	16,24,	47,48,	0,0,	
0,0,	0,0,	17,26,	17,26,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	18,28,	0,0,	
0,0,	2,15,	0,0,	4,15,	
0,0,	14,22,	6,15,	18,28,	
8,15,	1,13,	2,13,	3,13,	
4,13,	5,13,	1,11,	6,13,	
7,13,	8,13,	9,13,	10,15,	
37,39,	38,40,	0,0,	9,19,	
0,0,	0,0,	0,0,	0,0,	
10,13,	18,28,	23,36,	18,29,	
19,30,	10,19,	22,35,	36,38,	
0,0,	16,24,	15,23,	40,42,	
0,0,	18,28,	18,28,	17,26,	
19,31,	0,0,	19,31,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	19,32,	19,31,	
33,37,	33,37,	33,37,	33,37,	
33,37,	33,37,	33,37,	33,37,	
33,37,	33,37,	33,37,	33,37,	
33,37,	33,37,	33,37,	33,37,	
33,37,	33,37,	33,37,	33,37,	
33,37,	33,37,	33,37,	33,37,	
33,37,	33,37,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	19,31,	18,28,	0,0,	
0,0,	19,30,	19,30,	19,30,	
19,30,	19,30,	19,30,	19,30,	
19,30,	19,30,	19,30,	19,30,	
19,30,	19,30,	19,30,	19,30,	
19,30,	19,30,	19,30,	19,30,	
19,30,	19,30,	19,30,	19,30,	
19,30,	19,30,	19,30,	42,42,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
42,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	42,42,	0,0,	
42,42,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	42,42,	42,42,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
42,44,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	42,42,	
0,0};
struct yysvf yysvec[] ={
0,	0,	0,
yycrank+-1,	0,		0,	
yycrank+-2,	yysvec+1,	0,	
yycrank+-3,	yysvec+1,	0,	
yycrank+-4,	yysvec+1,	0,	
yycrank+-5,	yysvec+1,	0,	
yycrank+-7,	yysvec+1,	0,	
yycrank+-8,	yysvec+1,	0,	
yycrank+-9,	yysvec+1,	0,	
yycrank+-10,	yysvec+1,	0,	
yycrank+-20,	yysvec+1,	0,	
yycrank+0,	0,		yyvstop+1,
yycrank+0,	0,		yyvstop+3,
yycrank+2,	0,		yyvstop+5,
yycrank+9,	0,		yyvstop+7,
yycrank+1,	0,		yyvstop+9,
yycrank+-24,	0,		yyvstop+11,
yycrank+-30,	0,		yyvstop+13,
yycrank+-81,	0,		yyvstop+15,
yycrank+84,	0,		yyvstop+18,
yycrank+3,	0,		0,	
yycrank+3,	0,		0,	
yycrank+2,	0,		0,	
yycrank+4,	0,		0,	
yycrank+0,	yysvec+16,	0,	
yycrank+0,	0,		yyvstop+22,
yycrank+0,	yysvec+17,	0,	
yycrank+0,	0,		yyvstop+24,
yycrank+0,	yysvec+18,	yyvstop+26,
yycrank+0,	0,		yyvstop+28,
yycrank+0,	yysvec+19,	yyvstop+30,
yycrank+0,	0,		yyvstop+33,
yycrank+0,	0,		yyvstop+35,
yycrank+47,	0,		0,	
yycrank+0,	0,		yyvstop+37,
yycrank+0,	0,		yyvstop+39,
yycrank+3,	0,		0,	
yycrank+12,	yysvec+33,	0,	
yycrank+8,	0,		0,	
yycrank+5,	0,		0,	
yycrank+3,	0,		0,	
yycrank+5,	0,		0,	
yycrank+-206,	0,		0,	
yycrank+0,	0,		yyvstop+41,
yycrank+-2,	yysvec+42,	0,	
yycrank+3,	0,		0,	
yycrank+10,	0,		0,	
yycrank+10,	0,		0,	
yycrank+0,	0,		yyvstop+43,
0,	0,	0};
struct yywork *yytop = yycrank+303;
struct yysvf *yybgin = yysvec+1;
char yymatch[] ={
00  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,012 ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
040 ,01  ,'"' ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,',' ,'-' ,',' ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,',' ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,01  ,01  ,01  ,
01  ,01  ,01  ,01  ,01  ,',' ,01  ,01  ,
01  ,'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,
'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,
'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,'a' ,
'a' ,'a' ,'a' ,01  ,01  ,01  ,01  ,01  ,
0};
char yyextra[] ={
0,0,0,0,1,0,0,1,
1,0,0,0,0,0,0,0,
0};
int yylineno =1;
# define YYU(x) x
# define NLSTATE yyprevious=YYNEWLINE
char yytext[YYLMAX];
struct yysvf *yylstate [YYLMAX], **yylsp, **yyolsp;
char yysbuf[YYLMAX];
char *yysptr = yysbuf;
int *yyfnd;
extern struct yysvf *yyestate;
int yyprevious = YYNEWLINE;
yylook(){
	register struct yysvf *yystate, **lsp;
	register struct yywork *yyt;
	struct yysvf *yyz;
	int yych;
	struct yywork *yyr;
# ifdef LEXDEBUG
	int debug;
# endif
	char *yylastch;
	/* start off machines */
# ifdef LEXDEBUG
	debug = 0;
# endif
	if (!yymorfg)
		yylastch = yytext;
	else {
		yymorfg=0;
		yylastch = yytext+yyleng;
		}
	for(;;){
		lsp = yylstate;
		yyestate = yystate = yybgin;
		if (yyprevious==YYNEWLINE) yystate++;
		for (;;){
# ifdef LEXDEBUG
			if(debug)fprintf(yyout,"state %d\n",yystate-yysvec-1);
# endif
			yyt = yystate->yystoff;
			if(yyt == yycrank){		/* may not be any transitions */
				yyz = yystate->yyother;
				if(yyz == 0)break;
				if(yyz->yystoff == yycrank)break;
				}
			*yylastch++ = yych = input();
		tryagain:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"char ");
				allprint(yych);
				putchar('\n');
				}
# endif
			yyr = yyt;
			if ( (int)yyt > (int)yycrank){
				yyt = yyr + yych;
				if (yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					goto contin;
					}
				}
# ifdef YYOPTIM
			else if((int)yyt < (int)yycrank) {		/* r < yycrank */
				yyt = yyr = yycrank+(yycrank-yyt);
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"compressed state\n");
# endif
				yyt = yyt + yych;
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					goto contin;
					}
				yyt = yyr + YYU(yymatch[yych]);
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"try fall back character ");
					allprint(YYU(yymatch[yych]));
					putchar('\n');
					}
# endif
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transition */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					goto contin;
					}
				}
			if ((yystate = yystate->yyother) && (yyt= yystate->yystoff) != yycrank){
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"fall back to state %d\n",yystate-yysvec-1);
# endif
				goto tryagain;
				}
# endif
			else
				{unput(*--yylastch);break;}
		contin:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"state %d char ",yystate-yysvec-1);
				allprint(yych);
				putchar('\n');
				}
# endif
			;
			}
# ifdef LEXDEBUG
		if(debug){
			fprintf(yyout,"stopped at %d with ",*(lsp-1)-yysvec-1);
			allprint(yych);
			putchar('\n');
			}
# endif
		while (lsp-- > yylstate){
			*yylastch-- = 0;
			if (*lsp != 0 && (yyfnd= (*lsp)->yystops) && *yyfnd > 0){
				yyolsp = lsp;
				if(yyextra[*yyfnd]){		/* must backup */
					while(yyback((*lsp)->yystops,-*yyfnd) != 1 && lsp > yylstate){
						lsp--;
						unput(*yylastch--);
						}
					}
				yyprevious = YYU(*yylastch);
				yylsp = lsp;
				yyleng = yylastch-yytext+1;
				yytext[yyleng] = 0;
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"\nmatch ");
					sprint(yytext);
					fprintf(yyout," action %d\n",*yyfnd);
					}
# endif
				return(*yyfnd++);
				}
			unput(*yylastch);
			}
		if (yytext[0] == 0  /* && feof(yyin) */)
			{
			yysptr=yysbuf;
			return(0);
			}
		yyprevious = yytext[0] = input();
		if (yyprevious>0)
			output(yyprevious);
		yylastch=yytext;
# ifdef LEXDEBUG
		if(debug)putchar('\n');
# endif
		}
	}
yyback(p, m)
	int *p;
{
if (p==0) return(0);
while (*p)
	{
	if (*p++ == m)
		return(1);
	}
return(0);
}
	/* the following are only used in the lex library */
yyinput(){
	return(input());
	}
yyoutput(c)
  int c; {
	output(c);
	}
yyunput(c)
   int c; {
	unput(c);
	}
