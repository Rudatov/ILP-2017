package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.normalizer.INormalizationEnvironment;
import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTbinaryOperation;
import com.paracamplus.ilp1.interfaces.IASTblock;
import com.paracamplus.ilp1.interfaces.IASTboolean;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTfloat;
import com.paracamplus.ilp1.interfaces.IASTinteger;
import com.paracamplus.ilp1.interfaces.IASTinvocation;
import com.paracamplus.ilp1.interfaces.IASTsequence;
import com.paracamplus.ilp1.interfaces.IASTstring;
import com.paracamplus.ilp1.interfaces.IASTunaryOperation;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp2.compiler.normalizer.INormalizationFactory;
import com.paracamplus.ilp2.compiler.normalizer.Normalizer;
import com.paracamplus.ilp2.interfaces.IASTassignment;
import com.paracamplus.ilp2.interfaces.IASTloop;
import com.paracamplus.ilp2.interfaces.IASTvisitor;

public class NormalizeDatUnless extends Normalizer implements IASTvisitor<IASTexpression, INormalizationEnvironment, CompilationException>{

	public NormalizeDatUnless(INormalizationFactory factory) {
		super(factory);
		// TODO Auto-generated constructor stub
	}
	
	
	// rajout de la fonctionnalité unless totale
	public IASTUnless visit(IASTUnless iast, INormalizationEnvironment env)
            throws CompilationException {
        IASTexpression newcondition = iast.getCondition().accept(this, env);
        IASTexpression newbody = iast.getBody().accept(this, env);
        return (IASTUnless) ((FactoryTM4)factory).newUnless(newcondition, newbody);
    }
	

}
