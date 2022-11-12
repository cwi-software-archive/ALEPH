 NEST = DECSETY . 
 DECSETY = DECS ; EMPTY . 
 DECS = DEC ; DECS DEC . 
 DEC = DESCR TAG . 
 DESCR = STACK ; NONSTACK . 
 NONSTACK = CONSTANT ; VARIABLE ; TABLE ; FILE ; RULE . 
 CONSTAGSETY = CONSTAGS ; EMPTY . 
 CONSTAGS = CONSTAG ; CONSTAGS CONSTAG . 
 CONSTAG = CONSTANT TAG . 
 DEF = TACK ; constant ; variable ; rule ; file ; EXTERN . 
 TACK = table ; stack . 
 EXTERN = external constant ; external table ; external TYPE EFFECT rule ; standard . 
 EMPTY = . 
 TAG = LETTER ; TAG LETTER ; TAG DIGIT . 
 LETTER = letter ALPHA . 
 ALPHA = a ; b ; c ; d ; e ; f ; g ; h ; i ; j ; k ; l ; m ; n ; o ; p ; q ; r ; s ; t ; u ; v ; w ; x ; y ; z . 
 DIGIT = digit zero ; digit one ; digit two ; digit three ; digit four ; digit five ; digit six ; digit seven ; digit eight ; digit nine . 
 NOREQ = req form EMPTY req loc EMPTY . 
 RULE = TYPE EFFECT with PARAMSETY rule . 
 TYPE = fallible ; infallible . 
 EFFECT = side ; nonside . 
 LF = new FORMALSETY ; LF BLOCK . 
 RULEBODY = alternative series ; classification . 
 MEMBIX = member ; affix . 
 TEF = TYPE ; EFFECT . 
 TYPE = fallible ; infallible . 
 EFFECT = side ; nonside . 
 REQ = req form FORMSETY req loc LOCSETY . 
 FORMSETY = FORMS ; EMPTY . 
 FORMS = FORM ; FORMS FORM . 
 FORM = formal uninit TAG . 
 OBJECTSETY = OBJECTS ; EMPTY . 
 OBJECTS = FIELDS ; LOCS ; FORMS . 
 OBJECT = FIELD ; LOC ; FORM . 
 MEMBER = affix form ; compound member ; OPERATION . 
 LASTMEMBER = MEMBER ; TERMINATOR . 
 LF = new FORMALSETY ; LF BLOCK . 
 FORMALSETY = FORMALS ; EMPTY . 
 FORMALS = FORMAL ; FORMALS FORMAL . 
 FORMAL = FDESCR TAG . 
 FDESCR = formal FITACK ; formal INIT . 
 FITACK = FITAB ; FIELDS stack . 
 FITAB = file ; FIELDS table . 
 BLOCKSETY = BLOCKS ; EMPTY . 
 BLOCKS = BLOCK ; BLOCKS BLOCK . 
 BLOCK = COMPOUND LABELETY LOCALSETY . 
 COMPOUND = ACCESS compound . 
 ACCESS = accessible ; inaccessible . 
 LABELETY = LABEL ; EMPTY . 
 LABEL = TYPE EFFECT label TAG . 
 LOCALSETY = LOCALS ; EMPTY . 
 LOCALS = LOCAL ; LOCALS LOCAL . 
 LOCAL = local INIT TAG . 
 INIT = init ; halfinit ; uninit . 
 LOCSETY = LOCS ; EMPTY . 
 LOCS = LOC ; LOCS LOC . 
 LOC = local uninit TAG . 
 OPERATION = transport ; identity ; extension . 
 AFFIX = actual affix ; destination . 
 PARAMSETY = PARAMS ; EMPTY . 
 PARAMS = PARAM ; PARAMS PARAM . 
 PARAM = INOUT parameter ; file parameter ; TACK CAL parameter . 
 FORLOC = formal ; local . 
 CONSTABLE = CONSTANT ; VARIABLE . 
 TACK = table ; stack . 
 INDIR = index ; direct . 
 INOUT = in ; inout ; out . 
 INIT = init ; halfinit ; uninit . 
 TERMINATOR = failure ; success ; exit ; jump . 
 STABLE = STACK ; TABLE . 
 RESTRICTED = free ; DEPENDSETY . 
 PLAIN = integral ; character . 
 CONSTANT = DEPENDSETY constant . 
 DEPENDSETY = DEPENDS ; EMPTY . 
 DEPENDS = DEPEND ; DEPENDS DEPEND . 
 DEPEND = dependent on TAG . 
 VARIABLE = variable . 
 TABLE = FIELDS table . 
 FIELDS = FIELD ; FIELDS FIELD . 
 FIELDSETY = FIELDS ; EMPTY . 
 FIELD = SELECTORS field . 
 SELECTORS = SELECTOR ; SELECTORS SELECTOR . 
 SELECTORSETY = SELECTORS ; EMPTY . 
 SELECTOR = selector TAG . 
 TACK = table ; stack . 
 STACK = DEPENDSETY FIELDS stack . 
 CALETY = CAL ; EMPTY . 
 CAL = i ; CAL i . 
 BOXETY = box symbol ; EMPTY . 
 MICA = max ; min ; calibre . 
 LIMIT = MICA limit . 
 FILE = file . 
 EXTERN = external constant ; external table ; external TYPE EFFECT rule ; standard . 
 STANDARD = DEC . 
 FITAB = file ; FIELDS table . 
 FITACK = FITAB ; FIELDS stack . 
 NOTION = ALPHA ; NOTION ALPHA . 
 NOTETY = NOTION ; EMPTY . 
 THING = NOTION ; ( NOTETY1 ) NOTETY2 ; THING ( NOTETY1 ) NOTETY2 . 
 WHETHER = where ; unless . 
