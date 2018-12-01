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

	//virtual ~Expr_Node_Visitor(void);

	virtual void Visit_Add_Node (Add_Expr_Node & node)=0;

	virtual void Visit_Sub_Node (Sub_Expr_Node & node)=0;

	virtual void Visit_Mul_Node (Mul_Expr_Node & node)=0;

	virtual void Visit_Div_Node (Div_Expr_Node & node)=0;

	virtual void Visit_Mod_Node (Mod_Expr_Node & node)=0;

	virtual bool Visit_Num_Node (Number_Expr_Node & node)=0;
};

#endif
