#include<iostream>
using namespace std;
struct BiNode {
	int data;
	BiNode* lchild, * rchild;
};
BiNode* SearchBST(BiNode* root, int k) {
	if (root == NULL) {
		return NULL;
	}
	else if (root->data == k) {
		return root;
	}
	else if (k < root->data) {
		return SearchBST(root->lchild, k);
	}
	else {
		return SearchBST(root->rchild, k);
	}
}
BiNode* InsertBST(BiNode* root, int data) {
	if (root == NULL) {
		root = new BiNode;
		root->data = data;
		root->lchild = root->rchild = NULL;
		return root;
	}
	if (data <= root->data) {
		root->lchild = InsertBST(root->lchild, data);
	}
	else {
		root->rchild = InsertBST(root->rchild, data);
	}
	return root;
}
BiNode* createBST(int a[], int n) {
	BiNode* T = NULL;
	for (int i = 0; i < n; i++) {
		T = InsertBST(T, a[i]);
	}
	return T;
}
int main() {
	system("color FD");
	int a[] = { 61,46,50,79,92,30,42,84,78,55 };
	BiNode* bit = createBST(a, 10);
	if (SearchBST(bit, 50) != NULL) {
		cout << SearchBST(bit, 50)->data << endl;
	}
	else {
		cout << "²éÕÒÊ§°Ü£¡" << endl;
	}
	return 0;
}