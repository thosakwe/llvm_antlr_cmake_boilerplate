
// Generated from /Users/thosakwe/Source/Misc/llvm-grace/grammars/MyLanguage.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MyLanguageListener.h"


/**
 * This class provides an empty implementation of MyLanguageListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MyLanguageBaseListener : public MyLanguageListener {
public:

  virtual void enterCompilationUnit(MyLanguageParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(MyLanguageParser::CompilationUnitContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

