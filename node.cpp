#include "utils.h"
#include "node.h"

void OpNode::gen_code(FILE *fp, const Table &symbol_table) const {

	left_->gen_code(fp, symbol_table);
	fprintf(fp, "push eax\n");
	right_->gen_code(fp, symbol_table);
	fprintf(fp, "pop ebx\n");
	switch (op_type_) {
	case TOKEN_ADD:
		fprintf(fp, "add eax, ebx, eax\n");
		return;
	case TOKEN_MINUS:
		fprintf(fp, "sub eax, ebx, eax\n");
		return;
	case TOKEN_MULTI:
		fprintf(fp, "mul eax, ebx, eax\n");
		return;
	case TOKEN_DEVI:
		fprintf(fp, "div eax, ebx, eax\n");
		return;
	default:
		return;
	}
}

int OpNode::eval(Table *env) const {
	int x = left_->eval(env);
	int y = right_->eval(env);
	switch (op_type_) {
	case TOKEN_ADD:   return x + y;
	case TOKEN_MINUS: return x - y;
	case TOKEN_MULTI: return x * y;
	case TOKEN_DEVI:  return x / y;
	default:
		ERROR << "unknown op type " << op_type_;
	}
	return 0;
}
