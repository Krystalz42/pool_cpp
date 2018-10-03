#ifndef __EVAL_EXPR__
#define __EVAL_EXPR__

typedef Fixed (*operator_f)(Fixed &f1, Fixed & f2);

struct operator_action {
    char            op;
    operator_f      f;
};

#endif //__EVAL_EXPR__