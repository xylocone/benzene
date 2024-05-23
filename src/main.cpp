// Standard libraries
#include <iostream>

// External libraries
#include <sfml/graphics.hpp>
#include <sfml/window.hpp>
#include <fmt/core.h>

// Internal libraries
#include "lib/calc/calc.hpp"
#include "lib/renderer/renderer.hpp"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    render("Hello, World!");
    fmt::print("1 + 2 = {}\n", add(1, 2));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        sf::Text text;
        text.setString("Hello, World!");
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::Black);
        text.setPosition(10, 10);

        window.draw(text);

        window.display();
    }

    return 0;
}