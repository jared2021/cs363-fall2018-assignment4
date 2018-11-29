/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef NUMBER_EXPR_NODE_H_
#define NUMBER_EXPR_NODE_H_

#include "Expr_Node.h"

class Number_Expr_Node : public Expr_Node
{
public:

	Number_Expr_Node(int num);

	~Number_Expr_Node(void);

	virtual int execute (void);

	virtual void accept(Expr_Node_Visitor & v);

private:
	Number_Expr_Node(void);
};

#endif
