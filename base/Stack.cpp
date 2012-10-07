#include "Stack.h"

namespace base{
    
template<class T>   
Stack<T>::Stack():m_size(100),m_item(0){
    m_item = new T[m_size];
    m_current = -1;
}

template<class T>   
Stack<T>::Stack(int capacity){
    m_item = new T[m_size];
    m_current = -1;
}

template<class T>   
Stack<T>::~Stack()
{
    delete [] m_item;
    m_item = 0;
}


template<class T>
void Stack<T>::push(T t){
    m_current++;
    if(m_current > (m_size - 1)){
        resize();
    }
    m_item[m_current] = t;
}

template<class T>
T Stack<T>::pop(){
    T temp = m_item[m_current];
    m_current--;
    return temp;
}

template<class T>
bool Stack<T>::hasItem(){
    if(m_current >=0 )
        return true;
    else
        return false;
}


template<class T>
void Stack<T>::resize(){
    int new_size = m_size*2;
    T * new_item = new T[new_size];
    for(int i=0;i<m_size;i++)
        new_item[i] = m_item[i];

    m_size = new_size;
    delete [] m_item;
    m_item = new_item;
    
}

template<class T>
int Stack::size(){
    if(current <0)
        return 0;
    return current+1;
}

}
