/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Sub_Expr_Node.h"

Sub_Expr_Node::Sub_Expr_Node(Expr_Node & n1, Expr_Node & n2)
:left_(n1),
right_(n2)
{

}

Sub_Expr_Node::~Sub_Expr_Node(void)
{

}

int Sub_Expr_Node::evaluate (int num1,int num2)
{
	return num1-num2;
}

void Sub_Expr_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Sub_Node(*this);
}
