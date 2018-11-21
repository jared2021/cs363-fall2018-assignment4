/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help 
 * on this assignment.
 *
 */

#ifndef SUB_EXPR_NODE_H_
#define SUB_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Sub_Expr_Node : public Binary_Expr_Node
{
public:

	Sub_Expr_Node(void);

	virtual ~Sub_Expr_Node(void);

	int evaluate (int num1, int num2);
};

#endif
