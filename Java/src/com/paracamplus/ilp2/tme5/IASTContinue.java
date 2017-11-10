package com.paracamplus.ilp2.tme5;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface IASTContinue extends IASTexpression{
	<Result, Data, Anomaly extends Throwable> 
	Result accept(IASTvisitor<Result, Data, Anomaly> visitor, Data data)
			throws Anomaly;

}
