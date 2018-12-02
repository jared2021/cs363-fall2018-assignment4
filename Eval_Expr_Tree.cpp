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
#include <iostream>

Eval_Expr_Tree::Eval_Expr_Tree(void)
{

}

Eval_Expr_Tree::~Eval_Expr_Tree(void)
{

}

void Eval_Expr_Tree::Visit_Add_Node(Add_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via the accept method.
  
	node.left_->accept(*this);
	std::cout<<"Visited left node."<<'\n';
	int n1=node.left_->get_key();
	std::cout<<"Getting left node key."<<'\n';
	node.right_->accept(*this);
	std::cout<<"Visited right node."<<'\n';
	int n2=node.right_->get_key();
	std::cout<<"Getting right node key."<<'\n';
	node.set_key(node.evaluate(n1,n2));
	std::cout<<"Sets this nodes key to left node key + right node key."<<'\n';
	(*this).result_=node.get_key();
	std::cout<<"Sets visitors result to this nodes key."<<'\n';
}

void Eval_Expr_Tree::Visit_Sub_Node(Sub_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via accept method.
  
	node.left_->accept(*this);
	int n1=node.left_->get_key();
	node.right_->accept(*this);
	int n2=node.right_->get_key();
	node.set_key(node.evaluate(n1,n2));
	(*this).result_=node.get_key();
}

void Eval_Expr_Tree::Visit_Mul_Node(Mul_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via the accept method.
  
	node.left_->accept(*this);
	std::cout<<"Visit left node M."<<'\n';
	int n1=node.left_->get_key();
	std::cout<<"Get left node key M."<<'\n';
	node.right_->accept(*this);
	std::cout<<"Visit right node M."<<'\n';
	int n2=node.right_->get_key();
	std::cout<<"Get right node key M."<<'\n';
	node.set_key(node.evaluate(n1,n2));
	std::cout<<"Set this nodes key to left node key * right node key."<<'\n';
	(*this).result_=node.get_key();
	std::cout<<"Set this visitor result to this nodes key M."<<'\n';
}

void Eval_Expr_Tree::Visit_Div_Node(Div_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via accept method.
	node.left_->accept(*this);
	int n1=node.left_->get_key();
	node.right_->accept(*this);
	int n2=node.right_->get_key();
	node.set_key(node.evaluate(n1,n2));
	(*this).result_=node.get_key();
}

void Eval_Expr_Tree::Visit_Mod_Node(Mod_Expr_Node & node)
{
  // COMMENT: You are not using the visitor pattern correctly.
  // Instead, you have mixed the visitor with the composite version
  // of evaluate. You are to visit the left and right node via the
  // accept method to correctly implement the visitor pattern.
  // (e.g., left->accept (*this))
  // RESPONSE: Now visiting left and right node via accept method.
  
	node.left_->accept(*this);
	int n1=node.left_->get_key();
	node.right_->accept(*this);
	int n2=node.right_->get_key();
	node.set_key(node.evaluate(n1,n2));
	(*this).result_=node.get_key();
}

bool Eval_Expr_Tree::Visit_Num_Node(Number_Expr_Node & node)
{
	return true;	
}

int Eval_Expr_Tree::result(void)
{
	return result_;
}
