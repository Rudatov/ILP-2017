package com.paracamplus.ilp2.ilp2tme4.parser.ilpml;

import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp2.interfaces.IASTvisitor;

public interface IASTvisitorTM4<Result, Data, Anomaly extends Throwable> extends IASTvisitor<Result, Data, Throwable> {
	Result visit(IASTUnless iast, Data data) throws Anomaly;

}
