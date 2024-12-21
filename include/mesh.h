

#ifndef GMTK_2024_MESH_H
#define GMTK_2024_MESH_H

#include <vector>
#include <glm/glm.hpp>
#include "texture.h"
#include "shader_program.h"

struct vertex_t
{
    glm::vec3 position;
    glm::vec3 normal;
    glm::vec2 tex_coord;
};

class Mesh
{
private:
    std::vector<vertex_t> vertices;
    std::vector<uint32_t> indices;
    std::vector<Texture*> textures;

    uint32_t vao, vbo, ebo;

public:
    Mesh(const std::vector<vertex_t>& vertices, const std::vector<uint32_t>& indices,  const std::vector<Texture*>& textures);
    void render(ShaderProgram* shader);
};

#endif //GMTK_2024_MESH_H
