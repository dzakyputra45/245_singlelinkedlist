#include <iostream>
using namespace std;

struct Node {
    int noMhs;
    string name;
    Node* next;
};

Node* START = NULL;

void addNode() {
    int nim;
    string nama;
    Node* nodebaru = new Node();
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama: ";
    cin >> nama;
    nodebaru->noMhs = nim;
    nodebaru->name = nama;

    if(START == NULL || nim <= START ->noMhs) {
        if(START != NULL && nim == START->noMhs)
        {
            cout << "Nim sudah ada" << endl;
            return;
        }

        nodeBaru->next = START;
        START = nodebaru;
        return;
    }

    Node* previous = START;
    Node* current = START;

    While ((current != NULL) && (nim >= current->noMhs))
    {
        if (nim == current->noMhs)
        {
            cout << "Nim sudah ada" << endl;
            return;
        }
        previous = current;
        current = current->next;
    }
    
    nodeBaru->next = current;
    previous->next = nodeBaru;
}