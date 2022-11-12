all: xref xrgram

xref: xref.c
	cc xref.c -ll -o xref

xref.c: xref.l
	lex -t xref.l >xref.c

xrgram: xrgram.c
	cc xrgram.c -ll -o xrgram

xrgram.c: xrgram.l
	lex -t xrgram.l >xrgram.c
