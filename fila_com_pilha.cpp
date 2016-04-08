#include <iostream>
#include <stack>

using namespace std;

class filha{
    stack<int> A, B;
public:
    void insere(){
        int i;
        cout << "Inserir: ";
        cin >> i;
        A.push(i);
    }
    void tira(){
        B.pop();
    }
    int topo(){
       return B.top();
    }
    void menu(){
        cout << "1 - Inserir\n2 - Remover\n3 - Mostrar Topo\n\n";
    }
    void passa(){
        B.push(A.top());
        A.pop();
    }
};

int main(){
    filha A;
    int op;
    do{
        A.menu();
        cin >> op;
        switch(op){
            case 1: //Adiciona
                A.insere();
                cout << "\nInserido\n";
                break;
            case 2: //Remove
                A.tira();
                cout << "\nRemovido\n";
                break;
            case 3: //Mostra o topo
                cout << "\nTopo: ";
                A.topo();
                break;
            default:
                cout << "\n\nINVALIDA!!!\n\n";
        };
    }while(op);

}
