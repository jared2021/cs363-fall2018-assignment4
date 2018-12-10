/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef EXPR_TREE_BUILDER_H_
#define EXPR_TREE_BUILDER_H_
#include "Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Expr_Builder.h"
#include "Stack.h"

class Expr_Tree_Builder : public Expr_Builder
{
public:

	Expr_Tree_Builder (void);

	~Expr_Tree_Builder (void);

	virtual void start_expression (void);

	virtual void build_number (int n);

	virtual void build_add_operator (void);

	virtual void build_sub_operator (void);

	virtual void build_mul_operator (void);

	virtual void build_div_operator (void);

	virtual void build_mod_operator (void);

	virtual void build_open_parenthesis(void);

	virtual void build_close_parenthesis(void);

	virtual void check_precidence(Array <Binary_Expr_Node*> &nodes, int iterator);

	virtual Binary_Expr_Node* get_root_node(void);

private:

	Expr_Node* n1;
	Binary_Expr_Node* op;
	Binary_Expr_Node* temp;
	Array <Binary_Expr_Node*> nodes;
	Stack <Expr_Node*> tree;
	int iterator;
	bool parenthesis_;
};

#endif
