#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T>
struct Data{
    T value;        
    struct Data* next;
    struct Data* prev;    
};

template <typename T>
class Iterator
{
    public:
        virtual void start();
        virtual T get();
        virtual void next();    
        virtual bool empty();
        virtual Data<T>* pos();
    protected:
        Data<T>* curr;
        Data<T>* buff;
    private:
};

template <typename T>
void Iterator<T>::start()
{   
    //Data<T> *test = new Data<T>;
    this->curr = this->buff->next;
    //Data<T> *test2 = new Data<T>;
    //Data<T> *test3 = new Data<T>;
}

template <typename T>
Data<T>* Iterator<T>::pos(){
    return this->curr;
}


#endif // ITERATOR_H
