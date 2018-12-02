/* Honor Pledge
 *
 * I pledge that I have given nor received any help
 * on this assignment.
 *
 */

#ifndef EXPR_BUILDER_H_
#define EXPR_BUILDER_H_

class Expr_Builder
{
public:

	virtual void start_expression (void)=0;

	virtual void build_number (int n)=0;

	virtual void build_add_operator(void)=0;

	virtual void build_sub_operator(void)=0;

	virtual void build_mul_operator(void)=0;

	virtual void build_div_operator(void)=0;

	virtual void build_mod_operator(void)=0;

	virtual void build_open_parenthesis (void)=0;

	virtual void build_close_parenthesis (void)=0;

};

#endif
