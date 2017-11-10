package com.paracamplus.ilp2.tme5;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.ILexicalEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp2.interfaces.IASTloop;
import com.paracamplus.ilp2.interpreter.Interpreter;

public class InterpreterTM5 extends Interpreter{

	public InterpreterTM5(IGlobalVariableEnvironment globalVariableEnvironment,
			IOperatorEnvironment operatorEnvironment) {
		super(globalVariableEnvironment, operatorEnvironment);
		// TODO Auto-generated constructor stub
	}
	
	@Override
	public Object visit(IASTloop iast, ILexicalEnvironment lexenv) 
            throws EvaluationException {
		
        while ( true ) {
            Object condition = iast.getCondition().accept(this, lexenv);
            if ( condition instanceof Boolean ) {
                Boolean c = (Boolean) condition;
                if ( ! c ) {
                    break;
                }
            }
            try{
            iast.getBody().accept(this, lexenv);
        	}catch(EvaluationException e ){
        		if(e instanceof BreakAnomaly){
        			return Boolean.FALSE;
        		}else if(e instanceof ContinueAnomaly){
        			iast.getBody().accept(this, lexenv);
        		}else{
        			e.printStackTrace();
        		}
        }
    }
		
		
			
		
        return Boolean.FALSE;
    }
	
	public Object visit(IASTBreak iast, ILexicalEnvironment lexenv) throws EvaluationException{
		throw new BreakAnomaly("test");
	}
	
	public Object visit(IASTContinue iast, ILexicalEnvironment lexenv) throws EvaluationException{
		throw new ContinueAnomaly("test");
	}

}
