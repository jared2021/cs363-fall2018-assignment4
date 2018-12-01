/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Sub_Expr_Node.h"

Sub_Expr_Node::Sub_Expr_Node(void)
:Binary_Expr_Node(0,false)
{

}

Sub_Expr_Node::~Sub_Expr_Node(void)
{

}

int Sub_Expr_Node::evaluate (int num1,int num2)const
{
	return num1-num2;
}

void Sub_Expr_Node::set_left(Expr_Node* node)
{
	left_=node;
}

Expr_Node* Sub_Expr_Node::get_left(void)
{
	return left_;
}

void Sub_Expr_Node::set_right(Expr_Node* node)
{
	right_=node;
}

Expr_Node* Sub_Expr_Node::get_right(void)
{
	return right_;
}
void Sub_Expr_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Sub_Node(*this);
}

int Sub_Expr_Node::get_precidence(void)
{
	return precidence_;
}

bool Sub_Expr_Node::get_parenthesis(void)
{
	return parenthesis_;
}

void Sub_Expr_Node::set_parenthesis(bool t)
{
	parenthesis_=t;
}
