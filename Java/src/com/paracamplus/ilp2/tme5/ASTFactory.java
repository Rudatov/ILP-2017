package com.paracamplus.ilp2.tme5;
//esling@ircam.fr
public class ASTFactory extends com.paracamplus.ilp2.ast.ASTfactory{
	public IASTBreak newBreak(){
		return new ASTBreak();
	}
	public IASTContinue newContinue(){
		return new ASTContinue();
	}
}
