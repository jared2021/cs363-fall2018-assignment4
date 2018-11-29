/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Mul_Expr_Node.h"

Mul_Expr_Node::Mul_Expr_Node(void)
{

}

Mul_Expr_Node::~Mul_Expr_Node(void)
{

}

int Mul_Expr_Node::evaluate (int num1, int num2)
{
	return num1 * num2;
}

void Mul_Expr_Node::set_left(Expr_Node & node)
{
	left_=&node;
}

void Mul_Expr_Node::set_right(Expr_Node & node)
{
	right_=&node;
}
void Mul_Expr_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Mul_Node(*this);
}
