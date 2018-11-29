/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Add_Expr_Node.h"

Add_Expr_Node::Add_Expr_Node(void)
{

}

Add_Expr_Node::~Add_Expr_Node(void)
{

}

int Add_Expr_Node::evaluate (int num1,int num2)
{
	return num1+num2;
}

void Add_Expr_Node::set_left(Expr_Node & node)
{
	left_=&node;
}

void Add_Expr_Node::set_right(Expr_Node & node)
{
	right_=&node;
}
void Add_Expr_Node::accept(Expr_Node_Visitor & v)
{
	//won't recognize this method call for whatever reason.
	v.Visit_Add_Node (*this);
}
