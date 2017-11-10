package com.paracamplus.ilp2.tme5;

import com.paracamplus.ilp1.interfaces.IASTalternative;

public interface IASTvisitor<Result, Data, Anomaly extends Throwable> extends com.paracamplus.ilp1.interfaces.IASTvisitor{
	Result visit(IASTContinue iast, Data data) throws Anomaly;
	Result visit(IASTBreak iast, Data data) throws Anomaly;
}
