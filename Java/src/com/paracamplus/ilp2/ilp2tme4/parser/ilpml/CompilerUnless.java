package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import com.paracamplus.ilp1.compiler.AssignDestination;
import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.VoidDestination;
import com.paracamplus.ilp1.compiler.Compiler.Context;
import com.paracamplus.ilp1.compiler.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.compiler.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp2.compiler.Compiler;
import com.paracamplus.ilp2.compiler.interfaces.IASTCvisitor;

public class CompilerUnless extends com.paracamplus.ilp2.compiler.Compiler implements IASTCvisitor<Void, Compiler.Context, CompilationException>{

	public CompilerUnless(IOperatorEnvironment ioe,
			IGlobalVariableEnvironment igve) {
		super(ioe, igve);
		// TODO Auto-generated constructor stub
	}
	
	public Void visit(IASTUnless iast, Context ctx) throws CompilationException{
		emit("if(!");
		IASTvariable tmp = ctx.newTemporaryVariable();
		Context c = ctx.redirect(new AssignDestination(tmp));
		iast.getCondition().accept(this, c);
		emit(tmp.getMangledName());
		emit("){\n");
		Context cb = ctx.redirect(VoidDestination.VOID_DESTINATION);
        iast.getBody().accept(this, cb);
        emit("\n}\n");
        whatever.accept(this, ctx);
        return null;
	}

}
