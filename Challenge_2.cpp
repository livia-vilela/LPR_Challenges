/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <string>
#include <locale>


using namespace std;

int main()

{
    setlocale(LC_ALL, "portuguese");
    int acao;
    while (acao !=4) 
    {
        cout << ">> Bem - vinda à página do contribuinte Annabeth Chase! \n" << endl;
        cout << " > Selecione a opção que deseja realizar:\n\n 1) Ver meu perfil \n 2) Ver perfil doa instituição \n 3) Área de doação \n 4) Sair"<<endl;
        cin >> acao;

        switch(acao)
        {
        case 1: 
            {string name = "Annabeth Chase";
            char sexo = 'F';
            int idade = 31;
            string profissao = "Arquiteta / Professora de estratégia no Acampamento Meio-Sangue";
            int ano_ingresso = 2010;

            cout << "Nome: " << name<<endl;
            cout << "Sexo: " << sexo<<endl;
            cout << "Idade: " << idade<<endl;
            cout << "Profissões: " << profissao<<endl;
            cout << "Ano de ingresso na instituição: " << ano_ingresso<<endl;
        break;}

        case 2:
            {string instituicao = "C.A.C. - Centro de Ajuda aos Centauros";
            int ano_criacao = 354;
            int contribuintes = 328;
            int ajudados = 350;

            cout << "Nome: " << instituicao<<endl;
            cout << "Ano de Criação: " << ano_criacao << " D.C."<<endl;
            cout << "Quantidade de contribuintes: " << contribuintes<<endl;
            cout << "Quantidade de rebanhos ajudados: " << ajudados<<endl;
        break;}

        case 3:
            {double meta_diaria = 350;
            int arrecadacao = 0;
            double doacao = 0;
            double doacao_hora = 0;
            int hora = 0;

            cout << "Quanto você deseja doar hoje?\n";
            cin >> doacao;
            if (doacao >= meta_diaria) 
            {
                cout << "Obrigada! Você doou sua meta diária de dracmas de hoje!"<<endl; //dracmas = moeda do Olimpo
                arrecadacao += doacao;
            }
            else
            {
                arrecadacao += doacao;
                cout << "Doe mais para chegar à sua meta diária!\n >. Digite quanto você deseja doar por hora, faremos a cobrança automática."<<endl;

                for (int i = arrecadacao; i <meta_diaria; i+=doacao_hora)
                {
                    hora++;
                }
                cout << "Você atingiu sua meta diária de dracmas e doou por " << hora << " horas"<<endl;
            }
        break;}
        }
    }

}

