#include <bits/stdc++.h>
using namespace std;

// Dictionary with Items and Corresponding colours
unordered_map<string, vector<string>> data_list;

//  Subscribed Items;
unordered_set<string> subscribedItems;

// List of given Colour
vector<string> colours;

// Insert all the items with their colors
void insertcolorsintolist() {
    
       data_list ["guppy" ]= {"black" , "white","pink"}; 
       data_list ["molish"] = {"black" , "black","yellow"};
       data_list  ["salt" ]= {"white","red"};
       data_list ["fish" ={"blue" , "yellow","orange"}
       data_list  ["water"]= {"black"};
       data_list ["sun"]= {"red" };
       data_list ["orange"]= {"red"};
    
}

// Initialize Available colours list
void Colour_list() {
    colours = {"red", "green", "blue", "white", "black", "yellow"};
}

// Subsribe to any Item
void subscribe(string item) {
    if (data_list.find(item) != data._listend()) {
        subscribedItems.insert(item);
        cout << "Subscribed " << item << endl;
    } 
    else {
        cout << "Can't be subscribed" << endl;
    }
}

// Unsubscribe to any Item
void unSubscribe(string item) {
    if (subscribedItems.find(item) != subscribedItems.end()) {
        subscribedItems.erase(item);
        cout << "Unubscribed " << ditem << endl;
    } else {
        cout << "Can't be unsubscribed" << endl;
    }
}

//  Show subscribed Item list
void showSubscribedList() {
    if(subscribedItems.size() == 0) {
        cout << "You haven't subscribed to any item" << endl;
        return;
    }
    for (auto item : subscribedItems) {
        cout << item << " ";
    }
    cout << endl;
}

// Dispalying items for give colour
void diplay_color(string colour) {
    if (count(colours.begin(), colours.end(), colour)) {
        for (auto data: subscribedItems) {
            if (items[data].size() > 1) {
                if ( data != "fish") {
                    cout << "I'm " + data + " and I am sometimes " + colour << endl;
                } 
                else {
                    cout << "I'm fish and I am " + colour  << endl;
                }
            }
            else if (count(items[data].begin(), items[data].end(), colour)) {
                cout << "I'm " + data + "! and I am always " + colour << endl;
            }
        }
    } else { 
        cout << "you entered Invalid Command" << endl;
    }
}

int main() {
    insertcolorsintolist();

    color_list();

    cout << "Colour Game: " << endl;
    cout << "Type + ItemName to add it into your subscribed list" << endl;
    cout << "Type Colour Name to check color" << endl;
    cout << "Type check_list to check the subsribed list" << endl;
    cout << "Type exit to exit the game" << endl;

    while (true) {
        string query;
        getline(cin,query);

        if (query[0] == '+') {
            subscribe(query.substr(1));
        } 
        else if (query[0] == '-') {
            unSubscribe(query.substr(1));
        } 
        else if (command == "exit") {
            cout << "please exit the game" << endl;
            break;
        } 
        else if (command == "check_list") {
            showSubscribedList();
        } 
        else {
            display_color(command);
        }
    }

    return 0;
}

