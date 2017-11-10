package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface IASTUnless extends IASTexpression{
	IASTexpression getCondition();
	IASTexpression getBody();
	

}
