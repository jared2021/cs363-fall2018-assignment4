/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#ifndef MOD_EXPR_NODE_H_
#define MOD_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Mod_Expr_Node : public Binary_Expr_Node
{
public:

	Mod_Expr_Node(void);

	virtual ~Mod_Expr_Node(void);

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
