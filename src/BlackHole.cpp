#include "BlackHole.hpp"

BlackHoleEffect::BlackHoleEffect()
{
    fireballTex.loadFromFile("../../data/BlackHole.png");
    fireballTex.setSmooth(true);

	shader.loadFromFile("../../data/shader.vert", "../../data/Shaders/BlackHole.frag");
	shader.setUniform("tex", fireballTex);

    startTime = currTime = 0.0f;
}

void BlackHoleEffect::Render(sf::RenderWindow *window, Camera* camera, float ang, Vector2f pos, Vector2f size)
{
    shader.setUniform("tick_start", startTime);
    shader.setUniform("projectile_time_factor", 2.0f);
    shader.setUniform("explosion_time_factor", 2.0f);
    shader.setUniform("is_exploding", isExploding);
    shader.setUniform("trail_length", 0.0f);
    shader.setUniform("tick", currTime);

    sf::Vector2f windowCenter = sf::Vector2f(window->getSize().x * 0.5f, window->getSize().y * 0.5f);
    RenderQuad(window, sf::Vector2f(pos.x, pos.y), ang, sf::Vector2f(size.x, size.y), &shader, camera);
    //RenderQuad(window, windowCenter, sf::Vector2f(300.0f, 300.0f), &shader);
}

void BlackHoleEffect::Affect()
{
  isExploding = 1.0f;
  startTime = currTime;
}

void BlackHoleEffect::Reset()
{
  startTime = currTime;
  isExploding = 0.0f;
}

void BlackHoleEffect::Update(float dt)
{
  this->currTime += dt;
}

  