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

//One thing I am confused on is whether the Tree-Builder is supposed to determine how it moves throughout the tree and evaluates the nodes or whether the compiste method is supposed to define and determine that.
Expr_Tree_Builder::Expr_Tree_Builder (void)
{

}

Expr_Tree_Builder::~Expr_Tree_Builder(void)
{

}

void Expr_Tree_Builder::start_expression (void)
{
	Expr_Node* n1=0;
	Expr_Node* op=0;
}

void Expr_Tree_Builder::build_number (int n)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.
  
	n1=new Number_Expr_Node(n);
}

void Expr_Tree_Builder::build_add_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.

	//for some reason it is saying there is no matching function call for Name_Expr_Node(Expr_Node**,Expr_Node**) 
	op=new Add_Expr_Node();
}

void Expr_Tree_Builder::build_sub_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.

	op=new Sub_Expr_Node();
}

void Expr_Tree_Builder::build_mul_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.

	op=new Mul_Expr_Node();
}

void Expr_Tree_Builder::build_div_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.

	op=new Div_Expr_Node();
}

void Expr_Tree_Builder::build_mod_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.

	op=new Mod_Expr_Node();
}

void Expr_Tree_Builder::build_parenthesis(void)
{
	this->start_expression();
}

