#include "Context.h"
#include "Interpreter.h"

using namespace std;

int main(int argc, char *argv[]) {
    Context *c = new Context();
    AbstractExpression *te = new TerminalExpression("hello");
    AbstractExpression *nte = new NonterminalExpression(te, 2);
    nte->Interpret(*c);
    return 0;
}