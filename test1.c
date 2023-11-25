#include <stdio.h>
#include <stdlib.h>
#define datatype int
//���� Ʈ�� ��� ���� ����
typedef struct tnode{
    struct tnode *left;
    datatype data;
    struct tnode *right;
}tnode;

//���� Ʈ���� ��� ��� ���� ����
typedef struct linkedBT{
    tnode *root;
}linkedBT;

//Ʈ�� �ʱ�ȭ
void init_BT(tnode **root){
    *root = NULL;
}

//Ʈ�� �׸���� ���
void print_BT(tnode *root){
    //��ȸ �˰��� ���
}

//child�� ��� root�� ���� ����Ʈ���� ����
void set_left(tnode *root, tnode *child){
    if(root->left){
        printf("���� ����Ʈ���� �̹� �����մϴ�.\n");
        exit(1);
    }
    else root->left = child;
}

//chiild�� ��� root�� ������ ����Ʈ���� ����
void set_right(tnode *root, tnode *child){
    if(root->right){
        printf("������ ����Ʈ���� �̹� �����մϴ�.\n");
        exit(1);
    }
    else root->right = child;
}

//�ܸ� ������� �Ǵ�
int is_leaf(tnode *node){
    return !node->left && !node->right;
}

//����� �����͸� ��ȯ
datatype get_data(tnode *node){
    if(!node){
        printf("NULL����̹Ƿ� �����͸� ��ȯ�� �� �����ϴ�.\n");
        exit(1);
    }
    else return node->data;
}

//����� �θ� ��带 ��ȯ
tnode *get_parent(tnode *node){
    //�θ� ��带 ����Ű�� �ʵ带 �߰��Ͽ� ����
}

//����� ���� �ڽ� ��带 ��ȯ
tnode *get_left(tnode *node){
    return node->left;
}

//����� ������ �ڽ� ��带 ��ȯ
tnode *get_right(tnode *node){
    return node->right;
}

int main(void){
    linkedBT lBT1, lBT2;
    tnode *node1 = (tnode *)malloc(sizeof(tnode));
    tnode *node2 = (tnode *)malloc(sizeof(tnode));
    tnode *node3 = (tnode *)malloc(sizeof(tnode));
    tnode *l, *r;
    node1->data = 10;
    node1->left = node1->right = NULL;
    node2->data = 20;
    node2->left = node2->right = NULL;
    node3->data = 30;
    node3->left = node3->right = NULL;
    init_BT(&(lBT1.root));
    lBT1.root = node1;
    init_BT(&(lBT2.root));
    lBT2.root = node2;
    set_left(lBT1.root, node3);
    set_right(lBT1.root, lBT2.root);
    init_BT(&(lBT2.root));
    printf("%d\n",get_data(lBT1.root));
    l = get_left(lBT1.root);
    r = get_right(lBT1.root);
    printf("%d ",get_data(l));
    printf("%d\n",get_data(r));
    if(is_leaf(l)){
        printf("�ܸ� ����Դϴ�.\n");
    }
    if(is_leaf(r)){
        printf("�ܸ� ����Դϴ�.\n");
    }
    printf("%d\n",get_data(lBT2.root));

}
