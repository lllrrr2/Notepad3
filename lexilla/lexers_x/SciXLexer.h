// encoding: UTF-8
#pragma once

#include "SciLexer.h"    // Scintilla/Lexilla Lexer defines

#define SCLEX_AHKL    200
#define SCLEX_CSV     201
#define SCLEX_DART    202
#define SCLEX_KOTLIN  203
#define SCLEX_TOML    204

// -----------------------------------------------------------------------------
// !!!!! ADD  Lexer Linkage in:  scintilla\src\Catalogue.cxx  !!!!!
// -----------------------------------------------------------------------------

#define SCE_AHKL_NEUTRAL 0
#define SCE_AHKL_IDENTIFIER 1
#define SCE_AHKL_COMMENTDOC 2
#define SCE_AHKL_COMMENTLINE 3
#define SCE_AHKL_COMMENTBLOCK 4
#define SCE_AHKL_COMMENTKEYWORD 5
#define SCE_AHKL_STRING 6
#define SCE_AHKL_STRINGOPTS 7
#define SCE_AHKL_STRINGBLOCK 8
#define SCE_AHKL_STRINGCOMMENT 9
#define SCE_AHKL_LABEL 10
#define SCE_AHKL_HOTKEY 11
#define SCE_AHKL_HOTSTRING 12
#define SCE_AHKL_HOTSTRINGOPT 13
#define SCE_AHKL_HEXNUMBER 14
#define SCE_AHKL_DECNUMBER 15
#define SCE_AHKL_VAR 16
#define SCE_AHKL_VARREF 17
#define SCE_AHKL_OBJECT 18
#define SCE_AHKL_USERFUNCTION 19
#define SCE_AHKL_DIRECTIVE 20
#define SCE_AHKL_COMMAND 21
#define SCE_AHKL_PARAM 22
#define SCE_AHKL_CONTROLFLOW 23
#define SCE_AHKL_BUILTINFUNCTION 24
#define SCE_AHKL_BUILTINVAR 25
#define SCE_AHKL_KEY 26
#define SCE_AHKL_USERDEFINED1 27
#define SCE_AHKL_USERDEFINED2 28
#define SCE_AHKL_ESCAPESEQ 30
#define SCE_AHKL_ERROR 31


#define SCE_CSV_DEFAULT 0
#define SCE_CSV_COLUMN_0 1
#define SCE_CSV_COLUMN_1 2
#define SCE_CSV_COLUMN_2 3
#define SCE_CSV_COLUMN_3 4
#define SCE_CSV_COLUMN_4 5
#define SCE_CSV_COLUMN_5 6
#define SCE_CSV_COLUMN_6 7
#define SCE_CSV_COLUMN_7 8
#define SCE_CSV_COLUMN_8 9
#define SCE_CSV_COLUMN_9 10


#define SCE_DART_DEFAULT 0
#define SCE_DART_COMMENTLINE 1
#define SCE_DART_COMMENTLINEDOC 2
#define SCE_DART_COMMENTBLOCK 3
#define SCE_DART_COMMENTBLOCKDOC 4
#define SCE_DART_NUMBER 5
#define SCE_DART_OPERATOR 6
#define SCE_DART_OPERATOR2 7
#define SCE_DART_IDENTIFIER 8
#define SCE_DART_STRING_SQ 9
#define SCE_DART_STRING_DQ 10
#define SCE_DART_TRIPLE_STRING_SQ 11
#define SCE_DART_TRIPLE_STRING_DQ 12
#define SCE_DART_ESCAPECHAR 13
#define SCE_DART_RAWSTRING_SQ 14
#define SCE_DART_RAWSTRING_DQ 15
#define SCE_DART_TRIPLE_RAWSTRING_SQ 16
#define SCE_DART_TRIPLE_RAWSTRING_DQ 17
#define SCE_DART_TRIPLE_STRING_SQSTART 18
#define SCE_DART_TRIPLE_STRING_DQSTART 19
#define SCE_DART_TRIPLE_STRING_SQEND 20
#define SCE_DART_TRIPLE_STRING_DQEND 21
#define SCE_DART_SYMBOL_OPERATOR 22
#define SCE_DART_SYMBOL_IDENTIFIER 23
#define SCE_DART_VARIABLE 24
#define SCE_DART_METADATA 25
#define SCE_DART_LABEL 26
#define SCE_DART_FUNCTION 27
#define SCE_DART_WORD 28
#define SCE_DART_WORD2 29
#define SCE_DART_CLASS 30
#define SCE_DART_ENUM 31


#define SCE_KOTLIN_DEFAULT 0
#define SCE_KOTLIN_COMMENTLINE 1
#define SCE_KOTLIN_COMMENTLINEDOC 2
#define SCE_KOTLIN_COMMENTBLOCK 3
#define SCE_KOTLIN_COMMENTBLOCKDOC 4
#define SCE_KOTLIN_COMMENTDOCWORD 5
#define SCE_KOTLIN_STRING 6
#define SCE_KOTLIN_CHARACTER 7
#define SCE_KOTLIN_ESCAPECHAR 8
#define SCE_KOTLIN_RAWSTRING 9
#define SCE_KOTLIN_RAWSTRINGSTART 10
#define SCE_KOTLIN_RAWSTRINGEND 11
#define SCE_KOTLIN_BACKTICKS 12
#define SCE_KOTLIN_NUMBER 13
#define SCE_KOTLIN_OPERATOR 14
#define SCE_KOTLIN_OPERATOR2 15
#define SCE_KOTLIN_VARIABLE 16
#define SCE_KOTLIN_ANNOTATION 17
#define SCE_KOTLIN_LABEL 18
#define SCE_KOTLIN_IDENTIFIER 19
#define SCE_KOTLIN_WORD 20
#define SCE_KOTLIN_CLASS 21
#define SCE_KOTLIN_INTERFACE 22
#define SCE_KOTLIN_ENUM 23
#define SCE_KOTLIN_FUNCTION 24


#define SCE_TOML_DEFAULT 0
#define SCE_TOML_KEYWORD 1
#define SCE_TOML_COMMENT 2
#define SCE_TOML_SECTION 3
#define SCE_TOML_KEY 4
#define SCE_TOML_ASSIGNMENT 5
#define SCE_TOML_VALUE 6
#define SCE_TOML_NUMBER 7
#define SCE_TOML_DATETIME 8
#define SCE_TOML_STR_BASIC 9
#define SCE_TOML_STR_LITERAL 10
#define SCE_TOML_PARSINGERROR 11


//#define SCE_YAML_DEFAULT 0
//#define SCE_YAML_COMMENT 1
//#define SCE_YAML_IDENTIFIER 2
//#define SCE_YAML_KEYWORD 3
//#define SCE_YAML_NUMBER 4
//#define SCE_YAML_REFERENCE 5
//#define SCE_YAML_DOCUMENT 6
//#define SCE_YAML_TEXT 7
//#define SCE_YAML_ERROR 8
//#define SCE_YAML_OPERATOR 9
//#define SCE_YAML_DIRECTIVE 10
//#define SCE_YAML_STRING1 11
//#define SCE_YAML_STRING2 12
//#define SCE_YAML_ESCAPECHAR 13
//#define SCE_YAML_KEY 14
//#define SCE_YAML_BLOCK_SCALAR 15
//#define SCE_YAML_TAG 16
//#define SCE_YAML_VERBATIM_TAG 17
//#define SCE_YAML_DATETIME 18
//#define SCE_YAML_INDENTED_TEXT 19
//