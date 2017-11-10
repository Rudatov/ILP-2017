package com.paracamplus.ilp2.ilp2tme3;

import com.paracamplus.ilp1.interpreter.Interpreter;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.Primitive;

public class MakeVector extends Primitive {

	public MakeVector(String name) {
		super("makeVector");
		// TODO Auto-generated constructor stub
	}

	@Override
	public int getArity() {
		// TODO Auto-generated method stub
		return 2;
	}

	public Object apply(int test, Object argument)
			throws EvaluationException {
		Object tab[] = new Object[test];
		for(int i=0; i < test; i++){
			tab[i]=argument;
		}
		// TODO Auto-generated method stub
		return tab;
	}

}
