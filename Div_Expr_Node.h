/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef DIV_EXPR_NODE_H_
#define DIV_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Div_Expr_Node : public Binary_Expr_Node
{
public:

	Div_Expr_Node(void);

	virtual ~Div_Expr_Node(void);

	virtual int evaluate (int num1, int num2);
};

#endif
