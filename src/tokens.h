

/*
* This file is used for holding the reserved keywords and tokens 
* for Cobra.
*/

#ifndef TOKENS_H_
#define TOKENS_H_

/*
* The basic token structure
*/
struct Token{
	int tok; // Taken from TOK from tokens.h
	const char* value;
};

enum TOK{
	// Reserved Words
	IMPORT = 256,
	INCLUDE,
	MACRO,
	VAR,
	RETURN,
	IF,
	ELSE,
	NULL_LITERAL, 
	TRUE_LITERAL,
	FALSE_LITERAL,
	FOR,
	DO,
	WHILE,
	EACH,
	NEW,
	THIS,
	STRICT,
	TRY,
	CATCH,
	FINALLY,
	THROW,

	// Logic
	LESS = 300,
	GREATER,
	LESS_EQUALS,
	GREATER_EQUALS,
	NOT_EQUALS,
	EQUALS,
	DOUBLE_EQUALS,
	OR,
	NOT,
	AND,
	MOD,

	// Operators
	PLUS = 400,
	DOUBLE_PLUS,
	MINUS,
	DOUBLE_MINUS,
	TIMES,
	DIVIDE,

	// Punctuators and objects
	LPAREN = 500,
	RPAREN,
	LBRACE,
	RBRACE,
	LBRACKET,
	RBRACKET,
	STATIC,
	CONSTRUCTOR,
	PROTOTYPE,
	GLOBAL,
	SINGLE_QUOTE,
	DOUBLE_QUOTE,
	ESCAPE,
	CLOSE_DOUBLE_COMMENT,
	OPEN_DOUBLE_COMMENT,
	SINGLE_COMMENT,

	// Punctuators
	COMMA = 600,
	PERIOD,
	SEMI,
	COLON,

	// Internal
	EOF_LITERAL = 2000,
	ID, // Identifier
	RETURN_NUM,
	RETURN_STR	
};

#endif // TOKENS_H_