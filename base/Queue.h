
namespace base{

template<class T>
class Queue{
    public:
        Queue();
        Queue(int);
        ~Queue();

        void enqueue(T t);
        T dequeue();
        bool hasItem();
        int size();

    private:
        Queue & operator=(const Queue &){};
        Queue(const Queue &){}

        int m_size;
        int m_head;
        int m_tail;
        T *m_item;
};

}
