#ifndef DISCIPLINA_H_
#define DISCIPLINA_H_

class Disciplina
{
private:
    unsigned short int serie;
    std::string id;
public:
    Disciplina();
    std::string getId();
    ~Disciplina();
};

Disciplina::Disciplina()
{
}

std::string Disciplina::getId()
{
    return id;
}

#endif
