#pragma once
#ifndef _PARSER_H_
#define _PARSER_H_

#include "utils.h"
#include "lexer.h"
#include "node.h"

class Parser {
public:
	Parser(const char *input = "", bool is_file = true) : lexer_(input, is_file) {}
	Node *parse();
private: //recursive down functions that is shown in slide...
	Node *expr();
	Node *term();
	Node *factor();
	Node *assign();
	Node *statements();
	void match(TokenType expect_type);
private:
	Lexer lexer_;
	TokenType next_token_;
};

#endif

