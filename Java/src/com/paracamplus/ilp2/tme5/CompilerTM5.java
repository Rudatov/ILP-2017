package com.paracamplus.ilp2.tme5;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.compiler.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp2.compiler.Compiler;
import com.paracamplus.ilp2.compiler.interfaces.IASTCvisitor;

public class CompilerTM5 extends com.paracamplus.ilp2.compiler.Compiler implements IASTCvisitor<Void, Compiler.Context, CompilationException>{

	public CompilerTM5(IOperatorEnvironment ioe, IGlobalVariableEnvironment igve) {
		super(ioe, igve);
		// TODO Auto-generated constructor stub
	}
	
	public Void visit(IASTBreak iast, Context ctx) throws CompilationException{
		emit("break; \n");
		return null;
	}
	public Void visit(IASTContinue iast, Context ctx) throws CompilationException{
		emit("continue; \n");
		return null;
	}
	

}
