/*This file is generated by parse_dfa.c*/
#include"tm_lib.h"
#include"delta.h"
transition * delta(int state, char symbol){
transition * t = malloc(sizeof(transition));
switch(state){
case 0:
switch(symbol){
case '_':
t->move = ACCEPT;
break;
case 'a':
t->state = 2;
t->symbol = 'c';
t->move = 0;
break;
default:
t->move = ERROR;
break;
}
break;
case 1:
switch(symbol){
case 'b':
t->state = 2;
t->symbol = 'c';
t->move = 0;
break;
default:
t->move = ERROR;
break;
}
break;
case 2:
switch(symbol){
case 'd':
t->move = REJECT;
break;
case 'c':
t->state = 2;
t->symbol = 'c';
t->move = 0;
break;
default:
t->move = ERROR;
break;
}
break;
default:
t->move = ERROR;
break;
}
return t;
}