/*
【问题描述】
利用单链表存储一元多项式。
【基本要求】
实现以下基本操作：
（1）从键盘输入一元多项式的信息，建立一元多项式。
（2）实现两个一元多项式相加，并输出和多项式。
*/

#include<stdio.h>  
#include<stdlib.h>  
  
const int N = 10e4;  
  
typedef struct node{  
    double coefficient;  
    int index;  
    struct node *next;  
}node;  
  
typedef struct unary_polynomial{  
    node *head;  
    node *tail;  
    int size;  
    int index_min;  
    int index_max;  
    void(*add)(struct unary_polynomial *a,struct unary_polynomial *b);  
    void(*show)(struct unary_polynomial *that);  
}unary_polynomial;  
  
void swap_int(int *a,int *b);  
void swap_float(double *a,double *b);  
void quick_sort(int *q,double *x,int l,int r);  
  
unary_polynomial *unary_polynomial_creat(unary_polynomial *that);  
  
void add(struct unary_polynomial *a,struct unary_polynomial *b);  
void show(struct unary_polynomial *that);  
  
int main()  
{  
    unary_polynomial a,b;  
    unary_polynomial_creat(&a);  
    a.show(&a);  
    unary_polynomial_creat(&b);  
    b.show(&b);  
    a.add(&a,&b);  
    a.show(&a);  
    return 0;  
}  
  
void swap_int(int *a,int *b){  
    int temp;  
    temp = *a;  
    *a = *b;  
    *b = temp;  
}  
  
void swap_float(double *a,double *b){  
    double temp;  
    temp = *a;  
    *a = *b;  
    *b = temp;  
}  
  
void quick_sort(int *q,double *x,int l,int r){  
    if(l >= r)return;  
      
    int mid = q[(l + r) >> 1], i = l - 1, j = r + 1;  
    while(i<j)  
    {  
        do i++;while(q[i]<mid);  
        do j--;while(q[j]>mid);  
        if(i<j)swap_int(&q[i],&q[j]),swap_float(&x[i],&x[j]);  
    }  
    quick_sort(q, x, l, j);  
    quick_sort(q, x, j + 1, r);  
}  
  
  
void add(struct unary_polynomial *a,struct unary_polynomial *b){  
    node *p,*q1,*q2,*temp;  
    p = b->head;  
    int l = b->size;  
    for(int i=0;i<l;i++){  
        p = p->next;  
        if(p->index < a->index_min){  
            temp = malloc(sizeof(node));  
            temp->index = p->index;  
            temp->coefficient = p->coefficient;  
              
            temp->next = a->head->next;  
            a->head->next = temp;  
  
            a->index_min = p->index;  
            a->size++;  
        }else if(p->index <= a->index_max){  
            q1 = a->head;  
            q2 = a->head->next;  
            while(q2!=NULL){  
                if(q1->index < p->index && p->index <= q2->index){  
                    if(p->index == q2->index){  
                        q2->coefficient += p->coefficient;  
                    }else{  
                        temp = malloc(sizeof(node));  
                        temp->index = p->index;  
                        temp->coefficient = p->coefficient;  
  
                        temp->next = q2;  
                        q1->next = temp;  
  
                        a->size++;  
                    }  
                    break;  
                }else{  
                    q1 = q1->next;  
                    q2 = q2->next;  
                }  
            }  
        }else{  
            temp = malloc(sizeof(node));  
            temp->index = p->index;  
            temp->coefficient = p->coefficient;  
  
            temp->next = NULL;  
            a->tail->next = temp;  
            a->tail = a->tail->next;  
  
            a->index_max = p->index;  
            a->size++;  
        }  
    }  
}  
  
void show(struct unary_polynomial *that){  
    node *p = that->head;  
    int l = that->size;  
    for(int i=0;i<l;i++){  
        p = p->next;  
        if(i)printf(" + %.2f*X^%d",p->coefficient,p->index);  
        else printf("%.2f*X^%d",p->coefficient,p->index);  
    }  
    putchar('\n');  
}  
  
unary_polynomial *unary_polynomial_creat(unary_polynomial *that){  
    input_size:  
    printf("请输入多项式的项数:");  
    int size;scanf("%d",&size);  
    if(size<1){  
        printf("error:项数小于1!\n");  
        goto input_size;  
    }  
    that->size = size;  
    int idx[N];  
    int idx_bool[N];  
    for(int i=0;i<size;i++)idx_bool[i]=0;  
    double coef[N];  
    printf("请输入多项式的每一项的系数和指数(每行输入两个整数用空格分隔)\n");  
    for(int i = 0;i<size;i++){  
        double coefficient;  
        int index;  
        input_coefficient_index:  
        scanf("%lf %d",&coefficient,&index);  
        if(idx_bool[index]){  
            printf("error:输入相同指数项式!请重新输入其他指数项式.\n");  
            goto input_coefficient_index;  
        }else{  
            idx[i] = index;  
            idx_bool[index] = 1;  
            coef[i] = coefficient;  
        }  
    }  
    printf("unary_polynomial input OK!\n");  
    quick_sort(idx,coef,0,size-1);  
    printf("qsort OK!\n");  
    that->index_min = idx[0];  
    that->index_max = idx[size-1];  
    printf("index max min OK!\n");  
      
    that->head = malloc(sizeof(node));  
    that->head->next = NULL;  
    node *p = that->head;  
    for(int i=0;i<size;i++){  
        node *temp = malloc(sizeof(node));  
        temp->coefficient = coef[i];  
        temp->index = idx[i];  
        temp->next = NULL;  
          
        p->next = temp;  
        p = p->next;  
    }  
    that->tail = p;  
  
    that->add = add;  
    that->show = show;  
  
    return that;  
}