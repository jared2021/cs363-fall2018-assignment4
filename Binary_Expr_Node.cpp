/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Binary_Expr_Node.h"

Binary_Expr_Node::Binary_Expr_Node(void)
{

}

Binary_Expr_Node::Binary_Expr_Node(int p, bool t)
{
	precidence_=p;
	parenthesis_=t;
}

Binary_Expr_Node::~Binary_Expr_Node(void)
{
	delete left_;
	delete right_;
}

void Binary_Expr_Node::set_key(int key)
{
	key_=key;
}

int Binary_Expr_Node::get_key(void)
{
	return key_;
}
