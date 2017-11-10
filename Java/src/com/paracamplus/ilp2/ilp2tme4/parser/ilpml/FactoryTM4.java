package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.compiler.normalizer.INormalizationFactory;
import com.paracamplus.ilp2.compiler.normalizer.NormalizationFactory;

public class FactoryTM4 extends NormalizationFactory implements INormalizationFactory{

	public IASTUnless newUnless(IASTexpression condition,IASTexpression body){
		return new ASTunless(condition,body);
	}
}
