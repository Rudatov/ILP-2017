package com.paracamplus.ilp1.ilp1tme1;

import java.io.File;
import java.io.IOException;
import java.io.StringWriter;

import com.paracamplus.ilp1.ast.ASTfactory;
import com.paracamplus.ilp1.interfaces.IASTfactory;
import com.paracamplus.ilp1.interpreter.GlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.GlobalVariableStuff;
import com.paracamplus.ilp1.interpreter.Interpreter;
import com.paracamplus.ilp1.interpreter.OperatorEnvironment;
import com.paracamplus.ilp1.interpreter.OperatorStuff;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp1.interpreter.test.InterpreterRunner;
import com.paracamplus.ilp1.interpreter.test.InterpreterTest;
import com.paracamplus.ilp1.parser.ParseException;
import com.paracamplus.ilp1.parser.ilpml.ILPMLParser;
import com.paracamplus.ilp1.parser.xml.IXMLParser;
import com.paracamplus.ilp1.parser.xml.XMLParser;

public class FileInterpreter extends InterpreterTest{
	
	public FileInterpreter(File file) {
		super(file);
		// TODO Auto-generated constructor stub
	}

	public void configureRunner(InterpreterRunner run) throws EvaluationException {
    	// configuration du parseur
        IASTfactory factory = new ASTfactory(); //creation AST Factory
        run.setILPMLParser(new ILPMLParser(factory)); // creation et ajout à l'interpreter d'un parser ilpml
        
        
        // configuration de l'interprète
        StringWriter stdout = new StringWriter(); //creation d'un writer pour la sortie standard
        run.setStdout(stdout);// assignation de se writer a la sortie standard
        IGlobalVariableEnvironment gve = new GlobalVariableEnvironment(); //crée une hashmap
        GlobalVariableStuff.fillGlobalVariables(gve, stdout); // insere dans la hashmap les primitive pi, print et newline
        IOperatorEnvironment oe = new OperatorEnvironment(); //crée deux nouvelle hashmap associé a cet objet.
        OperatorStuff.fillUnaryOperators(oe); // crée et ajoute à l'environnement  les operateur unaire 
        OperatorStuff.fillBinaryOperators(oe);// crée et ajoute à l'environnement  les operateur binaire (+,-,*,...)
        Interpreter interpreter = new Interpreter(gve, oe); // crée un interpreter a partir des variable d'environement defini et des operateur ajoute
        run.setInterpreter(interpreter); //ajoute au runner l'interpreter precedement crée.
    }
	
	public static void main (String[] args){
		try {
			File f=null;
			for (String s : args ){
				f= new File(s);				
			}
			if(f==null){
				System.out.println("erreur file null");
				return;
			}
			FileInterpreter it = new FileInterpreter(f);
			it.processFile();
		} catch (ParseException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (EvaluationException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
