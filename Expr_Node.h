/* Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include "Eval_Expr_Tree.h"

class Expr_Node
{
public:

	virtual void accept(Expr_Node_Visitor & v)=0;

	virtual int get_key(void)=0;

protected:

	int key_;

};

#endif
