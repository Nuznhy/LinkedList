#include <iostream>
#include "LinkedList.h"
#include <typeinfo>

int data_type_check() {
    int a;
    std::cin >> a;
    if (a == 0) {
        std::cerr << "Wrong input!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        data_type_check();
    }
    else {
        return a;
    }
}

int main() {
    LinkedList list;
    bool bool_switch = true;
    int int_switch;
    int data;
    int index;
    while (bool_switch) {
        std::cout << "Welcome To Linked list" << std::endl;
        std::cout << "Choose what to do?" << std::endl;
        std::cout << "1. Add Node" << std::endl;
        std::cout << "2. Delete Node" << std::endl;
        std::cout << "3. Print List" << std::endl;
        std::cout << "4. Write to txt" << std::endl;
        std::cout << "5. Calculate Same" << std::endl;
        std::cout << "6. Exit" << std::endl;
        int_switch = data_type_check();

        switch (int_switch) {
        case 1: {
            std::cout << "enter data" << std::endl;
            list.add_node();
            break;
        }
        case 2: {
            std::cout << "enter index" << std::endl;
            index = data_type_check();
            list.delete_node(index);
            break;
        }
        case 3: {
            list.print_list();
            break;
        }
        case 4: {
            list.write();
            break;
        }
        case 5: {
            list.calc_same();
            break;
            
        }
        case 6: {
            bool_switch = false;
            break;
        }
        default: {
            std::cerr << "Inrorect" << std::endl;
            break;
        }
        }
    }


}
