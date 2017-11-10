package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.normalizer.INormalizationEnvironment;
import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.compiler.normalizer.INormalizationFactory;
import com.paracamplus.ilp2.compiler.normalizer.Normalizer;
import com.paracamplus.ilp2.interfaces.IASTvisitor;

public class NormalizeUnlessIf extends Normalizer implements IASTvisitor<IASTexpression, INormalizationEnvironment, CompilationException>{
	public NormalizeUnlessIf(INormalizationFactory factory) {
		super(factory);
		// TODO Auto-generated constructor stub
	}
	
	
	// rajout de la fonctionnalité unless avec if not
	public IASTalternative visit(IASTUnless iast, INormalizationEnvironment env)
            throws CompilationException {
		IASTexpression condition = iast.getCondition();
		IASTexpression cond2 = factory.newUnaryOperation(factory.newOperator("!"), condition);
		IASTexpression body = iast.getBody();
		body = body.accept(this,env);
		cond2 = cond2.accept(this,env);
		return (IASTalternative) factory.newAlternative(cond2, body, null);
		
	}
}
