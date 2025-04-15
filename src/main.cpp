#include <iostream>
#include <string>
#include <antlr4-runtime.h>
#include "gen/purple_grammarLexer.h"
#include "gen/purple_grammarParser.h"

using namespace antlr4;

int main() {
    std::string inputLine;
    std::cout << "Enter input: ";
    std::getline(std::cin, inputLine);

    // Create input stream from the line
    ANTLRInputStream input(inputLine);

    // Create lexer and token stream
    purple_grammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Create parser
    purple_grammarParser parser(&tokens);

    tree::ParseTree* tree = parser.expr();

    // Print the parse tree (AST)
    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}