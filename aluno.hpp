#ifndef ALUNO_H_
#define ALUNO_H_
#include <string>
#include "./pessoa.hpp"
#include "./turma.hpp"

class Aluno : public Pessoa
{
    private:
            unsigned long int numMatricula;
            std::list<Turma*> turmas;
            std::list<Boletim*> boletins;
    public:
           Aluno(unsigned long int n);
           void setturma();
           void setnota();
           void setCadastro();
           void getCadastro();
           ~Aluno();
};

Aluno::Aluno( long unsigned int n)
{
    this->numMatricula = n;
}

void Aluno::setturma()
{

}

void Aluno::setnota()
{

}

void Aluno::getCadastro()
{
     std::cout <<"Nome: " << nome << std::endl;
     std::cout <<"Cpf: "<< cpf << std::endl;
     std::cout <<"Data de Nascimento: " << dataNascimento << std::endl;
     std::cout <<"Endereco: " << endereco << std::endl;
     std::cout <<"Email: " << email << std::endl;
     std::cout <<"Telefone: " << telefone << std::endl;
     std::cout <<"Ano de Admissao: " << anoAdmissao << std::endl;
     std::cout <<"Numero de Matricula: " << numMatricula << std::endl;
     std::cout <<"Turmas: " << turmas << std::endl;
     std::cout <<"Boletins: "<< boletins << std::endl;
}

#endif
