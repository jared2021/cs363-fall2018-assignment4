/* Honor Pledge 
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */
#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"
#include "Mul_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Number_Expr_Node.h"
#include "Eval_Expr_Tree.h"

Eval_Expr_Tree::Eval_Expr_Tree(void)
{

}

Eval_Expr_Tree::~Eval_Expr_Tree(void)
{

}

void Eval_Expr_Tree::Visit_Add_Node(const Add_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via the accept method.
  
	int n1=node.left_->accept(*this);
	int n2=node.right_->accept(*this);
	node.evaluate(n1,n2);
}

void Eval_Expr_Tree::Visit_Sub_Node(const Sub_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via accept method.
  
	int n1=node.left_->accept(*this);
	int n2=node.right_->accept(*this);
	node.evaluate(n1,n2);
}

void Eval_Expr_Tree::Visit_Mul_Node(const Mul_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via the accept method.
  
	int n1=node.left_->accept(*this);
	int n2=node.right_->accept(*this);
	node.evaluate(n1,n2);
}

void Eval_Expr_Tree::Visit_Div_Node(const Div_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via accept method.
  
	if((node.right_->key_==0))
	{
		node.key_=0;
	}
	else
	{
		int n1=node.left_->accept(*this);
		int n2=node.right_->accept(*this);
		node.evaluate(n1,n2);
	}
}

void Eval_Expr_Tree::Visit_Mod_Node(const Mod_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via accept method.
  
	int n1=node.left_->accept(*this);
	int n2=node.right->accept(*this);
	node.evaluate(n1,n2);
}

int Eval_Expr_Tree::Visit_Num_Node(const Number_Expr_Node & node)
{
	return node.get_key();
}

int Eval_Expr_Tree::result(void)
{
	return result_;
}
