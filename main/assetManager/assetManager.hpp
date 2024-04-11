#pragma once

// declarations
std::map<std::string, sf::Texture> m_textures;
std::map<std::string, sf::Font> m_fonts;
std::map<std::string, sf::Shader*> m_shaders;

class AssetManager
{

public:
    void addTexture(std::string);
    void addFont(std::string);
    void addShader(std::string);
};

void AssetManager::addTexture(std::string path)
{
        sf::Texture texture;

        if (!texture.loadFromFile("assets/sprites/" + path))
        {
            std::cout << "ASSET: Not found - " << path << " not found";
        }

        m_textures[path] = texture;
}

void AssetManager::addFont(std::string path)
{
        sf::Font font;

        if (!font.loadFromFile("assets/" + path))
        {
            std::cout << "FONT: Not found - " << path << " not found";
        }

        m_fonts[path] = font;
}
