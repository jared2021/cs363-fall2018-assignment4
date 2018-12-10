/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help 
 * on this assignment.
 *
 */

#include"Add_Expr_Node.h"
#include"Sub_Expr_Node.h"
#include"Mul_Expr_Node.h"
#include"Div_Expr_Node.h"
#include"Mod_Expr_Node.h"
#include"Number_Expr_Node.h"
#include"Expr_Tree_Builder.h"
#include"Eval_Expr_Tree.h"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string infix;
	std::string exit="QUIT";
	std::string token;
	std::cout<<"Please type in your equation or 'QUIT' to exit the program."<<'\n';
	std::getline(std::cin,infix);
	while(infix!=exit)
	{
		Expr_Tree_Builder* build= new Expr_Tree_Builder();
		build->start_expression();
		std::istringstream input(infix);
		while(!input.eof())
		{
			input>>token;
			if(token=="+")
			{
				build->build_add_operator();
			}
			else if(token=="-")
			{
				build->build_sub_operator();
			}
			else if(token=="*")
			{
				build->build_mul_operator();
			}
			else if(token=="/")
			{
				build->build_div_operator();
			}
			else if(token=="%")
			{
				build->build_mod_operator();
			}
			else if(token=="(")
			{
				build->build_open_parenthesis();
			}
			else if(token==")")
			{
				build->build_close_parenthesis();
			}
			else 
			{
				int placeholder;
				std::istringstream converter(token);
				converter>>placeholder;
				build->build_number(placeholder);
			}
		}
		Binary_Expr_Node* start=build->get_root_node();
		Eval_Expr_Tree eval;
		start->accept(eval);
		int result= eval.result();
		std::cout<<"Your answer is "<<result<<'\n';
		std::cout<<"Please type in your equation or type 'QUIT' to exit the program."<<'\n';
		std::getline(std::cin,infix);
	}
}
