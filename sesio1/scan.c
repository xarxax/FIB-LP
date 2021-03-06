
/* parser.dlg -- DLG Description of scanner
 *
 * Generated from: example1.g
 *
 * Terence Parr, Will Cohen, and Hank Dietz: 1989-2001
 * Purdue University Electrical Engineering
 * With AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#define ANTLR_VERSION	13333
#include "pcctscfg.h"
#include "pccts_stdio.h"

#include <string>
#include <iostream>
using namespace std;

// struct to store information about tokens
typedef struct {
  string kind;
  string text;
} Attrib;

// function to fill token information (predeclaration)
void zzcr_attr(Attrib *attr, int type, char *text);

// fields for AST nodes
#define AST_FIELDS string kind; string text;
#include "ast.h"

// macro to create a new AST node (and function predeclaration)
#define zzcr_ast(as,attr,ttype,textt) as=createASTnode(attr,ttype,textt)
AST* createASTnode(Attrib* attr, int ttype, char *textt);
#include "antlr.h"
#include "ast.h"
#include "tokens.h"
#include "dlgdef.h"
LOOKAHEAD

void
#ifdef __USE_PROTOS
zzerraction(void)
#else
zzerraction()
#endif
{
	(*zzerr)("invalid token");
	zzadvance();
	zzskip();
}
/*
 * D L G tables
 *
 * Generated from: parser.dlg
 *
 * 1989-2001 by  Will Cohen, Terence Parr, and Hank Dietz
 * Purdue University Electrical Engineering
 * DLG Version 1.33MR33
 */

#include "mode.h"



static void act1()
{ 
		NLA = 1;
	}


static void act2()
{ 
		NLA = POW;
	}


static void act3()
{ 
		NLA = COMMA;
	}


static void act4()
{ 
		NLA = PLUS;
	}


static void act5()
{ 
		NLA = MINUS;
	}


static void act6()
{ 
		NLA = MUL;
	}


static void act7()
{ 
		NLA = DIV;
	}


static void act8()
{ 
		NLA = LPAR;
	}


static void act9()
{ 
		NLA = RPAR;
	}


static void act10()
{ 
		NLA = NUM;
	}


static void act11()
{ 
		NLA = SPACE;
    zzskip();  
	}

#define DfaStates	14
typedef unsigned char DfaState;

static DfaState st0[258] = {
  1, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 2, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 2, 14, 14, 14, 14, 14, 14, 
  14, 3, 4, 5, 6, 7, 8, 14, 9, 10, 
  10, 10, 10, 10, 10, 10, 10, 10, 10, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 11, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 11, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st1[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st2[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st3[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st4[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st5[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st6[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st7[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st8[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st9[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st10[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 10, 
  10, 10, 10, 10, 10, 10, 10, 10, 10, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st11[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 12, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st12[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 13, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};

static DfaState st13[258] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
  14, 14, 14, 14, 14, 14, 14, 14
};


DfaState *dfa[14] = {
	st0,
	st1,
	st2,
	st3,
	st4,
	st5,
	st6,
	st7,
	st8,
	st9,
	st10,
	st11,
	st12,
	st13
};


DfaState accepts[15] = {
  0, 1, 11, 8, 9, 6, 4, 3, 5, 7, 
  10, 0, 0, 2, 0
};

void (*actions[12])() = {
	zzerraction,
	act1,
	act2,
	act3,
	act4,
	act5,
	act6,
	act7,
	act8,
	act9,
	act10,
	act11
};

static DfaState dfa_base[] = {
	0
};



#define ZZSHIFT(c) (1+c)
#define MAX_MODE 1
#include "dlgauto.h"
