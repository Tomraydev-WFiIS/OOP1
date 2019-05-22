#pragma once

template<typename T>
class Node {
    public:
        Node(T val_){
            val = val_;
            next = nullptr;
        }
        ~Node(){
            if(next) {
                next->~Node();
                delete next;
            }
        }

        T val;
        Node<T>* next;
};

template<typename T>
class Stack{
    public:
        Stack(){
            head = nullptr;
        }
        ~Stack(){
            if(head){
                head->~Node();
            }
        }
        void push(T val_){
            Node<T>* new_head = new Node<T> (val_);
            new_head->next = head;
            head = new_head;
        }
        T pop(){//niedokonczona
            if(head){
                T mock;

                //set the pointers
                head = head->next;
                return mock;
            }
            else{
                //throw std::logic_error
            }
            
        }
        bool isEmpty(){
            return (head)?(0):(1);
        }
    private:
        Node<T>* head;
};