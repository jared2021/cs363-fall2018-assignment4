/* Honor Pledge
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Expr_Tree_Builder.h"
#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"
#include "Mul_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Number_Expr_Node.h"

Expr_Tree_Builder::Expr_Tree_Builder (void)
{

}

Expr_Tree_Builder::~Expr_Tree_Builder(void)
{

}

Expr_Node Expr_Tree_Builder::start_expression (void)
{
	Expr_Node* n1=0;
	Expr_Node* n2=0;
	Expr_Node* op=0;
	(*n1).parent_=&op;
	(*n2).parent_=&op;
	(*op).left_=&n1;
	(*op).right_=&n2;
	return op;
}

void Expr_Tree_Builder::build_number (int n)
{
	n1=new Number_Expr_Node(n);
}

void Expr_Tree_Builder::build_add_operator(void)
{
	op=new Add_Expr_Node(void);
}

void Expr_Tree_Builder::build_sub_operator(void)
{
	op=new Sub_Expr_Node(void);
}

void Expr_Tree_Builder::build_mul_operator(void)
{
	op=new Mul_Expr_Node(void);
}

void Expr_Tree_Builder::build_div_operator(void)
{
	op=new Div_Expr_Node(void);
}

void Expr_Tree_Builder::build_mod_operator(void)
{
	op=new Mod_Expr_Node(void);
}

void Expr_Tree_Builder::build_parenthesis(void)
{
	this->start_expression();
}

