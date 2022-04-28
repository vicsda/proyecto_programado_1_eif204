//
// Created by Francisco on 26/04/2022.
//

#include"Lista.h"
template <class tipo>
Lista<tipo>::Lista(){
    raiz= new Nodo<tipo>;
}

template<class tipo>
Lista<tipo>::~Lista(){
    Nodo<tipo> *temp;
    Nodo<tipo> *anterior;
    if(raiz->getSiguiente()==nullptr){
        delete raiz;
    }else{
        while(raiz->getSiguiente()!=nullptr){
            temp=raiz;
            while(temp->getSiguiente()!=nullptr){
                anterior=temp;
                temp=temp->getSiguiente();
            }
            anterior->getSiguiente(nullptr);
            delete temp;
        }
    }
}

template<class tipo>
void Lista<tipo>::agregarInicio(tipo*  per){

    raiz = new Nodo<tipo>(per, raiz);
}

template<class tipo>
bool Lista<tipo>::borrar(tipo* per,string & str){

}

template<class tipo>
bool Lista<tipo>::eliminarEnELugar(int lug) {


    /* Nodo* p = primero;
     Nodo* prev = NULL;
     int cont = 1;
     int cant = 0;
     if (lug == 1)
         this->eliminarAlPrimero();
     else {
         cant = cuentaNodos();
         if (lug > cant) return false;
         else {
             while (cont < lug) {
                 prev = p;
                 p = p->getSig();
                 cont++;
             }
             prev->setSig(p->getSig());
             p = NULL;
             delete p;
         }
     }
     return true;*/

    Nodo<tipo> *p = raiz;
    Nodo<tipo> *prev;
    int cont = 1;
    int cant = 0;
    if (lug == 1)
    //this->eliminarAlPrimero();
     else {
        cant = cuentaNodos();
        if (lug > cant) return false;
        else {
            while (cont < lug) {
                prev = p;
                p = p->getSig();
                cont++;
            }
            prev->setSig(p->getSig());
            p = NULL;
            delete p;
        }
    }
    return true;


}