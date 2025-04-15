grammar purple_grammar;

NUMBER : [0-9]+ ;
PLUS   : '+' ;
MINUS  : '-' ;
MUL    : '*' ;
DIV    : '/' ;
LPAREN : '(' ;
RPAREN : ')' ;
WS     : [ \t\r\n]+ -> skip ;

expr : term (PLUS term)* ;
term : factor (MUL factor)* ;
factor : NUMBER | LPAREN expr RPAREN ;