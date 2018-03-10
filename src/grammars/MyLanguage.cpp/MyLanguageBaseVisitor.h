
// Generated from /Users/thosakwe/Source/Misc/llvm-grace/grammars/MyLanguage.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MyLanguageVisitor.h"


/**
 * This class provides an empty implementation of MyLanguageVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MyLanguageBaseVisitor : public MyLanguageVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(MyLanguageParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }


};

