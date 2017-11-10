package com.paracamplus.ilp2.ilp2tme3;

import java.io.IOException;
import java.io.Writer;
import java.math.BigDecimal;
import java.math.BigInteger;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.Primitive;
import com.paracamplus.ilp1.interpreter.primitive.UnaryPrimitive;

public class Sinus extends UnaryPrimitive{
	
	

	public Sinus() {
		super("sinus");
		
		// TODO Auto-generated constructor stub
	}

	@Override
	public int getArity() {
		// TODO Auto-generated method stub
		return 1;
	}

	@Override
	public Object apply(Object value)
			throws EvaluationException {
		double result=0.0;
		if(value instanceof BigInteger){
			result=Math.sin(((BigInteger) value).intValue());
		} else if(value instanceof BigDecimal){
			result=Math.sin(((BigDecimal)value).doubleValue());
		}
		else {
			throw new EvaluationException("type d'argument non gerer");
		}
		// TODO Auto-generated method stub
		return BigDecimal.valueOf(result);
	}

}
