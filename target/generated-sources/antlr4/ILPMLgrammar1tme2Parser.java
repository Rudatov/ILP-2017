// Generated from ILPMLgrammar1tme2.g4 by ANTLR 4.4

    package antlr4;

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ILPMLgrammar1tme2Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.4", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__30=1, T__29=2, T__28=3, T__27=4, T__26=5, T__25=6, T__24=7, T__23=8, 
		T__22=9, T__21=10, T__20=11, T__19=12, T__18=13, T__17=14, T__16=15, T__15=16, 
		T__14=17, T__13=18, T__12=19, T__11=20, T__10=21, T__9=22, T__8=23, T__7=24, 
		T__6=25, T__5=26, T__4=27, T__3=28, T__2=29, T__1=30, T__0=31, IDENT=32, 
		INT=33, FLOAT=34, STRING=35, ESC=36, LINE_COMMENT=37, COMMENT=38, SPACE=39;
	public static final String[] tokenNames = {
		"<INVALID>", "'/'", "'true'", "'!='", "'while'", "';'", "'='", "'if'", 
		"'^'", "'<='", "'&'", "'do'", "'('", "'*'", "','", "'false'", "'>='", 
		"'|'", "'=='", "'<'", "'>'", "'!'", "'let'", "'%'", "'else'", "'in'", 
		"'function'", "')'", "'and'", "'then'", "'+'", "'-'", "IDENT", "INT", 
		"FLOAT", "STRING", "ESC", "LINE_COMMENT", "COMMENT", "SPACE"
	};
	public static final int
		RULE_prog = 0, RULE_expr = 1;
	public static final String[] ruleNames = {
		"prog", "expr"
	};

	@Override
	public String getGrammarFileName() { return "ILPMLgrammar1tme2.g4"; }

	@Override
	public String[] getTokenNames() { return tokenNames; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ILPMLgrammar1tme2Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgContext extends ParserRuleContext {
		public com.paracamplus.ilp1.interfaces.IASTprogram node;
		public ExprContext expr;
		public List<ExprContext> exprs = new ArrayList<ExprContext>();
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public TerminalNode EOF() { return getToken(ILPMLgrammar1tme2Parser.EOF, 0); }
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterProg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitProg(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(10);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__29) | (1L << T__27) | (1L << T__24) | (1L << T__19) | (1L << T__16) | (1L << T__10) | (1L << T__9) | (1L << T__5) | (1L << T__0) | (1L << IDENT) | (1L << INT) | (1L << FLOAT) | (1L << STRING))) != 0)) {
				{
				{
				setState(4); ((ProgContext)_localctx).expr = expr(0);
				((ProgContext)_localctx).exprs.add(((ProgContext)_localctx).expr);
				setState(6);
				_la = _input.LA(1);
				if (_la==T__26) {
					{
					setState(5); match(T__26);
					}
				}

				}
				}
				setState(12);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(13); match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public com.paracamplus.ilp1.interfaces.IASTexpression node;
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
			this.node = ctx.node;
		}
	}
	public static class BindingContext extends ExprContext {
		public Token IDENT;
		public List<Token> vars = new ArrayList<Token>();
		public ExprContext expr;
		public List<ExprContext> vals = new ArrayList<ExprContext>();
		public ExprContext body;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode IDENT(int i) {
			return getToken(ILPMLgrammar1tme2Parser.IDENT, i);
		}
		public List<TerminalNode> IDENT() { return getTokens(ILPMLgrammar1tme2Parser.IDENT); }
		public BindingContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterBinding(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitBinding(this);
		}
	}
	public static class BoucleWhileContext extends ExprContext {
		public ExprContext condition;
		public ExprContext instruction;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public BoucleWhileContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterBoucleWhile(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitBoucleWhile(this);
		}
	}
	public static class VariableContext extends ExprContext {
		public Token var;
		public TerminalNode IDENT() { return getToken(ILPMLgrammar1tme2Parser.IDENT, 0); }
		public VariableContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterVariable(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitVariable(this);
		}
	}
	public static class AlternativeContext extends ExprContext {
		public ExprContext condition;
		public ExprContext consequence;
		public ExprContext alternant;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AlternativeContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterAlternative(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitAlternative(this);
		}
	}
	public static class InvocationContext extends ExprContext {
		public ExprContext fun;
		public ExprContext expr;
		public List<ExprContext> args = new ArrayList<ExprContext>();
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public InvocationContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterInvocation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitInvocation(this);
		}
	}
	public static class ConstFloatContext extends ExprContext {
		public Token floatConst;
		public TerminalNode FLOAT() { return getToken(ILPMLgrammar1tme2Parser.FLOAT, 0); }
		public ConstFloatContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterConstFloat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitConstFloat(this);
		}
	}
	public static class SequenceContext extends ExprContext {
		public ExprContext expr;
		public List<ExprContext> exprs = new ArrayList<ExprContext>();
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public SequenceContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterSequence(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitSequence(this);
		}
	}
	public static class ConstFalseContext extends ExprContext {
		public ConstFalseContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterConstFalse(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitConstFalse(this);
		}
	}
	public static class UnaryContext extends ExprContext {
		public Token op;
		public ExprContext arg;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public UnaryContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterUnary(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitUnary(this);
		}
	}
	public static class ConstTrueContext extends ExprContext {
		public ConstTrueContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterConstTrue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitConstTrue(this);
		}
	}
	public static class ConstIntegerContext extends ExprContext {
		public Token intConst;
		public TerminalNode INT() { return getToken(ILPMLgrammar1tme2Parser.INT, 0); }
		public ConstIntegerContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterConstInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitConstInteger(this);
		}
	}
	public static class FunctionContext extends ExprContext {
		public Token func;
		public Token IDENT;
		public List<Token> args1 = new ArrayList<Token>();
		public List<Token> args2 = new ArrayList<Token>();
		public ExprContext body;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode IDENT(int i) {
			return getToken(ILPMLgrammar1tme2Parser.IDENT, i);
		}
		public List<TerminalNode> IDENT() { return getTokens(ILPMLgrammar1tme2Parser.IDENT); }
		public FunctionContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterFunction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitFunction(this);
		}
	}
	public static class AffectationContext extends ExprContext {
		public Token arg3;
		public Token op;
		public ExprContext arg4;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode IDENT() { return getToken(ILPMLgrammar1tme2Parser.IDENT, 0); }
		public AffectationContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterAffectation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitAffectation(this);
		}
	}
	public static class ConstStringContext extends ExprContext {
		public Token stringConst;
		public TerminalNode STRING() { return getToken(ILPMLgrammar1tme2Parser.STRING, 0); }
		public ConstStringContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterConstString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitConstString(this);
		}
	}
	public static class BinaryContext extends ExprContext {
		public ExprContext arg1;
		public Token op;
		public ExprContext arg2;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public BinaryContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).enterBinary(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ILPMLgrammar1tme2Listener ) ((ILPMLgrammar1tme2Listener)listener).exitBinary(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 2;
		enterRecursionRule(_localctx, 2, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				_localctx = new UnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(16);
				((UnaryContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__10 || _la==T__0) ) {
					((UnaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				consume();
				setState(17); ((UnaryContext)_localctx).arg = expr(18);
				}
				break;
			case 2:
				{
				_localctx = new BindingContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(18); match(T__9);
				setState(19); ((BindingContext)_localctx).IDENT = match(IDENT);
				((BindingContext)_localctx).vars.add(((BindingContext)_localctx).IDENT);
				setState(20); match(T__25);
				setState(21); ((BindingContext)_localctx).expr = expr(0);
				((BindingContext)_localctx).vals.add(((BindingContext)_localctx).expr);
				setState(28);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__3) {
					{
					{
					setState(22); match(T__3);
					setState(23); ((BindingContext)_localctx).IDENT = match(IDENT);
					((BindingContext)_localctx).vars.add(((BindingContext)_localctx).IDENT);
					setState(24); match(T__25);
					setState(25); ((BindingContext)_localctx).expr = expr(0);
					((BindingContext)_localctx).vals.add(((BindingContext)_localctx).expr);
					}
					}
					setState(30);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(31); match(T__6);
				setState(32); ((BindingContext)_localctx).body = expr(5);
				}
				break;
			case 3:
				{
				_localctx = new AffectationContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(34); ((AffectationContext)_localctx).arg3 = match(IDENT);
				setState(35); ((AffectationContext)_localctx).op = match(T__25);
				setState(36); ((AffectationContext)_localctx).arg4 = expr(3);
				}
				break;
			case 4:
				{
				_localctx = new BoucleWhileContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(37); match(T__27);
				setState(38); ((BoucleWhileContext)_localctx).condition = expr(0);
				setState(39); match(T__20);
				setState(40); ((BoucleWhileContext)_localctx).instruction = expr(2);
				}
				break;
			case 5:
				{
				_localctx = new SequenceContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(42); match(T__19);
				setState(43); ((SequenceContext)_localctx).expr = expr(0);
				((SequenceContext)_localctx).exprs.add(((SequenceContext)_localctx).expr);
				setState(50);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(45);
						_la = _input.LA(1);
						if (_la==T__26) {
							{
							setState(44); match(T__26);
							}
						}

						setState(47); ((SequenceContext)_localctx).expr = expr(0);
						((SequenceContext)_localctx).exprs.add(((SequenceContext)_localctx).expr);
						}
						} 
					}
					setState(52);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
				}
				setState(54);
				_la = _input.LA(1);
				if (_la==T__26) {
					{
					setState(53); match(T__26);
					}
				}

				setState(56); match(T__4);
				}
				break;
			case 6:
				{
				_localctx = new ConstTrueContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(58); match(T__29);
				}
				break;
			case 7:
				{
				_localctx = new ConstFalseContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(59); match(T__16);
				}
				break;
			case 8:
				{
				_localctx = new ConstIntegerContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(60); ((ConstIntegerContext)_localctx).intConst = match(INT);
				}
				break;
			case 9:
				{
				_localctx = new ConstFloatContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(61); ((ConstFloatContext)_localctx).floatConst = match(FLOAT);
				}
				break;
			case 10:
				{
				_localctx = new ConstStringContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(62); ((ConstStringContext)_localctx).stringConst = match(STRING);
				}
				break;
			case 11:
				{
				_localctx = new VariableContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(63); ((VariableContext)_localctx).var = match(IDENT);
				}
				break;
			case 12:
				{
				_localctx = new AlternativeContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(64); match(T__24);
				setState(65); ((AlternativeContext)_localctx).condition = expr(0);
				setState(66); match(T__2);
				setState(67); ((AlternativeContext)_localctx).consequence = expr(0);
				setState(70);
				switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
				case 1:
					{
					setState(68); match(T__7);
					setState(69); ((AlternativeContext)_localctx).alternant = expr(0);
					}
					break;
				}
				}
				break;
			case 13:
				{
				_localctx = new FunctionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(72); match(T__5);
				setState(73); ((FunctionContext)_localctx).func = match(IDENT);
				setState(74); match(T__19);
				setState(75); ((FunctionContext)_localctx).IDENT = match(IDENT);
				((FunctionContext)_localctx).args1.add(((FunctionContext)_localctx).IDENT);
				setState(83);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(80);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__17) {
						{
						{
						setState(76); match(T__17);
						setState(77); ((FunctionContext)_localctx).IDENT = match(IDENT);
						((FunctionContext)_localctx).args2.add(((FunctionContext)_localctx).IDENT);
						}
						}
						setState(82);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(85); match(T__4);
				setState(86); ((FunctionContext)_localctx).body = expr(0);
				setState(87); match(T__26);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(124);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(122);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new BinaryContext(new ExprContext(_parentctx, _parentState));
						((BinaryContext)_localctx).arg1 = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(91);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(92);
						((BinaryContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__30) | (1L << T__18) | (1L << T__8))) != 0)) ) {
							((BinaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(93); ((BinaryContext)_localctx).arg2 = expr(18);
						}
						break;
					case 2:
						{
						_localctx = new BinaryContext(new ExprContext(_parentctx, _parentState));
						((BinaryContext)_localctx).arg1 = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(94);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(95);
						((BinaryContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__1 || _la==T__0) ) {
							((BinaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(96); ((BinaryContext)_localctx).arg2 = expr(17);
						}
						break;
					case 3:
						{
						_localctx = new BinaryContext(new ExprContext(_parentctx, _parentState));
						((BinaryContext)_localctx).arg1 = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(97);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(98);
						((BinaryContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__22) | (1L << T__15) | (1L << T__12) | (1L << T__11))) != 0)) ) {
							((BinaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(99); ((BinaryContext)_localctx).arg2 = expr(16);
						}
						break;
					case 4:
						{
						_localctx = new BinaryContext(new ExprContext(_parentctx, _parentState));
						((BinaryContext)_localctx).arg1 = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(100);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(101);
						((BinaryContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__28 || _la==T__13) ) {
							((BinaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(102); ((BinaryContext)_localctx).arg2 = expr(15);
						}
						break;
					case 5:
						{
						_localctx = new BinaryContext(new ExprContext(_parentctx, _parentState));
						((BinaryContext)_localctx).arg1 = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(103);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(104); ((BinaryContext)_localctx).op = match(T__21);
						setState(105); ((BinaryContext)_localctx).arg2 = expr(14);
						}
						break;
					case 6:
						{
						_localctx = new BinaryContext(new ExprContext(_parentctx, _parentState));
						((BinaryContext)_localctx).arg1 = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(106);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(107);
						((BinaryContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__23 || _la==T__14) ) {
							((BinaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						consume();
						setState(108); ((BinaryContext)_localctx).arg2 = expr(13);
						}
						break;
					case 7:
						{
						_localctx = new InvocationContext(new ExprContext(_parentctx, _parentState));
						((InvocationContext)_localctx).fun = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(109);
						if (!(precpred(_ctx, 19))) throw new FailedPredicateException(this, "precpred(_ctx, 19)");
						setState(110); match(T__19);
						setState(112);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__29) | (1L << T__27) | (1L << T__24) | (1L << T__19) | (1L << T__16) | (1L << T__10) | (1L << T__9) | (1L << T__5) | (1L << T__0) | (1L << IDENT) | (1L << INT) | (1L << FLOAT) | (1L << STRING))) != 0)) {
							{
							setState(111); ((InvocationContext)_localctx).expr = expr(0);
							((InvocationContext)_localctx).args.add(((InvocationContext)_localctx).expr);
							}
						}

						setState(118);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==T__17) {
							{
							{
							setState(114); match(T__17);
							setState(115); ((InvocationContext)_localctx).expr = expr(0);
							((InvocationContext)_localctx).args.add(((InvocationContext)_localctx).expr);
							}
							}
							setState(120);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						setState(121); match(T__4);
						}
						break;
					}
					} 
				}
				setState(126);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 1: return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0: return precpred(_ctx, 17);
		case 1: return precpred(_ctx, 16);
		case 2: return precpred(_ctx, 15);
		case 3: return precpred(_ctx, 14);
		case 4: return precpred(_ctx, 13);
		case 5: return precpred(_ctx, 12);
		case 6: return precpred(_ctx, 19);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd\3)\u0082\4\2\t\2\4"+
		"\3\t\3\3\2\3\2\5\2\t\n\2\7\2\13\n\2\f\2\16\2\16\13\2\3\2\3\2\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3\35\n\3\f\3\16\3 \13\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3\60\n\3\3\3\7\3\63\n"+
		"\3\f\3\16\3\66\13\3\3\3\5\39\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\5\3I\n\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3Q\n\3\f\3\16\3"+
		"T\13\3\5\3V\n\3\3\3\3\3\3\3\3\3\5\3\\\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3s\n\3\3\3"+
		"\3\3\7\3w\n\3\f\3\16\3z\13\3\3\3\7\3}\n\3\f\3\16\3\u0080\13\3\3\3\2\3"+
		"\4\4\2\4\2\b\4\2\27\27!!\5\2\3\3\17\17\31\31\3\2 !\5\2\13\13\22\22\25"+
		"\26\4\2\5\5\24\24\4\2\n\n\23\23\u009d\2\f\3\2\2\2\4[\3\2\2\2\6\b\5\4\3"+
		"\2\7\t\7\7\2\2\b\7\3\2\2\2\b\t\3\2\2\2\t\13\3\2\2\2\n\6\3\2\2\2\13\16"+
		"\3\2\2\2\f\n\3\2\2\2\f\r\3\2\2\2\r\17\3\2\2\2\16\f\3\2\2\2\17\20\7\2\2"+
		"\3\20\3\3\2\2\2\21\22\b\3\1\2\22\23\t\2\2\2\23\\\5\4\3\24\24\25\7\30\2"+
		"\2\25\26\7\"\2\2\26\27\7\b\2\2\27\36\5\4\3\2\30\31\7\36\2\2\31\32\7\""+
		"\2\2\32\33\7\b\2\2\33\35\5\4\3\2\34\30\3\2\2\2\35 \3\2\2\2\36\34\3\2\2"+
		"\2\36\37\3\2\2\2\37!\3\2\2\2 \36\3\2\2\2!\"\7\33\2\2\"#\5\4\3\7#\\\3\2"+
		"\2\2$%\7\"\2\2%&\7\b\2\2&\\\5\4\3\5\'(\7\6\2\2()\5\4\3\2)*\7\r\2\2*+\5"+
		"\4\3\4+\\\3\2\2\2,-\7\16\2\2-\64\5\4\3\2.\60\7\7\2\2/.\3\2\2\2/\60\3\2"+
		"\2\2\60\61\3\2\2\2\61\63\5\4\3\2\62/\3\2\2\2\63\66\3\2\2\2\64\62\3\2\2"+
		"\2\64\65\3\2\2\2\658\3\2\2\2\66\64\3\2\2\2\679\7\7\2\28\67\3\2\2\289\3"+
		"\2\2\29:\3\2\2\2:;\7\35\2\2;\\\3\2\2\2<\\\7\4\2\2=\\\7\21\2\2>\\\7#\2"+
		"\2?\\\7$\2\2@\\\7%\2\2A\\\7\"\2\2BC\7\t\2\2CD\5\4\3\2DE\7\37\2\2EH\5\4"+
		"\3\2FG\7\32\2\2GI\5\4\3\2HF\3\2\2\2HI\3\2\2\2I\\\3\2\2\2JK\7\34\2\2KL"+
		"\7\"\2\2LM\7\16\2\2MU\7\"\2\2NO\7\20\2\2OQ\7\"\2\2PN\3\2\2\2QT\3\2\2\2"+
		"RP\3\2\2\2RS\3\2\2\2SV\3\2\2\2TR\3\2\2\2UR\3\2\2\2UV\3\2\2\2VW\3\2\2\2"+
		"WX\7\35\2\2XY\5\4\3\2YZ\7\7\2\2Z\\\3\2\2\2[\21\3\2\2\2[\24\3\2\2\2[$\3"+
		"\2\2\2[\'\3\2\2\2[,\3\2\2\2[<\3\2\2\2[=\3\2\2\2[>\3\2\2\2[?\3\2\2\2[@"+
		"\3\2\2\2[A\3\2\2\2[B\3\2\2\2[J\3\2\2\2\\~\3\2\2\2]^\f\23\2\2^_\t\3\2\2"+
		"_}\5\4\3\24`a\f\22\2\2ab\t\4\2\2b}\5\4\3\23cd\f\21\2\2de\t\5\2\2e}\5\4"+
		"\3\22fg\f\20\2\2gh\t\6\2\2h}\5\4\3\21ij\f\17\2\2jk\7\f\2\2k}\5\4\3\20"+
		"lm\f\16\2\2mn\t\7\2\2n}\5\4\3\17op\f\25\2\2pr\7\16\2\2qs\5\4\3\2rq\3\2"+
		"\2\2rs\3\2\2\2sx\3\2\2\2tu\7\20\2\2uw\5\4\3\2vt\3\2\2\2wz\3\2\2\2xv\3"+
		"\2\2\2xy\3\2\2\2y{\3\2\2\2zx\3\2\2\2{}\7\35\2\2|]\3\2\2\2|`\3\2\2\2|c"+
		"\3\2\2\2|f\3\2\2\2|i\3\2\2\2|l\3\2\2\2|o\3\2\2\2}\u0080\3\2\2\2~|\3\2"+
		"\2\2~\177\3\2\2\2\177\5\3\2\2\2\u0080~\3\2\2\2\20\b\f\36/\648HRU[rx|~";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}