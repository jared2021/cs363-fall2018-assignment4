/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Number_Expr_Node.h"

Number_Expr_Node::Number_Expr_Node(int num)
{
	key_=num;
}

Number_Expr_Node::~Number_Expr_Node(void)
{

}

void Number_Expr_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Num_Node(*this);
}

int Number_Expr_Node::get_key()
{
	return key_;
}
