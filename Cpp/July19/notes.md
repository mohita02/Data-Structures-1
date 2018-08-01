# Evaluation of Postfix Expression

*Q. Evaluate the following expression : `5, 6, 2, +, *, 12, 4, /, -`

*Algorithm for the given equation :*
- Scan the infix expression from left to right.
- If the scanned character is an operator, push it into stack.
- If the scanned character is `(`, push it into the stack.
- If the scanned character is `)`, pop and output from the stack untill `(` is encountered. pop `(` also.
- Else(if operator):
    - If precedence of scanned operator is greater than precedence of top operator in stack, push it into stack.
    - If precedence of scanned operator is lesser than precedence of top operator in stack, pop the operator from the stack.
- Repeat the steps until whole expression is scanned.
- Empty the stack by poping the element and output them.

