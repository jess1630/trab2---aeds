/*Integrantes: Gabriel Ajeje, Jessica, Luiz Otavio, Matheus, Vanessa
Inicio: 04/10/2023 Entrega:/10/2023*/
#include<iostream>
#include<fstream>
using namespace std;
const int MAX_CHARS_LINE = 100;
const int MAX_CHARS = 100;
class Player
{
private:
    int order;
    int id;
    char* Nome;
    char* federation[4];
    char gender;
    char* title[3];
    int yob;
    No* prox;
    No* ant;
public:

};

class Lista
{
private:
    No* inicio;
    No* fim;
public:
    Lista();

};




// funcao que separa as informacoes do csv
void substring(char buff[MAX_CHARS_LINE], char aux[MAX_CHARS], int &i,
               char delim)
{
    int k = 0;
    while (buff[i] != delim)
    {
        aux[k] = buff[i];
        i++;
        k++;
    }
    aux[k] = '\0';
    i++;
}

int main ()
{
    Lista* lista = new Lista;
    int r;
    setlocale(LC_ALL, "Portuguese"); // inicio-leitura do arquivo
    ifstream fin("players_raw.csv");
    ofstream fout("f.csv");

    if (fin.is_open())
    {
        if (fout.is_open())
        {

            cout<<"Gerar arquivo de jogadores por: "<<endl
            <<"1 - Federacao"<<endl
            <<"2 - Genero"<<endl
            <<"3 - Titulo"<<endl
            <<"0 - Sair do programa"<<endl;
            cin>>r;
            do{

            } while(r>=0&&r<4);
        }
    }
    else
        cout << "Não conseguiu abrir o arquivo de escrita!";

    fin.close();
    return 0;
}
