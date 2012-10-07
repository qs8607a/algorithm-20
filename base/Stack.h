

namespace base{

template<class T>
class Stack{

    public:
        Stack();
        Stack(int capacity);
        ~Stack();

        void push(T t);
        T pop();
        int size();
        bool hasItem();
        void resize();

    private:
        Stack &operator=(const Stack &k){}
        T *m_item;
        int m_size;
        int m_current;


};
   
}
