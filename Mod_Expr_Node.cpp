/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Mod_Expr_Node.h"

Mod_Expr_Node::Mod_Expr_Node(void)
{

}

Mod_Expr_Node::~Mod_Expr_Node(void)
{

}

int Mod_Expr_Node::evaluate (int num1,int num2)
{
	return num1%num2;
}
