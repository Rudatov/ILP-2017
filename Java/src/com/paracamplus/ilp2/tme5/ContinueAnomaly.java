package com.paracamplus.ilp2.tme5;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;

public class ContinueAnomaly extends EvaluationException{
	

	public ContinueAnomaly(Exception e){
		super(e);
	}
	
	public ContinueAnomaly(String message){
		super(message);
	}
}