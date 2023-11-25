#include <stdio.h>
#include <stdlib.h>
#define datatype int
//이진 트리 노드 구조 정의
typedef struct tnode{
    struct tnode *left;
    datatype data;
    struct tnode *right;
}tnode;

//이진 트리의 헤드 노드 구조 정의
typedef struct linkedBT{
    tnode *root;
}linkedBT;

//트리 초기화
void init_BT(tnode **root){
    *root = NULL;
}

//트리 항목들을 출력
void print_BT(tnode *root){
    //순회 알고리즘 사용
}

//child를 노드 root의 왼쪽 서브트리로 설정
void set_left(tnode *root, tnode *child){
    if(root->left){
        printf("왼쪽 서브트리가 이미 존재합니다.\n");
        exit(1);
    }
    else root->left = child;
}

//chiild를 노드 root의 오른쪽 서브트리로 설정
void set_right(tnode *root, tnode *child){
    if(root->right){
        printf("오른쪽 서브트리가 이미 존재합니다.\n");
        exit(1);
    }
    else root->right = child;
}

//단말 노드인지 판단
int is_leaf(tnode *node){
    return !node->left && !node->right;
}

//노드의 데이터를 반환
datatype get_data(tnode *node){
    if(!node){
        printf("NULL노드이므로 데이터를 반환할 수 없습니다.\n");
        exit(1);
    }
    else return node->data;
}

//노드의 부모 노드를 반환
tnode *get_parent(tnode *node){
    //부모 노드를 가리키는 필드를 추가하여 구현
}

//노드의 왼쪽 자식 노드를 반환
tnode *get_left(tnode *node){
    return node->left;
}

//노드의 오른쪽 자식 노드를 반환
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
        printf("단말 노드입니다.\n");
    }
    if(is_leaf(r)){
        printf("단말 노드입니다.\n");
    }
    printf("%d\n",get_data(lBT2.root));

}
