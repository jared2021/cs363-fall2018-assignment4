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
//for some reason only this method is causing an error because it doesn't match any expression in Eval_Expr_Tree, but I don't understand why and why only this one.
void Eval_Expr_Tree::Visit_Add_Node(const Add_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  
	node->key_= node.left_->key_ + node.right_->key_;	
}

void Eval_Expr_Tree::Visit_Sub_Node(const Sub_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  
	node.key_=node.left_->key_ - node.right_->key_;
}

void Eval_Expr_Tree::Visit_Mul_Node(const Mul_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  
	node.key_=node.left_->key_ * node.right_->key_;
}

void Eval_Expr_Tree::Visit_Div_Node(const Div_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  
	if((node.right_->key_==0))
	{
		node.key_=0;
	}
	else
	{
		node.key_=node.left_->key_ / node.right_->key_;
	}
}

void Eval_Expr_Tree::Visit_Mod_Node(const Mod_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  
	node.key_=node.left_->key_ % node.right_->key_;
}

void Eval_Expr_Tree::Visit_Num_Node(const Number_Expr_Node & node)
{
	node.key_=node.key_;
}

int Eval_Expr_Tree::result(void)
{
	return result_;
}
