#include "pessoa.h"

Pessoa::Pessoa(QString n, QString c, QString dn, unsigned int aa)
{
    this->nome = n;
    this->cpf = c;
    this->dataNascimento = dn;
    this->anoAdmissao = aa;
}

void Pessoa::setEndereco(QString end)
{
    this->endereco = end;
}

void Pessoa::setEmail(QString e)
{
    this->email = e;
}

void Pessoa::setTelefone(QString tel)
{
    this->telefone = tel;
}

QString Pessoa::getNome()
{
    return this->nome;
}

QString Pessoa::getCpf()
{
    return this->cpf;
}

QString Pessoa::getDataNascimento()
{
    return this->dataNascimento;
}

QString Pessoa::getEndereco()
{
    return this->endereco;
}

QString Pessoa::getEmail()
{
    return this->email;
}

QString Pessoa::getTelefone()
{
    return this->telefone;
}

unsigned int Pessoa::getAnoAdmissao()
{
    return this->anoAdmissao;
}
