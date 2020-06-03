#include "SceneObject.h"

SceneObject::SceneObject(Geometry& geometry, QOpenGLShaderProgram& shader) :
    material(Material::standard()),
    transform(),
    geometry(geometry),
    shaderProgram(shader)
{
    geometry.generate();
}

void SceneObject::render() {
    //shaderProgram.use();
    //shaderProgram.setMat4("model", transform.toMat4());
    //shaderProgram.setUniform("material", material);
    geometry.render();
}

Material& SceneObject::getMaterial() {
    return material;
}

void SceneObject::setMaterial(const Material &material) {
    this->material = material;
}