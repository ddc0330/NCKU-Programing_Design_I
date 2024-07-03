void enqueue(prio_queue_t *const queue, int value, int weight) { //利用權重的大小，將數值插入
    
    node_t *temp;
    temp = malloc(sizeof(node_t)) ;
    temp->value = value ;
    temp->weight = weight ;
    node_t *cur , *pre ;

    if(queue->head == NULL){
        queue->head = temp ;
        queue->head->next = NULL ;
        return ;
    }

    for(cur = queue->head , pre = NULL ; cur != NULL ; pre = cur ,cur = cur->next){
        if(weight < cur->weight){
            break ;
        }
    }

    if(cur == NULL){      //放最後
        pre->next = temp;
        pre->next->next = NULL ;
    }
    else if(pre == NULL){ //放第一個
        temp->next = queue->head;
        queue->head = temp;
    }
    else{                 //其他
        pre->next = temp ;
        pre->next->next = cur ;
    }
}

node_t *dequeue(prio_queue_t *const queue) { //把最前面回傳拿去free
    node_t *temp ;
    if(queue->head == NULL){
        return NULL ;
    }
    temp = queue->head ;
    queue->head = queue->head->next ;
    return temp ;
}