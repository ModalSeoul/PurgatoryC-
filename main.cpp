#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Purgatory");
    sf::RenderTexture renderTexture;

    // Font
    sf::Font font;
    font.loadFromFile("required/ostrich-regular.ttf");
    sf::Text text;
    text.setFont(font);
    text.setString("Purgatory");
    text.setCharacterSize(38);
    text.setColor(sf::Color::White);
    text.setPosition(15, 5);

    // Texture
    sf::Texture texture;
    texture.loadFromFile("images/menu_bg.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);

    // BGM
    // sf::Music music;
    // music.openFromFile("required/bgmusic.ogg");
    // music.play();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.draw(sprite);
        window.draw(text);
        window.display();
    }

    return 0;
}
