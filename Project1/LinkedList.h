#include <fstream>
#include <iostream>


class Node {
public:
    char contry_name[50];
    char climate_zone[50];
    int number;
    Node* next;
};

class LinkedList {
private:
    Node* head, * tail;
    int len = 0;
public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void add_node() {
        Node* node = new Node;
        std::cin >> node->contry_name >> node->climate_zone >> node->number;
        node->next = nullptr;
        if (head == nullptr) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = tail->next;
        }
        len++;
    }

    void delete_node(int index) {
        Node* node = head;
        Node* prev = nullptr;
        if (node == NULL) {
            std::cout << "List is Empty" << std::endl;
            return;
        }
        if (index == 1) {
            prev = node;
            head = prev->next;
            len--;
            delete node;
            return;
        }
        for (int i = 1; i < index; i++) {
            prev = node;
            node = node->next;
        }
        prev->next = node->next;
        len--;
        delete node;
    }

    void calc_same(){
        Node* tmp = new Node, *node = head;
        int counter = 0;
        std::cout << "Enter data like: climate_zone number" << std::endl;
        std::cin >> tmp->climate_zone >> tmp->number;
        while (node != nullptr){
            if (strcmp(tmp->climate_zone, node->climate_zone) == 0 && tmp->number == node->number){
                counter++;
            }
            node = node->next;
        }
        std::cout << "Number of same elemets as " << tmp->climate_zone << " " << tmp->number << " " << "Counter = " << counter << std::endl;
    }

    void write() {
        Node* node = head;
        std::ofstream file;
        file.open("test.txt");
        while (node != nullptr) {
            file << node->contry_name << " " << node->climate_zone << " " << node->number << "\n";
            node = node->next;
        }
        file << std::endl;
        file.close();
    }

    void print_list() {
        Node* node = head;
        if (node == NULL) {
            std::cout << "List is Empty" << std::endl;
            return;
        }
        while (node != nullptr) {
            std::cout << node->contry_name<< " " << node->climate_zone << " " << node->number;
            node = node->next;
            std::cout << "\n";
        }
        std::cout << "\n";
        std::cout << "List len: " << len << std::endl;
    };
};
