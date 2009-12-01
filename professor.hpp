#ifndef PROFESSOR_H_
#define PROFESSOR_H_
#include <string>
#include "./pessoa.hpp"

class Professor : public Pessoa
{
    private:
            bool exclusividade;
            double salario;
            unsigned short int horas;
            std::list<Turma*> turmas;
            unsigned long int numChapa;
            std::string titulacao;
    public:
           Professor(unsigned long int n);
           void setturma(Turma* turma);
           std::list<Turma*> getturmas();
           void setexclusividade(bool esc);
           bool getexclusividade();
           unsigned long int getnumChapa();
           void sethoras(unsigned short int h);
           unsigned short int gethoras();
           void settitulacao(std::string tit);
           std::string gettitulacao();
           double setsalario(double sal);
           void getsalario();
           void getCadastro();
           ~Professor();
};

Professor::Professor(unsigned long int n)
{
 	numChapa = n;
}

void Professor::setturma(Turma* turma)
{
}

std::list<Turma*> Professor::getturmas()
{
}

void Professor::setexclusividade(bool esc)
{
 	  exclusividade = esc;
}

bool Professor::getexclusividade()
{
 	  return exclusividade;
}

unsigned long int Professor::getnumChapa()
{
     return numChapa;
}

void Professor::sethoras(unsigned short int h)
{
 	  horas = h;
}

unsigned short int Professor::gethoras()
{
 	  return horas;
}

void Professor::settitulacao(std::string tit)
{
 	  titulacao = tit;
}

std::string Professor::gettitulacao()
{
     return titulacao;
}

double Professor::setsalario(double sal)
{
 		 salario = sal;
}

void Professor::getsalario()
{
 	  return salario;
}

void Professor::getCadastro()
{
     std::cout <<"Nome: " << nome << std::endl;
     std::cout <<"Cpf: "<< cpf << std::endl;
     std::cout <<"Data de Nascimento: " << dataNascimento << std::endl;
     std::cout <<"Endereco: " << endereco << std::endl;
     std::cout <<"Email: " << email << std::endl;
     std::cout <<"Telefone: " << telefone << std::endl;
     std::cout <<"Ano de Admissao: " << anoAdmissao << std::endl;
     std::cout <<"Regime: ";
     if (exclusividade == true)
         std::cout << "Exclusividade" << std::endl;
     else cout << "Parcial" << std::endl;
     std::cout <<"Salario: " << salario << std::endl;
     std::cout <<"Horas: " << horas << std::endl;
     std::cout <<"Numero de Chapa: "<< numChapa << std::endl;
     std::cout <<"Titulacao: " << titulacao << std::endl;

}
