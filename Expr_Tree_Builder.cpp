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
:iterator(0),
p_iterator(0),
parenthesis_(false)
{

}

Expr_Tree_Builder::~Expr_Tree_Builder(void)
{

}

void Expr_Tree_Builder::start_expression (void)
{
	n1=0;
	op=0;
}

void Expr_Tree_Builder::build_number (int n)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.
  // RESPONSE Now creating and using nodes to construct the tree.  
	n1=new Number_Expr_Node(n);
	tree.push(n1);
	std::cout<<"Pushing number onto the stack."<<'\n';
	if(tree.size()==2)
	{
		std::cout<<"Inside number if loop."<<'\n';
		nodes[iterator-1]->set_right(tree.pop());
		nodes[iterator-1]->set_left(tree.pop());
		tree.push(nodes[iterator-1]);
	}
	check_precidence(nodes, iterator);
	std::cout<<"Made it around/through the if loop."<<'\n';
}

void Expr_Tree_Builder::build_add_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.
  // RESPONSE Now creating and using nodes to construct the tree.
	op=new Add_Expr_Node();
	std::cout<<"Add node created (inside build_add_operator)."<<'\n';
	if(!parenthesis_)
	{
		std::cout<<"Inside if loop for parenthesis."<<'\n';
		nodes.set(iterator, op);
		std::cout<<"Setting add node in array."<<'\n';
		iterator=iterator+1;
		std::cout<<"Incrimenting iterator."<<'\n';
		//check_precidence(nodes, iterator);
		std::cout<<"Checked precidence."<<'\n';
	}
	else
	{
		op->set_parenthesis(true);
		p_nodes.set(p_iterator, op);
		p_iterator=p_iterator+1;
		//check_precidence(p_nodes, p_iterator);
	}
}
void Expr_Tree_Builder::build_sub_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.
  // RESPONSE Now creating and using nodes to construct the tree.
	op=new Sub_Expr_Node();
	if(!parenthesis_)
	{
		nodes.set(iterator, op);
		iterator=iterator+1;
		//check_precidence(nodes, iterator);
	}
	else
	{
		op->set_parenthesis(true);
		p_nodes.set(p_iterator, op);
		p_iterator=p_iterator +1;
		//check_precidence(p_nodes, p_iterator);
	}
}

void Expr_Tree_Builder::build_mul_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.
  // RESPONSE Now creating and using nodes to construct the tree.
	op=new Mul_Expr_Node();
	if(!parenthesis_)
	{
		nodes.set(iterator, op);
		iterator=iterator+1;
		//check_precidence(nodes, iterator);
	}
	else
	{
		op->set_parenthesis(true);
		p_nodes.set(p_iterator, op);
		p_iterator=p_iterator +1;
		//check_precidence(p_nodes, p_iterator);
	}
}
void Expr_Tree_Builder::build_div_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.
  // RESPONSE Now creating and using nodes to construct the tree.
	op=new Div_Expr_Node();
	if(!parenthesis_)
	{
		nodes.set(iterator, op);
		iterator=iterator+1;
		//check_precidence(nodes, iterator);
	}
	else
	{
		op->set_parenthesis(true);
		p_nodes.set(p_iterator, op);
		p_iterator=p_iterator+1;
		//check_precidence(p_nodes, p_iterator);
	}
}

void Expr_Tree_Builder::build_mod_operator(void)
{
  // COMMENT You are creating the nodes, but it seems you are not
  // using the node to construct the tree.
  // RESPONSE Now creating and using nodes to construct the tree.
	op=new Mod_Expr_Node();
	if(!parenthesis_)
	{
		nodes.set(iterator, op);
		iterator=iterator+1;
		//check_precidence(nodes, iterator);
	}
	else
	{
		op->set_parenthesis(true);
		p_nodes.set(p_iterator, op);
		p_iterator=p_iterator+1;
		//check_precidence(p_nodes, p_iterator);
	}
}

void Expr_Tree_Builder::build_open_parenthesis(void)
{
	parenthesis_=true;
}

void Expr_Tree_Builder::build_close_parenthesis(void)
{
	parenthesis_=false;
	int begin=p_iterator;
	int end=iterator;
	for(int z=0;z<end; z++)
	{
		p_nodes[begin]=nodes[z];
		p_nodes[begin-1]->set_left(p_nodes[begin]->get_right());
		p_nodes[begin]->set_right(p_nodes[begin-1]);
		begin=begin+1;
	}
	nodes=p_nodes;
	check_precidence(nodes, iterator);
}

void Expr_Tree_Builder::check_precidence(Array <Binary_Expr_Node*> &nodes, int iterator)
{
	std::cout<<"Checking precidence."<<'\n';
	if(iterator>1&&nodes[iterator-2]->get_precidence()<nodes[iterator-1]->get_precidence()&&nodes[iterator-1]->get_parenthesis()!=true)
	{
		std::cout<<"Inside if statement (check_precidence)."<<'\n';
		int check=iterator-1;
		while(check!=0&&nodes[check-1]->get_precidence()<nodes[check]->get_precidence()&&nodes[check-1]->get_parenthesis()!=true)
		{
			std::cout<<"Inside while loop (check_precidence)."<<'\n';
			Binary_Expr_Node* temp=nodes[check-1];
			std::cout<<"Created temp."<<'\n';
			nodes[check-1]=nodes[check];
			nodes[check]=temp;
			std::cout<<"Switched nodes in array."<<'\n';
			nodes[check-1]->set_left(nodes[check]->get_right());
			nodes[check]->set_right(nodes[check]->get_left());
			nodes[check]->set_left(nodes[check-1]);
			std::cout<<"Set new children keys."<<'\n';
			check=check-1;
			std::cout<<"Deincrement check."<<"\n";
		}
	}
}

Binary_Expr_Node* Expr_Tree_Builder::get_root_node(void)
{
	return nodes[iterator-1];
}
