/* Pesquisa em árvore binária Pré-ordem*/

#include<iostream>
using namespace std;

struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

//Função para visitar nós na pré-ordem
void Preorder(struct Node *root) {
	// Condição básica para recursão
	// se árvore / sub-árvore está vazia, do retorno e da saída
	if(root == NULL){
        return;
	}
	else{
	printf("%c ",root->data); // Imprimir dados
	Preorder(root->left);     // Visite a subárvore esquerda
	Preorder(root->right);    // Visite a subárvore direita
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

//Função para inserir os nós em uma árvore binária de pesquisa
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
	/* Criando uma árvore de exemplo
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
