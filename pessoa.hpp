#ifndef PESSOA_H_
#define PESSOA_H_
#include <string>

class Pessoa
{

      protected:
              std::string nome;
              std::string cpf;
              std::string dataNascimento;
              std::string endereco;
              std::string email;
              std::string telefone;
              unsigned int anoAdmissao;
      public:
             Pessoa(std::string n, std::string c, std::string dn, unsigned int aa);
             void setendereco(std::string end);
             void setemail(std::string e);
             void settelefone(std::string tel);
             std::string getnome();
             std::string getcpf();
             std::string getdataNascimento();
             std::string getendereco();
             std::string getemail();
             std::string gettelefone();
             unsigned int getanoAdmissao();
};

Pessoa::Pessoa(std::string n, std::string c, std::string dn, unsigned int aa)
{
    this->nome = n;
    this->cpf = c;
    this->dataNascimento = dn;
    this->anoAdmissao = aa;

}

void Pessoa::setendereco(std::string end)
{
    this->endereco = end;
}

void Pessoa::setemail(std::string e)
{
    this->email = e;
}

void Pessoa::settelefone(std::string tel)
{
    this->telefone = tel;
}

std::string Pessoa::getnome()
{
    return this->nome;
}

std::string Pessoa::getcpf()
{
    return this->cpf;
}

std::string Pessoa::getdataNascimento()
{
    return this->dataNascimento;
}

std::string Pessoa::getendereco()
{
    return this->endereco;
}

std::string Pessoa::getemail()
{
    return this->email;
}

std::string Pessoa::gettelefone()
{
    return this->telefone;
}

unsigned int Pessoa::getanoAdmissao()
{
    return this->anoAdmissao;
}

#endif