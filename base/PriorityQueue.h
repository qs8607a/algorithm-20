
#include <vector>
#include <iostream>

namespace base{

template<class T>    
class PriorityQueue{
    public:
        PriorityQueue(){
            m_vec.push_back(T()); //padding
        }

        ~PriorityQueue(){}

        void push(T t){
            m_vec.push_back(t);
            swim(m_vec.size()-1);

        }

        bool pop(T &t){
            if(m_vec.size()>1){
                t = m_vec[1];
                m_vec[1] = m_vec[m_vec.size()-1];
                m_vec.pop_back();
                sink(1);
                return true;
            }
            else
                return false;
        }

        int size(){
            return m_vec.size();
        }

        void debug(){
            std::cout<<"debug ";
            for(int i=1;i<m_vec.size();i++)
                std::cout<<m_vec[i] << " ";
            std::cout<<std::endl;
        }
    private:
        std::vector<T> m_vec;

    private:

        void swim(int pos){
            T temp = m_vec[pos];
            while(pos > 1 &&  m_vec[pos/2] >  temp){
                m_vec[pos] = m_vec[pos/2]; 
                pos = pos/2;
            }

            m_vec[pos] = temp;
        }


        void sink(int pos){
            T temp = m_vec[pos]; 
            int j = pos *2;
            while(j<m_vec.size()){
                if( ( (j+1) < m_vec.size()) && m_vec[j+1] < m_vec[j])
                    j++;
                if(m_vec[j] < temp)
                    m_vec[pos] = m_vec[j];
                else
                    break;
                pos = j;
                j = 2*pos;
            }

            m_vec[pos] = temp;

        }


};

}
