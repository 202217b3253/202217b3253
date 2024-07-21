int main() {
    Node* root = NULL;

    // Insertion of nodes
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);

    // Print traversals
    printf("Preorder traversal: ");
    preorderTraversal(root);
    printf("\nInorder traversal: ");
    inorderTraversal(root);
    printf("\nPostorder traversal: ");
    postorderTraversal(root);
    printf("\nLevel order traversal: ");
    levelorderTraversal(root);

    // Delete the node with data = 20
    root = deletion(root, 20);
    printf("\nInorder traversal after deletion: ");
    inorderTraversal(root);

    return 0;
}
