// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int data){
//       this->data = data;
//       this->left = NULL;
//       this->right = NULL;
//     }
// };

// int main(){
//    Node*  one = new Node(10);
//    Node* two = new Node(20);
//    Node* three = new Node(30);
//    Node* four = new  Node(4) ;
//    one->left = two;
//    one->right = three;
//    three->left = four;
//    Node* tempr = one;
//    Node* templ =one;
//    while(tempr!=NULL || templ!=NULL){
    

//     tempr = tempr->right;
//     templ = templ->left;

//    }
//    cout<<endl;
// }


#include <SFML/Graphics.hpp>
// #include<bits/stdc++.h>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 800), "Chess Game");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        // Draw the chessboard (alternating colors)
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                sf::RectangleShape square(sf::Vector2f(100, 100));
                square.setPosition(i * 100, j * 100);
                if ((i + j) % 2 == 0)
                    square.setFillColor(sf::Color::White);
                else
                    square.setFillColor(sf::Color::Black);
                window.draw(square);
            }
        }

        window.display();
    }

    return 0;
}

