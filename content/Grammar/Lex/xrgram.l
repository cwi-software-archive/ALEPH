%Start h1, h2, h3, grammar
	char sect_name[128];
%%

^".Pt"		{BEGIN h1;}

<h1>\"[^\"]*\"	{BEGIN h2;}

<h2>\"[^\"]*\"	{BEGIN h3;}

<h3>\"[^\"]*/\"	{
		strcpy(sect_name, &yytext[1]);
		BEGIN INITIAL;
	}

^"Syntax".*:\n".*<"		{BEGIN grammar;}

^".*>"		{BEGIN INITIAL;}

<grammar>[a-z][a-z ]*/\:	{
		printf("\\*<%s\\*>: %s!\n", yytext, sect_name);
	}

<grammar>[a-z][a-z ]*/[\],;.]	{
		printf("\\*<%s\\*>: %s%%\n", yytext, sect_name);
	}

"\\*<"[a-z][-a-z]*"\\*>"	{
		printf("%s: %s#\n", yytext, sect_name);
	}

.	{}

\n	{}
