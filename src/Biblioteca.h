#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
#include <string>

using namespace std;

class Biblioteca{

    //Atributos da classe mãe
    protected:

        string titulo;
        string autor;
        int ano;
    
    public:

        //construtor e destrutor
        Biblioteca(string titulo, string autor, int ano);
        Biblioteca();
        ~Biblioteca();
        

        string getTitulo();
        string getAutor();
        int getAno();

        void setTitulo(string titulo);
        void setAutor(string autor);
        void setAno(int ano);

        virtual void imprimirBiblioteca();
};
#endif