package com.paracamplus.ilp2.tme5;
import com.paracamplus.ilp2.interfaces.IASTfactory;
public interface IASTFactory extends com.paracamplus.ilp2.interfaces.IASTfactory{
	public IASTContinue newContinue();
	public IASTBreak newBreak();
}
