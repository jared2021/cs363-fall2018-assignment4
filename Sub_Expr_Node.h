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
//For some reason the compiler has a propblem with the class name saying it expects the class name before the '{' for all my classes except the Add_Expr_Node and I don't know why.
{
public:
	
	Sub_Expr_Node(void);

	virtual ~Sub_Expr_Node(void);

	int evaluate (int num1, int num2)const;

	virtual void set_left(Expr_Node* node);

	virtual Expr_Node* get_left(void);

	virtual void set_right(Expr_Node* node);

	virtual Expr_Node* get_right(void);

	//It also says that Expr_Node_Visitor isn't defined when I included that class in Expr_Node which should be included in all of these classes.
	virtual void accept(Expr_Node_Visitor & v);

	virtual int get_precidence(void);

	virtual bool get_parenthesis(void);

	virtual void set_parenthesis(bool t);

};

#endif
