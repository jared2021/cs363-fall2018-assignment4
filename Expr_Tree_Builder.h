/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef EXPR_TREE_BUILDER_H_
#define EXPR_TREE_BUILDER_H_
#include "Expr_Node.h"
#include "Expr_Builder.h"

class Expr_Tree_Builder : public Expr_Builder
{
public:

	Expr_Tree_Builder (void);

	virtual ~Expr_Tree_Builder (void);
//trying to return an Expr_Node so I can use it to evaluate the tree in my Calculator.
	virtual Expr_Node start_expression (void);

	virtual void build_number (int n);

	virtual void build_add_operator (void);

	virtual void build_sub_operator (void);

	virtual void build_mul_operator (void);

	virtual void build_div_operator (void);

	virtual void build_mod_operator (void);

	virtual void build_parenthesis(void);

private:

	Expr_Node* n1;
	Expr_Node* n2;
	Expr_Node* op;
};

#endif
