/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Sub_Expr_Node.h"

Sub_Expr_Node::Sub_Expr_Node(Expr_Node & n1, Expr_Node & n2)
//trying to initialize Expr_Node * left_ and right_ but cannot because it is private in Binary_Expr_Node even though it should be included in and a part of all of these nodes.
:left_(n1),
right_(n2)
{

}

Sub_Expr_Node::~Sub_Expr_Node(void)
{

}
//I am confused as to what the evaluate method should be doing, If I'm understanding visitors and what they are supposed to do, the visitor is the one doing the computation not evaluate so what should the evaluate method be doing?
int Sub_Expr_Node::evaluate (int num1,int num2)
{
	return num1-num2;
}

void Sub_Expr_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Sub_Node(*this);
}
