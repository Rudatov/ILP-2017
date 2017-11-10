package com.paracamplus.ilp2.ilp2tme3;

import com.paracamplus.ilp1.interpreter.Interpreter;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.Primitive;

public class VectorGet extends Primitive{

	public VectorGet(String name) {
		super("vectorGet");
		// TODO Auto-generated constructor stub
	}

	@Override
	public int getArity() {
		// TODO Auto-generated method stub
		return 0;
	}

	public Object apply(Object[] argument,int position)
			throws EvaluationException {
		// TODO Auto-generated method stub
		return argument[position];
	}

}
