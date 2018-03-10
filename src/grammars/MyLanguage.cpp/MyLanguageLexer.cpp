
// Generated from /Users/thosakwe/Source/Misc/llvm-grace/grammars/MyLanguage.g4 by ANTLR 4.7


#include "MyLanguageLexer.h"


using namespace antlr4;


MyLanguageLexer::MyLanguageLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MyLanguageLexer::~MyLanguageLexer() {
  delete _interpreter;
}

std::string MyLanguageLexer::getGrammarFileName() const {
  return "MyLanguage.g4";
}

const std::vector<std::string>& MyLanguageLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& MyLanguageLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& MyLanguageLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& MyLanguageLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& MyLanguageLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> MyLanguageLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& MyLanguageLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> MyLanguageLexer::_decisionToDFA;
atn::PredictionContextCache MyLanguageLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MyLanguageLexer::_atn;
std::vector<uint16_t> MyLanguageLexer::_serializedATN;

std::vector<std::string> MyLanguageLexer::_ruleNames = {
  u8"T__0"
};

std::vector<std::string> MyLanguageLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> MyLanguageLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> MyLanguageLexer::_literalNames = {
  "", u8"'hello world'"
};

std::vector<std::string> MyLanguageLexer::_symbolicNames = {
};

dfa::Vocabulary MyLanguageLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MyLanguageLexer::_tokenNames;

MyLanguageLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x3, 0x11, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5, 
    0x6, 0x7, 0x6a, 0x2, 0x2, 0x6, 0x7, 0x7, 0x67, 0x2, 0x2, 0x7, 0x8, 0x7, 
    0x6e, 0x2, 0x2, 0x8, 0x9, 0x7, 0x6e, 0x2, 0x2, 0x9, 0xa, 0x7, 0x71, 
    0x2, 0x2, 0xa, 0xb, 0x7, 0x22, 0x2, 0x2, 0xb, 0xc, 0x7, 0x79, 0x2, 0x2, 
    0xc, 0xd, 0x7, 0x71, 0x2, 0x2, 0xd, 0xe, 0x7, 0x74, 0x2, 0x2, 0xe, 0xf, 
    0x7, 0x6e, 0x2, 0x2, 0xf, 0x10, 0x7, 0x66, 0x2, 0x2, 0x10, 0x4, 0x3, 
    0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MyLanguageLexer::Initializer MyLanguageLexer::_init;
