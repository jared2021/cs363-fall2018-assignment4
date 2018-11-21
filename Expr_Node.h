/* Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

class Expr_Node
{
public:

	//Expr_Node(void);

	//virtual ~Expr_Node(void);

	virtual int execute (void)=0;

	virtual int get_key(void)=0;

	virtual void set_key(int key)=0;

protected:

	int key_;

};

#endif
