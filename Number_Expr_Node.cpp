/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Number_Expr_Node.h"

Number_Expr_Node::Number_Expr_Node(int num)
{
	set_key(num);
}

Number_Expr_Node::~Number_Expr_Node(void)
{

}

void Number_Expr_Node::set_key(int key)
{
	key_=key;
}
