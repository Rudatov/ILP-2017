package com.paracamplus.ilp2.tme5;

import antlr4.ILPMLgrammar2Parser.AlternativeContext;
import com.paracamplus.ilp2.tme5.IASTFactory;


public class ILPMLListener extends com.paracamplus.ilp2.parser.ilpml.ILPMLListener{

	public ILPMLListener(IASTFactory factory) {
		super(factory);
		// TODO Auto-generated constructor stub
	}
	public void enterBreak(AlternativeContext ctx){}
	public void exitBreak(AlternativeContext ctx){
		ctx.node = ((IASTFactory) factory).newBreak();
	}
	public void enterContinue(AlternativeContext ctx){}
	public void exitContinue(AlternativeContext ctx){
		ctx.node = ((IASTFactory) factory).newContinue();
	}
}
