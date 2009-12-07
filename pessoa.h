#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

class Pessoa
{
protected:
    QString nome;
    QString cpf;
    QString dataNascimento;
    QString endereco;
    QString email;
    QString telefone;
    unsigned int anoAdmissao;
public:
    Pessoa(QString n, QString c, QString dn, unsigned int aa);
    void setEndereco(QString end);
    void setEmail(QString e);
    void setTelefone(QString tel);
    QString getNome();
    QString getCpf();
    QString getDataNascimento();
    QString getEndereco();
    QString getEmail();
    QString getTelefone();
    unsigned int getAnoAdmissao();
};

#endif // PESSOA_H
