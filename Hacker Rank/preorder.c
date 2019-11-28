void preOrder( struct node *root) {
	printf("%d ", root->data);
	if(root->left != NULL){
		preOrder(root->left);
	}
	if(root->right != NULL){
		preOrder(root->right);
	}
}