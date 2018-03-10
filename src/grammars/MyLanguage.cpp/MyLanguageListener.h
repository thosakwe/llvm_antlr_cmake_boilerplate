
// Generated from /Users/thosakwe/Source/Misc/llvm-grace/grammars/MyLanguage.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MyLanguageParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MyLanguageParser.
 */
class  MyLanguageListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(MyLanguageParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(MyLanguageParser::CompilationUnitContext *ctx) = 0;


};

