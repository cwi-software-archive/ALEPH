%Start h1, h2, h3
	char sect_name[128];
%%

^".Pt"		{BEGIN h1;}

<h1>\"[^\"]*\"	{BEGIN h2;}

<h2>\"[^\"]*\"	{BEGIN h3;}

<h3>\"[^\"]*/\"	{
		strcpy(sect_name, &yytext[1]);
		BEGIN INITIAL;
	}

^".Dr ".*$	{log('!');}

^".Xr ".*$	{log('#');}

.	{}

\n	{}

%%
log(c)	{
	char quoted = yytext[4] == '"';
	char *txt;

	if (quoted)	{
		if (yytext[yyleng-1] != '"')
			fprintf(stderr, "In %s, ill-quoted xref\n", sect_name);
		yytext[yyleng-1] = '\0';
		txt = &yytext[5];
	}
	else	txt = &yytext[4];

	printf("%s: %s%c\n", txt, sect_name, c);

	if (quoted)
		yytext[yyleng-1] = '"';
}
