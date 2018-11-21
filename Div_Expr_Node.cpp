/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Div_Expr_Node.h"
#include <iostream>
Div_Expr_Node::Div_Expr_Node(Expr_Node & n1, Expr_Node & n2)
:left_(n1),
right_(n2)
{

}

Div_Expr_Node::~Div_Expr_Node(void)
{

}

int Div_Expr_Node::evaluate (int num1, int num2)
{
	if(num2==0)
	{
		std::cout<<"Invalid number.";
		return 0;
	}
	else 
	{
		return num1 / num2;
	}
}

void Div_Expr_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Div_Node(*this);
}
