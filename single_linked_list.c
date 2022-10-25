#include<stdio.h>
#include<stddef.h>

int main () {
    struct node {
        int data;
        struct node *next;
    };

    struct node a = {10,NULL};
    struct node b = {20,NULL};
    struct node c = {30,NULL};
    struct node d = {40,NULL};
    struct node e = {50,NULL};

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    struct node *s = &a;
    
    return s;

}