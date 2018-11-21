/* Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */

#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"

class Binary_Expr_Node : public Expr_Node
{
public:

	Binary_Expr_Node (void);

	virtual ~Binary_Expr_Node (void);

	virtual int execute (void);

	virtual int evaluate(int num1,int num2)=0;

	virtual int get_key(void);

	virtual void set_key(int key);

	virtual void accept(Expr_Node_Visitor & v)=0;

protected:

	Expr_Node * right_;
	Expr_Node * left_;
	Expr_Node * parent_;
};

#endif
