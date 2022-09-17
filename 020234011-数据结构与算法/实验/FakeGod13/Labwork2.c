/*
【问题描述】
从键盘输入二叉树的元素，建立二叉树，实现二叉树的遍历算法。
【基本要求】
实现以下基本操作：
（1）从键盘输入二叉树的元素，建立二叉树。
（2）实现二叉树的先序遍历算法。
（3）实现二叉树的中序遍历算法。
（4）实现二叉树的后序遍历算法。
*/

#include<stdio.h>  
#include<stdlib.h>  
  
typedef struct Tree{  
   
 int data;  
 struct Tree *l;  
 struct Tree *r;  
}Tree,*BitTree;  
  
BitTree CreateLink()  
{  
    int data;  
    BitTree T;  
      
    scanf("%d",&data);        
      
    if(data == -1){       
          
        return NULL;  
  
    }else{  
        T = (BitTree)malloc(sizeof(Tree));  
        T->data = data;                        
          
        printf("请输入%d的左子树: ",data);       
        T->l = CreateLink();   
        printf("请输入%d的右子树: ",data);           
        T->r = CreateLink();       
        return T;                         
    }     
      
}  
  
void pre(BitTree T)  
{  
    if(T==NULL)   
    {  
        return;  
    }  
    printf("%d ",T->data);  
    pre(T->l);  
    pre(T->r);  
}  
  
void mid(BitTree T)  
{  
    if(T==NULL)  
    {  
        return;  
    }  
      
    mid(T->l);     
    printf("%d ",T->data);  
    mid(T->r);  
      
}  
  
void post(BitTree T)  
{  
    if(T==NULL)   
    {  
        return;  
    }  
      
    post(T->l);  
    post(T->r);  
    printf("%d ",T->data);  
}  
  
  
int main()  
{  
    BitTree S;  
    printf("请输入第一个节点的数据:\n");  
    S = CreateLink();  
    printf("先序遍历结果: \n");  
    pre(S);  
  
    printf("\n中序遍历结果: \n");  
    mid(S);  
      
    printf("\n后序遍历结果: \n");  
    post(S);  
      
    return 0;     
}
