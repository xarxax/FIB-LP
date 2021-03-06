
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
#include <map>
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
		NLA = BEGIN;
	}


static void act3()
{ 
		NLA = WRITE;
	}


static void act4()
{ 
		NLA = POW;
	}


static void act5()
{ 
		NLA = COMMA;
	}


static void act6()
{ 
		NLA = PLUS;
	}


static void act7()
{ 
		NLA = MINUS;
	}


static void act8()
{ 
		NLA = MUL;
	}


static void act9()
{ 
		NLA = DIV;
	}


static void act10()
{ 
		NLA = LPAR;
	}


static void act11()
{ 
		NLA = RPAR;
	}


static void act12()
{ 
		NLA = NUM;
	}


static void act13()
{ 
		NLA = ID;
	}


static void act14()
{ 
		NLA = ASIG;
	}


static void act15()
{ 
		NLA = SPACE;
    zzskip();  
	}

#define DfaStates	27
typedef unsigned char DfaState;

static DfaState st0[258] = {
  1, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 2, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 2, 27, 27, 27, 27, 27, 27, 
  27, 3, 4, 5, 6, 7, 8, 27, 9, 10, 
  10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 
  27, 27, 27, 27, 27, 27, 12, 13, 12, 12, 
  12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 
  12, 14, 12, 12, 12, 12, 12, 12, 15, 12, 
  12, 12, 27, 27, 27, 27, 27, 27, 12, 13, 
  12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 
  12, 12, 12, 14, 12, 12, 12, 12, 12, 12, 
  15, 12, 12, 12, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st1[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st2[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st3[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st4[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st5[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st6[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st7[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st8[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st9[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st10[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 10, 
  10, 10, 10, 10, 10, 10, 10, 10, 10, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st11[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 16, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st12[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st13[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  17, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 17, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st14[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  18, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 18, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st15[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 19, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 19, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st16[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st17[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 20, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 20, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st18[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 21, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  21, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st19[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 22, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 22, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st20[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 23, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 23, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st21[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st22[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 24, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 24, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st23[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 25, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 25, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st24[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  26, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 26, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st25[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};

static DfaState st26[258] = {
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 
  27, 27, 27, 27, 27, 27, 27, 27
};


DfaState *dfa[27] = {
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
	st13,
	st14,
	st15,
	st16,
	st17,
	st18,
	st19,
	st20,
	st21,
	st22,
	st23,
	st24,
	st25,
	st26
};


DfaState accepts[28] = {
  0, 1, 15, 10, 11, 8, 6, 5, 7, 9, 
  12, 0, 13, 13, 13, 13, 14, 0, 0, 0, 
  0, 4, 0, 0, 0, 2, 3, 0
};

void (*actions[16])() = {
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
	act11,
	act12,
	act13,
	act14,
	act15
};

static DfaState dfa_base[] = {
	0
};



#define ZZSHIFT(c) (1+c)
#define MAX_MODE 1
#include "dlgauto.h"
