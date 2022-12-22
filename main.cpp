#include "Product.h"
#include "Shelve.h"
#include "Bread.h"
#include "Eggs.h"
#include "Milk.h"
#include "Meat.h"
#include "Fish.h"
#include "Soap.h"
#include "Water.h"
#include "Refrigerator.h"
#include "Freezer.h"
#include <fstream>

vector<string> split(const string line, char delim);

int main() {
    vector<Shelve*> shelves;
    vector<Freezer*> freezers;
    vector<Refrigerator*> refrigerators;
    ifstream myFile;
    myFile.open("info.txt");
    string line;
    getline(myFile, line);
    cout << line << endl;
    int length = stoi(line);
    for(int i = 0; i < length; i++){
        getline(myFile, line);
        cout << line << endl;
        vector<string> commands = split(line, ' ');
        if(commands[0] == "Shelve"){
            Shelve* shelve = new Shelve();
            int productsNum = stoi(commands[1]);
            int command = 2;
            for(int i = 0; i < productsNum; i++){
                if(commands[command] == "Soap"){
                    Soap* prod = new Soap(commands[command+1], stoi(commands[command+2]), stod(commands[command+3]));
                    shelve->addProduct(prod);
                    command += 4;
                }else if(commands[command] == "Bread"){
                    Bread* prod = new Bread(commands[command+1], stoi(commands[command+2]), stod(commands[command+3]));
                    shelve->addProduct(prod);
                    command += 4;
                }else if(commands[command] == "Water"){
                    Water* prod = new Water(commands[command+1], stoi(commands[command+2]), stod(commands[command+3]));
                    shelve->addProduct(prod);
                    command += 4;
                }
            }
            shelves.push_back(shelve);
        }
        else if(commands[0] == "Freezer"){
            Freezer* freezer = new Freezer();
            int productsNum = stoi(commands[1]);
            int command = 2;
            for(int i = 0; i < productsNum; i++){
                if(commands[command] == "Meat"){
                    Meat* prod = new Meat(commands[command+1], stoi(commands[command+2]), stod(commands[command+3]));
                    freezer->addProduct(prod);
                    command += 4;
                }else if(commands[command] == "Fish"){
                    Fish* prod = new Fish(commands[command+1], stoi(commands[command+2]), stod(commands[command+3]));
                    freezer->addProduct(prod);
                    command += 4;
                }
            }
            freezers.push_back(freezer);
        }
        else if(commands[0] == "Refrigerator"){
            Refrigerator* refrigerator = new Refrigerator();
            int productsNum = stoi(commands[1]);
            int command = 2;
            for(int i = 0; i < productsNum; i++){
                if(commands[command] == "Milk"){
                    Milk* prod = new Milk(commands[command+1], stoi(commands[command+2]), stod(commands[command+3]));
                    refrigerator->addProduct(prod);
                    command += 4;
                }else if(commands[command] == "Eggs"){
                    Eggs* prod = new Eggs(commands[command+1], stoi(commands[command+2]), stod(commands[command+3]), stoi(commands[command+4]));
                    refrigerator->addProduct(prod);
                    command += 5;
                }
            }
            refrigerators.push_back(refrigerator);
        }
    }
    while(1){
        cout << "Enter command: ";
        string entered;
        getline(cin, entered);
        vector<string> parametrs = split(entered, ' ');
        string command = parametrs[0];
    }
}






















vector<string> split(const string line, char delim) {
    vector<string> result;
    string part = "";
    for(int i = 0; i < line.length(); i++){
        if(line[i] != delim && line.length() - 1 != i){
            part += line[i];
        }
        else if(line.length() - 1 == i){
            part += line[i];
            result.push_back(part);
        }
        else{
            result.push_back(part);
            part = "";
        }
    }
    return result;
};
