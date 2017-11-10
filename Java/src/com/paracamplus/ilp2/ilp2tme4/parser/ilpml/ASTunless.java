package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import com.paracamplus.ilp1.annotation.OrNull;
import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;


public class ASTunless extends ASTexpression implements IASTUnless{

	public ASTunless(IASTexpression condition,IASTexpression body){
		this.condition = condition;
		this.body = body;
	}
	private final IASTexpression condition;
	private final IASTexpression body;
	
	public IASTexpression getCondition(){
		return this.condition;
	}
	public IASTexpression getBody(){
		return this.body;
	}
	public <Result, Data, Anomaly extends Throwable> Result accept(
			IASTvisitorTM4<Result, Data, Anomaly> visitor, Data data)
			throws Anomaly {
		// TODO Auto-generated method stub
		return visitor.visit(this, data);
	}
	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(
			IASTvisitor<Result, Data, Anomaly> visitor, Data data)
			throws Anomaly {
		// TODO Auto-generated method stub
		return ((IASTvisitorTM4<Result, Data, Anomaly>)visitor).visit(this, data);
	}
	
	
}
