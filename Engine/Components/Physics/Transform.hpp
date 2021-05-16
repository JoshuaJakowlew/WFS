//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Preprocessor Directives
#ifndef TRANSFORM_HPP
#define TRANSFORM_HPP
//------------------------------------------
// Standard Library Including
#include <iostream>
//------------------------------------------
// Internal including

//------------------------------------------
// External Library including
#include <glm/vec2.hpp>
//------------------------------------------
/*!
@brief Transform - Transform component for entity
@vec2_t position - Positon of an entity in 2D space
@vec2_t rotation - Uniform vector representing rotation in 2D space
@vec2_t scale    - Vector representing scale of an entity in 2D space
@vec2_t speed    - Speed of an entity in 2D space
*/
struct Transform
{
private:
    using vec2_t = glm::vec2;
public:
    vec2_t position{};
    vec2_t rotation{};
    vec2_t scale{1.f, 1.f};
    vec2_t speed{};
};
//------------------------------------------
#endif // TRANSFORM_HPP