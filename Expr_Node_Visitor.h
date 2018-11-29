/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef EXPR_NODE_VISITOR_H_
#define EXPR_NODE_VISITOR_H_

class Add_Expr_Node;
class Sub_Expr_Node;
class Mul_Expr_Node;
class Div_Expr_Node;
class Mod_Expr_Node;
class Number_Expr_Node;

class Expr_Node_Visitor
{
public:

	virtual ~Expr_Node_Visitor(void);

	virtual void Visit_Add_Node (const Add_Expr_Node & node)=0;

	virtual void Visit_Sub_Node (const Sub_Expr_Node & node)=0;

	virtual void Visit_Mul_Node (const Mul_Expr_Node & node)=0;

	virtual void Visit_Div_Node (const Div_Expr_Node & node)=0;

	virtual void Visit_Mod_Node (const Mod_Expr_Node & node)=0;

	virtual int Visit_Num_Node (const Number_Expr_Node & node)=0;
};

#endif
