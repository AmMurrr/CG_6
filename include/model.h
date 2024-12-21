

#ifndef GMTK_2024_MODEL_H
#define GMTK_2024_MODEL_H

#include <vector>
#include "mesh.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

class Model
{
public:
    explicit Model(const char* filename);
    void render(ShaderProgram* shader_program);
    void render();
    void set_shader(ShaderProgram* shader_program);
    void set_texture(Texture* texture);
    ShaderProgram* get_shader() const;

    glm::mat4 model;
private:
    std::vector<Mesh> meshes;

    ShaderProgram* shader_program = nullptr;
    Texture* texture = nullptr;
    void process_mesh(aiMesh* mesh, const aiScene* scene);

};
#endif //GMTK_2024_MODEL_H
