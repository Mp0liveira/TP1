#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <iostream>
#include <unordered_set>
#include <stdexcept>
#include <regex>

using namespace std;

class Dominios {
    private:
        string valor;
    protected:
        virtual void verificaValor(string) = 0;
    public:
        virtual ~Dominios() {}
        void setValor(string);
        string getValor() const;
};

inline string Dominios::getValor() const {
    return valor;
}

class Classe : public Dominios {
    private:
        void verificaValor(string) override;

};

class Codigo : public Dominios {
    private:
        void verificaValor(string) override;
};

class Data : public Dominios {
    private:
        bool isBissexto(string);
        void verificaMes(string);
        void verificaValor(string) override;

};

class Matricula : public Dominios {
    private:
        void verificaValor(string) override;
};

class Resultado : public Dominios {
    private:
        void verificaValor(string) override;
};

class Senha : public Dominios {
    private:
        void verificaValor(string) override;
};

class Telefone : public Dominios {
    private:
        void verificaValor(string) override;
};

class Texto : public Dominios {
    private:
        void verificaValor(string) override;
};

#endif // DOMINIOS_H_INCLUDED
