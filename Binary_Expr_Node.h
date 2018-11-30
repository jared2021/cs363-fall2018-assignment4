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

	Binary_Expr_Node (int p);

	virtual ~Binary_Expr_Node (void);

	virtual int evaluate(int num1,int num2)const=0;

	virtual int get_key(void);

	virtual void set_key(int key);

	virtual void set_left(Expr_Node* node)=0;

	virtual Expr_Node* get_left(void);

	virtual void set_right(Expr_Node* node)=0;

	virtual Expr_Node* get_right(void);

	virtual void accept(Expr_Node_Visitor & v)=0;

	virtual int get_precidence(void)=0;

	Expr_Node * right_;

	Expr_Node * left_;

protected:

	int precidence_;
};

#endif
