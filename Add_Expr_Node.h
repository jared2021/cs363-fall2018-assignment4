/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef ADD_EXPR_NODE_H_
#define ADD_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Add_Expr_Node : public Binary_Expr_Node
{
public:

	Add_Expr_Node(void);

	virtual ~Add_Expr_Node(void);

	virtual int evaluate (int num1, int num2)const;

	virtual void set_left(Expr_Node* node);

	virtual Expr_Node* get_left(void);

	virtual void set_right(Expr_Node* node);

	virtual Expr_Node* get_right(void);

	virtual void accept(Expr_Node_Visitor & v);

	virtual int get_precidence(void);

	virtual bool get_parenthesis(void);

	virtual void set_parenthesis(bool t);
};

#endif
