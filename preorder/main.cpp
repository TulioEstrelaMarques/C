/* Pesquisa em �rvore bin�ria Pr�-ordem*/

#include<iostream>
using namespace std;

struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

//Fun��o para visitar n�s na pr�-ordem
void Preorder(struct Node *root) {
	// Condi��o b�sica para recurs�o
	// se �rvore / sub-�rvore est� vazia, do retorno e da sa�da
	if(root == NULL){
        return;
	}
	else{
	printf("%c ",root->data); // Imprimir dados
	Preorder(root->left);     // Visite a sub�rvore esquerda
	Preorder(root->right);    // Visite a sub�rvore direita
	}
}
//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	printf("%c ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}

//Function to visit nodes in Postorder
void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	printf("%c ",root->data); // Print data
}*/

//Fun��o para inserir os n�s em uma �rvore bin�ria de pesquisa
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	/* Criando uma �rvore de exemplo
                M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Preorder.
	cout<<"Preorder: ";
	Preorder(root);
	cout<<"\n";
}
