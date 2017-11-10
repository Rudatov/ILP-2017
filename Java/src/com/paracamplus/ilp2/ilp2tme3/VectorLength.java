package com.paracamplus.ilp2.ilp2tme3;

import com.paracamplus.ilp1.interpreter.Interpreter;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.Primitive;

public class VectorLength extends Primitive{

	public VectorLength(String name) {
		super("vectorLength");
		// TODO Auto-generated constructor stub
	}

	@Override
	public int getArity() {
		// TODO Auto-generated method stub
		return 0;
	}

	public Object apply(Object[] argument)
			throws EvaluationException {
		// TODO Auto-generated method stub
		return argument.length;
	}

}
