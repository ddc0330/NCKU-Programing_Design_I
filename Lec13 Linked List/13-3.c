void MoveToTail() {

    struct node *p ; 
    p = head ;
    int temp = 0;
    for(; p != NULL ; p = p->next){
        if(temp < p->val){
            temp = p->val ;
        }
    }
    
    struct node *cur , *pre ;
    for(cur = head , pre = NULL ; cur != NULL && cur->val != temp ; pre = cur , cur = cur->next){
       
    } ;
    if(pre == NULL){ //max is first
        struct node *temp ;
        temp = head->next ;
        head->next = NULL ;
        tail->next = head ;
        head = temp ;
    }
    else if(cur == tail){ // max is last
        
    }
    else{
        pre->next = cur->next ;
        cur->next = NULL ;
        tail->next = cur ;
    }
}