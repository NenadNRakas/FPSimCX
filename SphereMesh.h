// This class derives from MeshObject and creates a ID3D11Buffer of
// vertices and indices to represent a canonical sphere that is
// positioned at the origin with a radius of 1.0.
#pragma once

#include "MeshObject.h"

ref class SphereMesh : public MeshObject
{
internal:
    SphereMesh(_In_ ID3D11Device* device, uint32 segments);
};