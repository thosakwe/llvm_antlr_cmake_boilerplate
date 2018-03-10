
// Generated from /Users/thosakwe/Source/Misc/llvm-grace/grammars/MyLanguage.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MyLanguageParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MyLanguageParser.
 */
class  MyLanguageVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MyLanguageParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(MyLanguageParser::CompilationUnitContext *context) = 0;


};

