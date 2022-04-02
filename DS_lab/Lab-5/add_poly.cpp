#include <bits/stdc++.h>
using namespace std;

struct Node {
    int coef;
    int pow;
    struct Node* next;
};
 
void create_node(int x, int y, struct Node** temp)
{
    struct Node *r, *z;
    z = *temp;
    if (z == NULL) {
        r = (struct Node*)malloc(sizeof(struct Node));
        r->coef = x;
        r->pow = y;
        *temp = r;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
    else {
        r->coef = x;
        r->pow = y;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}
 
void add_poly(struct Node* poly1, struct Node* poly2,
             struct Node* poly)
{
    while (poly1->next && poly2->next) {
        
        if (poly1->pow > poly2->pow) {
            poly->pow = poly1->pow;
            poly->coef = poly1->coef;
            poly1 = poly1->next;
        }
		else if (poly1->pow < poly2->pow) {
            poly->pow = poly2->pow;
            poly->coef = poly2->coef;
            poly2 = poly2->next;
        }
        else {
            poly->pow = poly1->pow;
            poly->coef = poly1->coef + poly2->coef;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        
        poly->next = (struct Node*)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
    while (poly1->next || poly2->next) {
        if (poly1->next) {
            poly->pow = poly1->pow;
            poly->coef = poly1->coef;
            poly1 = poly1->next;
        }
        if (poly2->next) {
            poly->pow = poly2->pow;
            poly->coef = poly2->coef;
            poly2 = poly2->next;
        }
        poly->next
            = (struct Node*)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}
 
void show(struct Node* node)
{
    while (node->next != NULL) {
    	if(node->pow == 0){
    		printf("%d", node->coef);
		}else if(node->pow == 1){
			printf("%dx", node->coef);
		}else{
			printf("%dx^%d", node->coef, node->pow);
		}
        
        node = node->next;
        if (node->coef >= 0) {
            if (node->next != NULL)
                printf(" + ");
        }
    }
}
 

int main()
{
    struct Node *poly = NULL, *poly1 = NULL, *poly2 = NULL;
    int x,y,z,a,b,c;
    cout<<"Enter 1st polynomial coefficients: \n";
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"Enter 2nd polynomial coefficients: \n";
    cin>>a;
    cin>>b;
    cin>>c;
    create_node(x, 2, &poly1);
    create_node(y, 1, &poly1);
    create_node(z, 0, &poly1);
 
    create_node(a, 2, &poly2);
    create_node(b, 1, &poly2);
    create_node(c, 0, &poly2);
 
    printf("1st polynomial: ");
    show(poly1);
 
    printf("\n2nd polynomial: ");
    show(poly2);
 
    poly = (struct Node*)malloc(sizeof(struct Node));
 

    add_poly(poly1, poly2, poly);
 
    printf("\nAdded polynomial: ");
    show(poly);
 
    return 0;
}
