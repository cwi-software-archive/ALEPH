all: FSgram FSparams test dfg

FSgram: gram
	getFSgram gram >FSgram

FSparams: FSgram
	getFSparams FSgram >FSparams

test: gram
	../grm/test gram >test

dfg: gr.old gram
	dfnice gram gr.old >dfg
