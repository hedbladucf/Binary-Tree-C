struct node{
    int data;
    struct node *left;
    struct node *right;
}

struct node* insert(struct node* head, struct node* insert_me){

    if(head == NULL){

        return insert_me;

    }
    if(head->data > insert_me->data){
    // GO LEFT!

        if(head->left == NULL){
        // Insert here!

            head->left = insert_me;
            return head;

        }
        else{
            head->left = insert(head->left, insert_me);
            return head;
        }

    }
    else{

    //GO RIGHT!

         if(head->right == NULL){
         // Insert here!
            head->right = insert_me;
            return head;

         }
         else{

            head->right = insert(head->right, insert_me);
            return head;
         }

    }

}
