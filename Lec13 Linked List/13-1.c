int fire(struct Car *head) {
    struct Car *p ;
    int temp = 0 ;
    int num = 0 ;
    for(p = head->next ; p != NULL ; p = p->next){
        temp += p->passenger ;
        num++ ;
        if(temp >= p->flammable){
            return num -1;
        }
    }
    return num;
    return 0 ;
}