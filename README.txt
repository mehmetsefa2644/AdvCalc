

Simply stated, a compiler is a program that can read a program in one language
— the source language — and translate it into an equivalent program in
another language — the target language; see Fig. 1.1. An important role of the
compiler is to report any errors in the source program that it detects during
the translation process.


An interpreter is another common kind of language processor. Instead of
producing a target program as a translation, an interpreter appears to directly
execute the operations specified in the source program on inputs supplied by
the user.

Source

	Calculator calc;
	if argc==1 then
		calc = Calculator(argv[1]);
		calc.compile();
	else
		calc.interpret();

Calculator

	buld_symbol_table();
	interpret();
	compile();
		
parser

	match();
	parse();
	statement();
	assign();
	term();
	factor();
	
lexer

	typedef enum {}TokenType;
	token_map();
	read_char();
	back_char();
	get_token();

node
	typedef enum {}NodeType;




