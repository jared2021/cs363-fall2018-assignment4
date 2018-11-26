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

Add_Expr_Node::Add_Expr_Node(Expr_Node & n1, Expr_Node & n2)
//For all nodes, it says it doesn't have left_ and right_ even though it should because it is a part of the Binary_Expr_Node class.
:left_(n1),
right_(n2)
{

}

Add_Expr_Node::~Add_Expr_Node(void)
{

}

int Add_Expr_Node::evaluate (int num1,int num2)
{
	return num1+num2;
}

void Add_Expr_Node::accept(Expr_Node_Visitor & v)
{
	//won't recognize this method call for whatever reason.
	v.Visit_Add_Node (*this);
}
