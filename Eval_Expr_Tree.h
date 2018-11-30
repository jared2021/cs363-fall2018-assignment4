/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef EVAL_EXPR_TREE_H_
#define EVAL_EXPR_TREE_H_

#include "Expr_Node_Visitor.h"

class Eval_Expr_Tree : public Expr_Node_Visitor
{
public:

	Eval_Expr_Tree(void);

	virtual ~Eval_Expr_Tree(void);

	virtual void Visit_Add_Node (Add_Expr_Node & node);

	virtual void Visit_Sub_Node (Sub_Expr_Node & node);

	virtual void Visit_Mul_Node (Mul_Expr_Node & node);

	virtual void Visit_Div_Node (Div_Expr_Node & node);

	virtual void Visit_Mod_Node (Mod_Expr_Node & node);

	virtual bool Visit_Num_Node (Number_Expr_Node & node);

	int result (void);

private:

	int result_;
};

#endif
