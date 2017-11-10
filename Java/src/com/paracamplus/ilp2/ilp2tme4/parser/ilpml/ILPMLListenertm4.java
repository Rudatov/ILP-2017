package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import antlr4.ILPMLgrammar2Parser.AlternativeContext;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.interfaces.IASTfactory;
import com.paracamplus.ilp2.parser.ilpml.ILPMLListener;

public class ILPMLListenertm4 extends ILPMLListener{

	public ILPMLListenertm4(IASTfactory factory) {
		super(factory);
		// TODO Auto-generated constructor stub
	}
	
	public void enterUnless(AlternativeContext ctx){}
	public void exitUnless(AlternativeContext ctx){
		//transformer cond en not cond
		IASTexpression notcond = factory.newUnaryOperation(factory.newOperator("!"), (IASTexpression)ctx.condition);
		ctx.node = factory.newAlternative(notcond, ctx.consequence.node , (ctx.alternant == null ? null : ctx.alternant.node));
	}
}
